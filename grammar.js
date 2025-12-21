const functions = require('./grammar/functions.js');
const typoscriptObjects = require('./grammar/typoscript-objects.js');
const typoscriptModifierFunctions = require('./grammar/typoscript-modifiers.js');
const symfonyPredefined = require('./grammar/symfony-predefined.js');

const IDENTIFIER_PART = '[a-zA-Z0-9_\\-]+';
const IDENTIFIER_REGEX = new RegExp(IDENTIFIER_PART);

module.exports = grammar({
    name: 'typoscript',

    extras: $ => [
        /[\t ]/,
    ],
    rules: {
        typoscript: $ => repeat(choice(
            $._block_item,
            $.condition_block,
            $._condition_end_line,
        )),

        _block_item: $ => choice(
            /\n/,
            $.modification_line,
            alias($._fake_reference_line, $.assignment_line),
            $.reference_line,
            $.assignment_line,
            $.multiline_line,
            $.deletion_line,
            $.copy_line,
            $.configuration_block,
            $._imports,
            $.comment,
            $.single_line_comment,
        ),

        string: $ => choice(
            functions.stringWithConstantsSeq($, '"'),
            functions.stringWithConstantsSeq($, '\''),
        ),

        // Identifier
        identifier: $ => seq(IDENTIFIER_REGEX, optional(repeat1(choice(IDENTIFIER_REGEX, '\\.', '.', '\\')))),

        copy_identifier: $ => seq(optional('.'), alias($.identifier, 'identifier')),

        _constant_identifier: $ => seq('$', alias($.identifier, 'identifier')),

        // Constants
        constant_null_coalescing: $ => '??',
        _constant_simple: $ => seq('{', $._constant_identifier, '}'),
        _constant_null: $ => seq('{', $._constant_identifier, repeat1(seq($.constant_null_coalescing, $._constant_identifier)), '}'),
        constant: $ => choice($._constant_simple, $._constant_null),

        // "Operators"

        assignment_line: $ => seq($.identifier, '=', optional(choice($.cobject, $.value)), '\n'),

        multiline_line: $ => seq($.identifier, $.multiline_value, optional($._comments), '\n'),

        deletion_line: $ => seq($.identifier, '>', optional($._comments), '\n'),

        copy_line: $ => seq($.identifier, '<', $.copy_identifier, optional($._comments), '\n'),

        reference_line: $ => seq($.identifier, alias(/=\s*</, '=<'), alias($.identifier, $.reference_identifier), '\n'),

        _fake_reference_line: $ => seq($.identifier, /=\s*</, alias(seq(optional('?'), $.identifier, $.value), $.value), '\n'),

        modification_line: $ => seq(
            $.identifier,
            ':=',
            choice(prec(2, $.modifier_predefined), prec(1, $.modifier_function)),
            $.modifier_parameters,
            optional($._comments),
            '\n',
        ),

        // Blocks

        configuration_block: $ => seq($.identifier, $.block),

        block: $ => seq(alias('{', $.block_punctuation), alias(repeat($._block_item), $.block_inner_content), alias('}', $.block_punctuation)),

        // "Values"

        value: $ => repeat1(choice($.constant, alias($.comment, 'fake_comment'), /[^\n]/, '{', '}')),

        multiline_value: $ => seq(
            '(',
            alias(repeat(seq(optional(repeat1(choice($.constant, alias($.comment, 'fake_comment'), /[^\n{]/, '{'))), '\n')), $.multiline_value_content),
            ')',
        ),

        cobject: $ => typoscriptObjects,

        modifier_predefined: $ => typoscriptModifierFunctions,

        modifier_function: $ => /[A-Za-z0-9_\-\\]+/,

        modifier_parameters: $ => seq('(', functions.sep(',', $.modifier_parameter), ')'),

        modifier_parameter: $ => repeat1(choice($.constant, /[^,\)]/, alias($.modifier_parameters, 'function'))),

        // Comments

        _comments: $ => choice($.comment, $.single_line_comment),

        comment: $ => token(seq('/*', /[^*]*\*+([^/*][^*]*\*+)*/, '/')),

        single_line_comment: $ => token(seq(choice('#', '//'), /.*/)),

        // Imports

        _imports: $ => choice($.import_legacy, $.import),

        import_legacy: $ => seq(
            '<',
            'INCLUDE_TYPOSCRIPT',
            ':',
            /\s*/,
            alias('source', $.condition_attribute),
            '=',
            $.string,
            optional(seq(/\s+/, alias(/[A-Za-z0-9_\-\\]+/, $.condition_attribute), '=', $.string)),
            '>',
        ),

        import: $ => seq('@import', $.string),

        // Conditions

        _condition_segment: $ => seq($.condition, optional($.condition_bool_legacy)),

        condition_bool_legacy: $ => choice('&&', '||', 'AND', 'OR'),

        condition: $ => seq('[', $._condition_inner, ']'),

        condition_block: $ => prec.right(seq($._condition_line, optional(repeat1($._block_item)))),

        _condition_line: $ => seq(choice(alias($._condition_else, $.condition), repeat1($._condition_segment)), optional($._comments), '\n'),

        _condition_inner: $ => repeat1(choice(
            seq($.symfony_expression, optional($.symfony_comment)),
            $.symfony_comment,
        )),

        _condition_else: $ => seq(
            '[',
            alias(functions.caseInsensitive('else'), $.condition_else),
            ']',
        ),

        _condition_end: $ => seq(
            '[',
            alias(functions.caseInsensitive('(end|global)'), $.condition_end),
            ']',
        ),

        _condition_end_line: $ => seq(alias($._condition_end, $.condition), optional($._comments), '\n'),

        // Symfony Expression Language

        symfony_comment: $ => token(seq('/*', /[^*\n]*\*+([^/*\n][^*\n]*\*+)*/, '/')),

        symfony_expression: $ => choice(
            $.symfony_ternary_expression,
            $.symfony_math_unary_expression,
            $.symfony_unary_expression,
            $.symfony_binary_expression,
            $.symfony_null_coalescing,
            $.symfony_function_call,
            $.symfony_array_access,
            $.symfony_property_access,
            $.symfony_method_call,
            $.symfony_literal,
            $._symfony_variable,
            $.symfony_parenthesized_expression,
        ),

        symfony_literal: $ => choice(
            $.symfony_string,
            $.symfony_number,
            $.symfony_boolean,
            $.symfony_null,
            $.symfony_array,
            $.symfony_object,
            alias($._constant_simple, $.constant),
        ),

        symfony_number: $ => token(choice(
            /\d+(_\d+)*(\.\d+(_\d+)*)?([eE][+-]?\d+(_\d+)*)?/,
            /\.\d+(_\d+)*([eE][+-]?\d+(_\d+)*)?/,
        )),

        symfony_string: $ => choice(functions.symfonyString($, '"'), functions.symfonyString($, '\'')),

        symfony_boolean: $ => choice('true', 'false'),

        symfony_null: $ => 'null',

        symfony_array: $ => seq('[', optional(seq($.symfony_expression, repeat(seq(',', $.symfony_expression)))), ']'),

        symfony_object: $ => seq('{', optional(seq($.symfony_pair, repeat(seq(',', $.symfony_pair)))), '}'),

        symfony_pair: $ => seq(choice($.symfony_string, $._symfony_variable), ':', $.symfony_expression),

        _symfony_variable: $ => prec(2, choice($.symfony_variable, $.symfony_built_in_variable)),

        symfony_built_in_variable: $ => choice(...symfonyPredefined.objects),

        symfony_variable: $ => /[a-zA-Z_][a-zA-Z0-9_]*/,

        symfony_parenthesized_expression: $ => seq('(', $.symfony_expression, ')'),

        symfony_function_call: $ => prec(3, seq(
            choice($.symfony_predefined_function, alias($.symfony_variable, $.symfony_function)),
            '(',
            optional(seq(alias($.symfony_expression, $.symfony_function_parameter), repeat(seq(',', alias($.symfony_expression, $.symfony_function_parameter))))),
            ')',
        )),

        symfony_predefined_function: $ => choice(...symfonyPredefined.functions),

        symfony_property_access: $ => prec(2, seq(
            choice(
                $._symfony_variable,
                $.symfony_array_access,
                $.symfony_property_access,
                $.symfony_function_call,
                $.symfony_method_call,
                $.symfony_parenthesized_expression,
            ),
            optional($.symfony_comment),
            choice('.', '?.'),
            optional($.symfony_comment),
            alias($.symfony_variable, $.symfony_property),
        )),

        symfony_null_coalescing: $ => prec.left(3, seq($.symfony_expression, '??', $.symfony_expression)),

        symfony_method_call: $ => prec(3, seq(
            choice(
                $._symfony_variable,
                $.symfony_array_access,
                $.symfony_property_access,
                $.symfony_method_call,
                $.symfony_function_call,
                $.symfony_parenthesized_expression,
            ),
            optional($.symfony_comment),
            choice('.', '?.'),
            optional($.symfony_comment),
            alias($.symfony_variable, $.symfony_method),
            '(',
            optional(seq(alias($.symfony_expression, $.symfony_method_parameter), repeat(seq(',', alias($.symfony_expression, $.symfony_method_parameter))))),
            ')',
        )),

        symfony_array_access: $ => prec(4, seq($.symfony_expression, '[', $.symfony_expression, ']')),

        symfony_condition_operator: $ => choice('==', '===', '!=', '!==', '<', '>', '>=', '<=', 'not in', 'in', 'contains', 'starts with', 'ends with', 'matches'),

        symfony_binary_expression: $ => choice(
            // Level 14 (lowest): or, ||
            prec.left(1, seq($.symfony_expression, alias(choice('or', '||'), $.symfony_condition_operator), $.symfony_expression)),
            // Level 13: xor
            prec.left(2, seq($.symfony_expression, alias('xor', $.symfony_condition_operator), $.symfony_expression)),
            // Level 12: and, &&
            prec.left(3, seq($.symfony_expression, alias(choice('and', '&&'), $.symfony_condition_operator), $.symfony_expression)),
            // Level 11: |
            prec.left(4, seq($.symfony_expression, alias('|', $.symfony_condition_operator), $.symfony_expression)),
            // Level 10: ^
            prec.left(5, seq($.symfony_expression, alias('^', $.symfony_condition_operator), $.symfony_expression)),
            // Level 9: &
            prec.left(6, seq($.symfony_expression, alias('&', $.symfony_condition_operator), $.symfony_expression)),
            // Level 8: ==, ===, !=, !==, <, >, >=, <=, not in, in, contains, starts with, ends with, matches
            prec.left(7, seq($.symfony_expression, $.symfony_condition_operator, $.symfony_expression)),
            // Level 7: .., <<, >>
            prec.left(8, seq($.symfony_expression, alias(choice('..', '<<', '>>'), $.symfony_condition_operator), $.symfony_expression)),
            // Level 6: +, -
            prec.left(9, seq($.symfony_expression, alias(choice('+', '-'), $.symfony_condition_operator), $.symfony_expression)),
            // Level 5: ~ (concatenation)
            prec.left(10, seq($.symfony_expression, alias('~', $.symfony_condition_operator), $.symfony_expression)),
            // Level 4: *, /, %
            prec.left(11, seq($.symfony_expression, alias(choice('*', '/', '%'), $.symfony_condition_operator), $.symfony_expression)),
            // Level 3: ** (right associative)
            prec.right(12, seq($.symfony_expression, alias('**', $.symfony_condition_operator), $.symfony_expression)),
        ),

        symfony_unary_expression: $ => prec(13, seq(alias(choice('not', '!'), $.symfony_condition_operator), $.symfony_expression)),

        symfony_math_unary_expression: $ => prec(14, seq(alias(choice('-', '+', '~'), $.symfony_condition_operator), $.symfony_expression)),

        symfony_ternary_expression: $ => choice(
            prec.right(1, seq(
                $.symfony_expression,
                alias('?', $.symfony_ternary_operator),
                $.symfony_expression,
                alias(':', $.symfony_ternary_operator),
                $.symfony_expression,
            )),
            prec.right(1, seq(
                $.symfony_expression,
                alias('?:', $.symfony_ternary_operator),
                $.symfony_expression,
            )),
            prec.right(1, seq(
                $.symfony_expression,
                alias('?', $.symfony_ternary_operator),
                $.symfony_expression,
            )),
        ),
    },
});

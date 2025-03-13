module.exports = grammar({
    name: 'typoscript',

    extras: $ => [/[\t ]/],

    rules: {

        typoscript: $ => repeat(choice(
            $._block_item,
            $.condition_block,
            $.condition_end
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
            $.single_line_comment
        ),

        assignment_line: $ => seq($.identifier, '=', optional(choice($.cobject, $.value)), '\n'),

        multiline_line: $ => seq($.identifier, $.multiline_value, optional($._comments), '\n'),

        deletion_line: $ => seq($.identifier, '>', optional($._comments), '\n'),

        copy_line: $ => seq($.identifier, '<', alias($.identifier, $.copy_identifier), optional($._comments), '\n'),

        reference_line: $ => seq($.identifier, alias(/=\s*</, "=<"), alias($.identifier, $.reference_identifier), '\n'),

        _fake_reference_line: $ => seq($.identifier, /=\s*</, alias(seq($.identifier, $.value), $.value), '\n'),

        modification_line: $ => seq($.identifier, ':=', choice($.modifier_predefined, $.modifier_function), $.modifier_parameters, optional($._comments), '\n'),

        configuration_block: $ => seq($.identifier, $.block),

        _condition_segment: $ => seq($.condition, optional($.condition_bool)),

        condition_bool: $ => choice('&&', '||', 'AND', 'OR'),

        condition: $ => seq('[', $._condition_inner, ']'),

        condition_block: $ => prec.right(seq($._condition_line, optional(repeat1($._block_item)))),

        _condition_line: $ => seq(choice($.condition_else, repeat1($._condition_segment)), optional($._comments), '\n'),

        _condition_inner: $ => repeat1(choice($.constant, $.condition_bool, alias($.condition, 'bracket_parameter'), /[^\]]/)),

        condition_else: $ => seq(caseInsensitive('\\[else\\]')),

        condition_end: $ => seq(caseInsensitive('\\[(end|global)\\]'), '\n'),

        block: $ => seq(alias('{', $.block_punctuation), repeat($._block_item), alias('}', $.block_punctuation)),

        constant: $ => seq('{$', /[a-zA-Z0-9_\-\\\.]+/, '}'),

        value: $ => repeat1(choice(/[^\n]/, $.constant)),

        multiline_value: $ => seq('(', repeat(seq(optional(repeat1(choice($.constant, /[^\n]/))), '\n')), ')'),

        identifier: $ => /((?:\.)|(?:[a-zA-Z0-9_\-\\]+(?:\.[a-zA-Z0-9_\-\\]*)*))/,

        cobject: $ => /(?:CASE|COA|COA_INT|CONTENT|EDITPANEL|FILE|FILES|FLUIDTEMPLATE|HMENU|TMENU|IMAGE|IMG_RESOURCE|LOAD_REGISTER|RECORDS|RESTORE_REGISTER|SVG|TEMPLATE|TEXT|USER|USER_INT|PAGE|EXTBASEPLUGIN|PAGEVIEW)/,

        modifier_predefined: $ => /(prepend|append|remove|replace)String|(addTo|removeFrom|unique|reverse|sort)List/,

        modifier_function: $ => /[a-zA-Z0-9_\-\\]+/,

        modifier_parameters: $ => seq("(", sep(",", $.modifier_parameter), ")"),

        modifier_parameter: $ => repeat1(choice($.constant, /[^,\)]/, alias($.modifier_parameters, "function"))),

        _comments: $ => choice($.comment, $.single_line_comment),

        comment: $ => token(seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/")),

        single_line_comment: $ => token(seq(choice("#", "//"), /.*/)),

        string: $ => choice(
            stringWithConstantsSeq($, '"'),
            stringWithConstantsSeq($, '\'')
        ),

        _imports: $ => choice($.import_legacy, $.import),

        import_legacy: $ => seq("<", "INCLUDE_TYPOSCRIPT", ":", /\s*/, "source=", $.string, optional(seq(/\s+/, alias($.modifier_function, $.condition_attribute), '=', $.string)), ">"),

        import: $ => seq('@import', $.string)
    }
});

function repeatedStringWithConstants($, stringForRegex, dontEscape) {
    var regex = '[^' + (dontEscape === true ? '' : '\\') + stringForRegex + ']';
    return optional(repeat1(choice(
        $.constant,
        new RegExp(regex)
    )));
}

function stringWithConstantsSeq($, startString, endString, endStringForRegex) {
    if (typeof (endString) === 'undefined') {
        endString = startString;
    }
    if (typeof (endStringForRegex) === 'undefined') {
        endStringForRegex = endString;
    }
    return seq(startString, repeatedStringWithConstants($, endStringForRegex), endString);
}

function sep(separator, rule) {
    return optional(sep1(separator, rule));
}

function sep1(separator, rule) {
    return seq(rule, repeat(seq(separator, rule)));

}
function toCaseInsensitive(a) {
    var ca = a.charCodeAt(0);
    if (ca >= 97 && ca <= 122) return `[${a}${a.toUpperCase()}]`;
    if (ca >= 65 && ca <= 90) return `[${a.toLowerCase()}${a}]`;
    return a;
}

function caseInsensitive(keyword) {
    return new RegExp(keyword
        .split('')
        .map(toCaseInsensitive)
        .join('')
    )
}


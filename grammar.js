module.exports = grammar({
  name: 'TypoScript',

  extras: $ => [/[\t ]/ ],

  rules: {

    typoscript: $ => repeat(choice(
      $._block_item
    )),

    _block_item: $ => choice(
      /\s*\n/,
      $.modification_line,
      $.reference_line,
      $.assignment_line,
      $.deletion_line,
      $.copy_line,
      $.configuration_block,
      $._imports,
      $.condition,
      $.comment,
      $.single_line_comment
    ),

    assignment_line: $ => seq($.identifier, '=', optional(choice($.value, $.multiline_value)), '\n'),

    deletion_line: $ => seq($.identifier, '>', optional($._comments), '\n'),

    copy_line: $ => seq($.identifier, '<', alias($.identifier, $.copy_identifier), optional($._comments), '\n'),

    reference_line: $ => seq($.identifier, /=\s*</, alias($.identifier, $.reference_identifier), optional($._comments), '\n'),

    modification_line: $ => seq($.identifier, ':=', $.modifier_function, $.modifier_parameters, optional($._comments), '\n'),

    configuration_block: $ => seq($.identifier, $.block),

    condition: $ => seq('[', /[^\]]*/, ']'),

    block: $ => seq(alias('{', $.block_punctuation), repeat($._block_item), alias('}', $.block_punctuation)),

    constant: $ => seq('{$', /[a-zA-Z0-9_\-\\\.]+/, '}'),

    value: $ => repeat1(choice(/[^\n]/, $.constant)),

    multiline_value: $ => stringWithConstants($, '(', ')', ')', true),

    identifier: $ => /((?:\.)|(?:[a-zA-Z0-9_\-\\]+(?:\.[a-zA-Z0-9_\-\\]*)*))/,

    modifier_function: $ => /[a-zA-Z0-9_\-\\]+/,

    modifier_parameters: $ => seq("(", sep(",", $.modifier_parameter), ")"),

    modifier_parameter: $ => repeat1(choice($.constant, /[^,\)]/)),

    _comments: $ => choice($.comment, $.single_line_comment),

    comment: $ => token(seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/")),

    single_line_comment: $ => token(seq(choice("#", "//"), /.*/)),

    string: $ => choice(
      stringWithConstants($, '"'),
      stringWithConstants($, '\'')
    ),

    _imports: $ => choice($.import_legacy, $.import),

    import_legacy: $ => seq("<", "INCLUDE_TYPOSCRIPT", ":", /\s*/, "source=", $.string, optional(seq(/\s+/, alias($.modifier_function, $.condition_attribute), '=', $.string)), ">"),

    import: $ => seq('@import', $.string)
  }
});

function stringWithConstants($, startString, endString, endStringForRegex) {
  if(typeof(endString) === 'undefined') {
    endString = startString;
  }
  if(typeof(endStringForRegex) === 'undefined') {
    endStringForRegex = endString;
  }
  return seq(startString, optional(repeat1(choice(
    $.constant,
    new RegExp('[^\\'+endStringForRegex+']')
  ))), endString);
}

function sep(separator, rule) {
  return optional(sep1(separator, rule));
}

function sep1(separator, rule) {
  return seq(rule, repeat(seq(separator, rule)));
}

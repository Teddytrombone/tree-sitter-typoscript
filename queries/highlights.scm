(identifier) @type

(constant) @constant

(modifier_function) @function
(condition) @function.condition
(condition_end) @function.condition
(condition_else) @function.condition


[
  "@import"
  "INCLUDE_TYPOSCRIPT"
  (modifier_predefined)
  (cobject)
] @keyword

[
  (comment)
  (single_line_comment)
] @comment

[
  (string)
  (multiline_value)
] @string

[
  "="
  ">"
  "<"
  ":="
  (condition_bool)
] @operator

[
  ","
] @punctuation.delimiter

[
 "("
 ")"
 (block_punctuation)
 ] @punctuation.bracket

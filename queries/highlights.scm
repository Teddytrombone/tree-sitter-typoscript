(identifier) @type

(constant) @constant

(modifier_function) @function
(condition) @function
(condition_predefined) @function


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

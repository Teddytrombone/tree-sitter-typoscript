(identifier) @type

(constant) @constant

[
  "@import"
  "INCLUDE_TYPOSCRIPT"
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
] @operator

[
  ","
] @punctuation.delimiter

[
 "("
 ")"
 (block_punctuation)
 ] @punctuation.bracket

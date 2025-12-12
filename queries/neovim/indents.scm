(block) @indent.begin

(block
  "}" @indent.end)

[
  "{"
  "}"
] @indent.branch

[
  (comment)
  (multiline_value)
] @indent.ignore

# tree-sitter-typoscript

[TypoScript](https://docs.typo3.org/m/typo3/reference-typoscript/main/en-us/) grammar for [tree-sitter](https://github.com/tree-sitter/tree-sitter).

## Supported TYPO3 versions

This grammar supports most of the current state of the TypoScript syntax and partially supports legacy features.
Almost full support should be available for TYPO3 9 and newer. Older versions are only partially supported.

## Conditions and Symfony Expression Language

With TYPO3 v9 the [Symfony Expression Language (SEL)](https://symfony.com/doc/current/reference/formats/expression_language.html) is used for conditions.
This grammar has full support for all SEL syntax features and builtin objects and functions of TYPO3.

## Known limitations

### Legacy conditions

As it is not possible to distinguish between legacy and symfony based conditions, legacy conditions are parsed as they would use
SEL syntax. So there could be errors and highlighting of the conditions for example could be wrong.

### Reference assignments

There are some limitations with [references](https://docs.typo3.org/m/typo3/reference-typoscript/main/en-us/Syntax/Operators/Index.html#references-with).
If you use an assignments with HTML tags, this cannot be distinguished properly from references with tree-sitter.
As it would require to have a look at the whole content and decide afterwards, which is not possible.
We've done our best to parse such cases properly, but the operator in this case cannot be correctly parsed and highlighted.

Maybe this could be achieved with an external scanner. Feel free to make an PR 😉

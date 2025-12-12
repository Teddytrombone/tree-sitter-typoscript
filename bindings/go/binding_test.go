package tree_sitter_typoscript_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_typoscript "github.com/teddytrombone/tree-sitter-typoscript/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_typoscript.Language())
	if language == nil {
		t.Errorf("Error loading TypoScript grammar")
	}
}

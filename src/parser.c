#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 121
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 74
#define ALIAS_COUNT 5
#define TOKEN_COUNT 42
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 8

enum {
  aux_sym__block_item_token1 = 1,
  anon_sym_EQ = 2,
  anon_sym_LF = 3,
  anon_sym_GT = 4,
  anon_sym_LT = 5,
  aux_sym_reference_line_token1 = 6,
  anon_sym_COLON_EQ = 7,
  anon_sym_AMP_AMP = 8,
  anon_sym_PIPE_PIPE = 9,
  anon_sym_AND = 10,
  anon_sym_OR = 11,
  anon_sym_LBRACK = 12,
  anon_sym_RBRACK = 13,
  aux_sym__condition_inner_token1 = 14,
  aux_sym_condition_predefined_token1 = 15,
  anon_sym_LBRACE = 16,
  anon_sym_RBRACE = 17,
  anon_sym_LBRACE_DOLLAR = 18,
  aux_sym_constant_token1 = 19,
  aux_sym_value_token1 = 20,
  anon_sym_LPAREN = 21,
  aux_sym_multiline_value_token1 = 22,
  anon_sym_RPAREN = 23,
  sym_identifier = 24,
  sym_cobject = 25,
  sym_modifier_predefined = 26,
  sym_modifier_function = 27,
  anon_sym_COMMA = 28,
  aux_sym_modifier_parameter_token1 = 29,
  sym_comment = 30,
  sym_single_line_comment = 31,
  anon_sym_DQUOTE = 32,
  aux_sym_string_token1 = 33,
  anon_sym_SQUOTE = 34,
  aux_sym_string_token2 = 35,
  anon_sym_INCLUDE_TYPOSCRIPT = 36,
  anon_sym_COLON = 37,
  aux_sym_import_legacy_token1 = 38,
  anon_sym_source_EQ = 39,
  aux_sym_import_legacy_token2 = 40,
  anon_sym_ATimport = 41,
  sym_typoscript = 42,
  sym__block_item = 43,
  sym_assignment_line = 44,
  sym_deletion_line = 45,
  sym_copy_line = 46,
  sym_reference_line = 47,
  sym_modification_line = 48,
  sym_configuration_block = 49,
  sym__condition_segment = 50,
  sym_condition_bool = 51,
  sym_condition = 52,
  aux_sym__condition_inner = 53,
  sym_condition_predefined = 54,
  sym_block = 55,
  sym_constant = 56,
  sym_value = 57,
  sym_multiline_value = 58,
  sym_modifier_parameters = 59,
  sym_modifier_parameter = 60,
  sym__comments = 61,
  sym_string = 62,
  sym__imports = 63,
  sym_import_legacy = 64,
  sym_import = 65,
  aux_sym_typoscript_repeat1 = 66,
  aux_sym_block_repeat1 = 67,
  aux_sym_value_repeat1 = 68,
  aux_sym_multiline_value_repeat1 = 69,
  aux_sym_modifier_parameters_repeat1 = 70,
  aux_sym_modifier_parameter_repeat1 = 71,
  aux_sym_string_repeat1 = 72,
  aux_sym_string_repeat2 = 73,
  anon_alias_sym_bracket_parameter = 74,
  alias_sym_condition_attribute = 75,
  alias_sym_copy_identifier = 76,
  anon_alias_sym_function = 77,
  alias_sym_reference_identifier = 78,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__block_item_token1] = "_block_item_token1",
  [anon_sym_EQ] = "=",
  [anon_sym_LF] = "\n",
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
  [aux_sym_reference_line_token1] = "reference_line_token1",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_AND] = "AND",
  [anon_sym_OR] = "OR",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [aux_sym__condition_inner_token1] = "_condition_inner_token1",
  [aux_sym_condition_predefined_token1] = "condition_predefined_token1",
  [anon_sym_LBRACE] = "block_punctuation",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACE_DOLLAR] = "{$",
  [aux_sym_constant_token1] = "constant_token1",
  [aux_sym_value_token1] = "value_token1",
  [anon_sym_LPAREN] = "(",
  [aux_sym_multiline_value_token1] = "multiline_value_token1",
  [anon_sym_RPAREN] = ")",
  [sym_identifier] = "identifier",
  [sym_cobject] = "cobject",
  [sym_modifier_predefined] = "modifier_predefined",
  [sym_modifier_function] = "modifier_function",
  [anon_sym_COMMA] = ",",
  [aux_sym_modifier_parameter_token1] = "modifier_parameter_token1",
  [sym_comment] = "comment",
  [sym_single_line_comment] = "single_line_comment",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_token2] = "string_token2",
  [anon_sym_INCLUDE_TYPOSCRIPT] = "INCLUDE_TYPOSCRIPT",
  [anon_sym_COLON] = ":",
  [aux_sym_import_legacy_token1] = "import_legacy_token1",
  [anon_sym_source_EQ] = "source=",
  [aux_sym_import_legacy_token2] = "import_legacy_token2",
  [anon_sym_ATimport] = "@import",
  [sym_typoscript] = "typoscript",
  [sym__block_item] = "_block_item",
  [sym_assignment_line] = "assignment_line",
  [sym_deletion_line] = "deletion_line",
  [sym_copy_line] = "copy_line",
  [sym_reference_line] = "reference_line",
  [sym_modification_line] = "modification_line",
  [sym_configuration_block] = "configuration_block",
  [sym__condition_segment] = "_condition_segment",
  [sym_condition_bool] = "condition_bool",
  [sym_condition] = "condition",
  [aux_sym__condition_inner] = "_condition_inner",
  [sym_condition_predefined] = "condition_predefined",
  [sym_block] = "block",
  [sym_constant] = "constant",
  [sym_value] = "value",
  [sym_multiline_value] = "multiline_value",
  [sym_modifier_parameters] = "modifier_parameters",
  [sym_modifier_parameter] = "modifier_parameter",
  [sym__comments] = "_comments",
  [sym_string] = "string",
  [sym__imports] = "_imports",
  [sym_import_legacy] = "import_legacy",
  [sym_import] = "import",
  [aux_sym_typoscript_repeat1] = "typoscript_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_value_repeat1] = "value_repeat1",
  [aux_sym_multiline_value_repeat1] = "multiline_value_repeat1",
  [aux_sym_modifier_parameters_repeat1] = "modifier_parameters_repeat1",
  [aux_sym_modifier_parameter_repeat1] = "modifier_parameter_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_string_repeat2] = "string_repeat2",
  [anon_alias_sym_bracket_parameter] = "bracket_parameter",
  [alias_sym_condition_attribute] = "condition_attribute",
  [alias_sym_copy_identifier] = "copy_identifier",
  [anon_alias_sym_function] = "function",
  [alias_sym_reference_identifier] = "reference_identifier",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym__block_item_token1] = aux_sym__block_item_token1,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT] = anon_sym_LT,
  [aux_sym_reference_line_token1] = aux_sym_reference_line_token1,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_AND] = anon_sym_AND,
  [anon_sym_OR] = anon_sym_OR,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [aux_sym__condition_inner_token1] = aux_sym__condition_inner_token1,
  [aux_sym_condition_predefined_token1] = aux_sym_condition_predefined_token1,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACE_DOLLAR] = anon_sym_LBRACE_DOLLAR,
  [aux_sym_constant_token1] = aux_sym_constant_token1,
  [aux_sym_value_token1] = aux_sym_value_token1,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [aux_sym_multiline_value_token1] = aux_sym_multiline_value_token1,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_identifier] = sym_identifier,
  [sym_cobject] = sym_cobject,
  [sym_modifier_predefined] = sym_modifier_predefined,
  [sym_modifier_function] = sym_modifier_function,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_modifier_parameter_token1] = aux_sym_modifier_parameter_token1,
  [sym_comment] = sym_comment,
  [sym_single_line_comment] = sym_single_line_comment,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [anon_sym_INCLUDE_TYPOSCRIPT] = anon_sym_INCLUDE_TYPOSCRIPT,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_import_legacy_token1] = aux_sym_import_legacy_token1,
  [anon_sym_source_EQ] = anon_sym_source_EQ,
  [aux_sym_import_legacy_token2] = aux_sym_import_legacy_token2,
  [anon_sym_ATimport] = anon_sym_ATimport,
  [sym_typoscript] = sym_typoscript,
  [sym__block_item] = sym__block_item,
  [sym_assignment_line] = sym_assignment_line,
  [sym_deletion_line] = sym_deletion_line,
  [sym_copy_line] = sym_copy_line,
  [sym_reference_line] = sym_reference_line,
  [sym_modification_line] = sym_modification_line,
  [sym_configuration_block] = sym_configuration_block,
  [sym__condition_segment] = sym__condition_segment,
  [sym_condition_bool] = sym_condition_bool,
  [sym_condition] = sym_condition,
  [aux_sym__condition_inner] = aux_sym__condition_inner,
  [sym_condition_predefined] = sym_condition_predefined,
  [sym_block] = sym_block,
  [sym_constant] = sym_constant,
  [sym_value] = sym_value,
  [sym_multiline_value] = sym_multiline_value,
  [sym_modifier_parameters] = sym_modifier_parameters,
  [sym_modifier_parameter] = sym_modifier_parameter,
  [sym__comments] = sym__comments,
  [sym_string] = sym_string,
  [sym__imports] = sym__imports,
  [sym_import_legacy] = sym_import_legacy,
  [sym_import] = sym_import,
  [aux_sym_typoscript_repeat1] = aux_sym_typoscript_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_value_repeat1] = aux_sym_value_repeat1,
  [aux_sym_multiline_value_repeat1] = aux_sym_multiline_value_repeat1,
  [aux_sym_modifier_parameters_repeat1] = aux_sym_modifier_parameters_repeat1,
  [aux_sym_modifier_parameter_repeat1] = aux_sym_modifier_parameter_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_string_repeat2] = aux_sym_string_repeat2,
  [anon_alias_sym_bracket_parameter] = anon_alias_sym_bracket_parameter,
  [alias_sym_condition_attribute] = alias_sym_condition_attribute,
  [alias_sym_copy_identifier] = alias_sym_copy_identifier,
  [anon_alias_sym_function] = anon_alias_sym_function,
  [alias_sym_reference_identifier] = alias_sym_reference_identifier,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__block_item_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_reference_line_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COLON_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__condition_inner_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_condition_predefined_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_constant_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_value_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_multiline_value_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_cobject] = {
    .visible = true,
    .named = true,
  },
  [sym_modifier_predefined] = {
    .visible = true,
    .named = true,
  },
  [sym_modifier_function] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_modifier_parameter_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_single_line_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_INCLUDE_TYPOSCRIPT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_import_legacy_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_source_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_import_legacy_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_ATimport] = {
    .visible = true,
    .named = false,
  },
  [sym_typoscript] = {
    .visible = true,
    .named = true,
  },
  [sym__block_item] = {
    .visible = false,
    .named = true,
  },
  [sym_assignment_line] = {
    .visible = true,
    .named = true,
  },
  [sym_deletion_line] = {
    .visible = true,
    .named = true,
  },
  [sym_copy_line] = {
    .visible = true,
    .named = true,
  },
  [sym_reference_line] = {
    .visible = true,
    .named = true,
  },
  [sym_modification_line] = {
    .visible = true,
    .named = true,
  },
  [sym_configuration_block] = {
    .visible = true,
    .named = true,
  },
  [sym__condition_segment] = {
    .visible = false,
    .named = true,
  },
  [sym_condition_bool] = {
    .visible = true,
    .named = true,
  },
  [sym_condition] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__condition_inner] = {
    .visible = false,
    .named = false,
  },
  [sym_condition_predefined] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_multiline_value] = {
    .visible = true,
    .named = true,
  },
  [sym_modifier_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_modifier_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym__comments] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym__imports] = {
    .visible = false,
    .named = true,
  },
  [sym_import_legacy] = {
    .visible = true,
    .named = true,
  },
  [sym_import] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_typoscript_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_multiline_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_modifier_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_modifier_parameter_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat2] = {
    .visible = false,
    .named = false,
  },
  [anon_alias_sym_bracket_parameter] = {
    .visible = true,
    .named = false,
  },
  [alias_sym_condition_attribute] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_copy_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_alias_sym_function] = {
    .visible = true,
    .named = false,
  },
  [alias_sym_reference_identifier] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = anon_alias_sym_bracket_parameter,
  },
  [2] = {
    [1] = anon_sym_LBRACE,
  },
  [3] = {
    [2] = alias_sym_copy_identifier,
  },
  [4] = {
    [2] = alias_sym_reference_identifier,
  },
  [5] = {
    [2] = anon_sym_LBRACE,
  },
  [6] = {
    [0] = anon_alias_sym_function,
  },
  [7] = {
    [7] = alias_sym_condition_attribute,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_condition, 2,
    sym_condition,
    anon_alias_sym_bracket_parameter,
  sym_modifier_parameters, 2,
    sym_modifier_parameters,
    anon_alias_sym_function,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 9,
  [12] = 12,
  [13] = 13,
  [14] = 13,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 8,
  [40] = 40,
  [41] = 37,
  [42] = 28,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 48,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 43,
  [59] = 59,
  [60] = 53,
  [61] = 59,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 55,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 71,
  [74] = 46,
  [75] = 70,
  [76] = 76,
  [77] = 43,
  [78] = 43,
  [79] = 43,
  [80] = 57,
  [81] = 81,
  [82] = 52,
  [83] = 83,
  [84] = 43,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 12,
  [90] = 15,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 101,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 101,
  [112] = 101,
  [113] = 101,
  [114] = 101,
  [115] = 115,
  [116] = 107,
  [117] = 107,
  [118] = 107,
  [119] = 107,
  [120] = 107,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(137);
      if (lookahead == '\n') ADVANCE(141);
      if (lookahead == '"') ADVANCE(395);
      if (lookahead == '#') ADVANCE(394);
      if (lookahead == '&') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(399);
      if (lookahead == '(') ADVANCE(183);
      if (lookahead == ')') ADVANCE(187);
      if (lookahead == ',') ADVANCE(389);
      if (lookahead == '.') ADVANCE(188);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ':') ADVANCE(406);
      if (lookahead == '<') ADVANCE(143);
      if (lookahead == '=') ADVANCE(140);
      if (lookahead == '>') ADVANCE(142);
      if (lookahead == '@') ADVANCE(118);
      if (lookahead == 'A') ADVANCE(246);
      if (lookahead == 'C') ADVANCE(194);
      if (lookahead == 'E') ADVANCE(202);
      if (lookahead == 'F') ADVANCE(228);
      if (lookahead == 'H') ADVANCE(244);
      if (lookahead == 'I') ADVANCE(241);
      if (lookahead == 'L') ADVANCE(250);
      if (lookahead == 'O') ADVANCE(261);
      if (lookahead == 'P') ADVANCE(190);
      if (lookahead == 'R') ADVANCE(209);
      if (lookahead == 'S') ADVANCE(293);
      if (lookahead == 'T') ADVANCE(210);
      if (lookahead == 'U') ADVANCE(272);
      if (lookahead == '[') ADVANCE(153);
      if (lookahead == ']') ADVANCE(154);
      if (lookahead == 'a') ADVANCE(301);
      if (lookahead == 'p') ADVANCE(329);
      if (lookahead == 'r') ADVANCE(305);
      if (lookahead == 's') ADVANCE(323);
      if (lookahead == 'u') ADVANCE(318);
      if (lookahead == '{') ADVANCE(164);
      if (lookahead == '|') ADVANCE(132);
      if (lookahead == '}') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(141);
      if (lookahead == '#') ADVANCE(394);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == 'a') ADVANCE(350);
      if (lookahead == 'p') ADVANCE(378);
      if (lookahead == 'r') ADVANCE(354);
      if (lookahead == 's') ADVANCE(373);
      if (lookahead == 'u') ADVANCE(367);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(141);
      if (lookahead == '(') ADVANCE(183);
      if (lookahead == 'C') ADVANCE(171);
      if (lookahead == 'E') ADVANCE(173);
      if (lookahead == 'F') ADVANCE(176);
      if (lookahead == 'H') ADVANCE(177);
      if (lookahead == 'I') ADVANCE(178);
      if (lookahead == 'L') ADVANCE(179);
      if (lookahead == 'P') ADVANCE(172);
      if (lookahead == 'R') ADVANCE(174);
      if (lookahead == 'S') ADVANCE(181);
      if (lookahead == 'T') ADVANCE(175);
      if (lookahead == 'U') ADVANCE(180);
      if (lookahead == '{') ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(170);
      if (lookahead != 0) ADVANCE(168);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(141);
      if (lookahead == '{') ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(182);
      if (lookahead != 0) ADVANCE(168);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(395);
      if (lookahead == '{') ADVANCE(397);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(398);
      if (lookahead != 0) ADVANCE(396);
      END_STATE();
    case 5:
      if (lookahead == '&') ADVANCE(146);
      END_STATE();
    case 6:
      if (lookahead == '&') ADVANCE(157);
      if (lookahead == 'A') ADVANCE(159);
      if (lookahead == 'O') ADVANCE(160);
      if (lookahead == '[') ADVANCE(152);
      if (lookahead == ']') ADVANCE(154);
      if (lookahead == '{') ADVANCE(156);
      if (lookahead == '|') ADVANCE(161);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(158);
      if (lookahead != 0) ADVANCE(155);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(399);
      if (lookahead == '{') ADVANCE(401);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(402);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 8:
      if (lookahead == '(') ADVANCE(183);
      if (lookahead == ')') ADVANCE(187);
      if (lookahead == ',') ADVANCE(389);
      if (lookahead == '{') ADVANCE(391);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(392);
      if (lookahead != 0) ADVANCE(390);
      END_STATE();
    case 9:
      if (lookahead == ')') ADVANCE(187);
      if (lookahead == '{') ADVANCE(185);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(186);
      if (lookahead != 0) ADVANCE(184);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(394);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '/') ADVANCE(393);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '<') ADVANCE(144);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '=') ADVANCE(145);
      END_STATE();
    case 15:
      if (lookahead == '=') ADVANCE(409);
      END_STATE();
    case 16:
      if (lookahead == '>') ADVANCE(142);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(410);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(411);
      END_STATE();
    case 17:
      if (lookahead == 'A') ADVANCE(47);
      if (lookahead == 'G') ADVANCE(109);
      END_STATE();
    case 18:
      if (lookahead == 'A') ADVANCE(342);
      if (lookahead == 'N') ADVANCE(100);
      END_STATE();
    case 19:
      if (lookahead == 'A') ADVANCE(32);
      END_STATE();
    case 20:
      if (lookahead == 'A') ADVANCE(68);
      END_STATE();
    case 21:
      if (lookahead == 'A') ADVANCE(97);
      END_STATE();
    case 22:
      if (lookahead == 'A') ADVANCE(90);
      END_STATE();
    case 23:
      if (lookahead == 'B') ADVANCE(22);
      END_STATE();
    case 24:
      if (lookahead == 'C') ADVANCE(70);
      if (lookahead == 'S') ADVANCE(101);
      END_STATE();
    case 25:
      if (lookahead == 'C') ADVANCE(34);
      END_STATE();
    case 26:
      if (lookahead == 'C') ADVANCE(83);
      END_STATE();
    case 27:
      if (lookahead == 'C') ADVANCE(61);
      END_STATE();
    case 28:
      if (lookahead == 'D') ADVANCE(148);
      END_STATE();
    case 29:
      if (lookahead == 'D') ADVANCE(86);
      END_STATE();
    case 30:
      if (lookahead == 'D') ADVANCE(98);
      END_STATE();
    case 31:
      if (lookahead == 'D') ADVANCE(40);
      END_STATE();
    case 32:
      if (lookahead == 'D') ADVANCE(111);
      END_STATE();
    case 33:
      if (lookahead == 'E') ADVANCE(65);
      END_STATE();
    case 34:
      if (lookahead == 'E') ADVANCE(340);
      END_STATE();
    case 35:
      if (lookahead == 'E') ADVANCE(78);
      END_STATE();
    case 36:
      if (lookahead == 'E') ADVANCE(341);
      END_STATE();
    case 37:
      if (lookahead == 'E') ADVANCE(62);
      END_STATE();
    case 38:
      if (lookahead == 'E') ADVANCE(87);
      END_STATE();
    case 39:
      if (lookahead == 'E') ADVANCE(67);
      END_STATE();
    case 40:
      if (lookahead == 'E') ADVANCE(110);
      END_STATE();
    case 41:
      if (lookahead == 'E') ADVANCE(57);
      END_STATE();
    case 42:
      if (lookahead == 'E') ADVANCE(48);
      END_STATE();
    case 43:
      if (lookahead == 'E') ADVANCE(79);
      END_STATE();
    case 44:
      if (lookahead == 'E') ADVANCE(76);
      END_STATE();
    case 45:
      if (lookahead == 'E') ADVANCE(111);
      END_STATE();
    case 46:
      if (lookahead == 'G') ADVANCE(340);
      END_STATE();
    case 47:
      if (lookahead == 'G') ADVANCE(34);
      END_STATE();
    case 48:
      if (lookahead == 'G') ADVANCE(53);
      END_STATE();
    case 49:
      if (lookahead == 'G') ADVANCE(54);
      END_STATE();
    case 50:
      if (lookahead == 'I') ADVANCE(67);
      END_STATE();
    case 51:
      if (lookahead == 'I') ADVANCE(30);
      END_STATE();
    case 52:
      if (lookahead == 'I') ADVANCE(96);
      END_STATE();
    case 53:
      if (lookahead == 'I') ADVANCE(91);
      END_STATE();
    case 54:
      if (lookahead == 'I') ADVANCE(64);
      END_STATE();
    case 55:
      if (lookahead == 'I') ADVANCE(77);
      END_STATE();
    case 56:
      if (lookahead == 'I') ADVANCE(66);
      if (lookahead == 's') ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(56)
      END_STATE();
    case 57:
      if (lookahead == 'L') ADVANCE(340);
      END_STATE();
    case 58:
      if (lookahead == 'L') ADVANCE(106);
      END_STATE();
    case 59:
      if (lookahead == 'L') ADVANCE(36);
      END_STATE();
    case 60:
      if (lookahead == 'L') ADVANCE(21);
      END_STATE();
    case 61:
      if (lookahead == 'L') ADVANCE(105);
      END_STATE();
    case 62:
      if (lookahead == 'M') ADVANCE(73);
      END_STATE();
    case 63:
      if (lookahead == 'M') ADVANCE(73);
      if (lookahead == 'X') ADVANCE(93);
      END_STATE();
    case 64:
      if (lookahead == 'N') ADVANCE(340);
      END_STATE();
    case 65:
      if (lookahead == 'N') ADVANCE(102);
      END_STATE();
    case 66:
      if (lookahead == 'N') ADVANCE(27);
      END_STATE();
    case 67:
      if (lookahead == 'N') ADVANCE(93);
      END_STATE();
    case 68:
      if (lookahead == 'N') ADVANCE(41);
      END_STATE();
    case 69:
      if (lookahead == 'O') ADVANCE(104);
      END_STATE();
    case 70:
      if (lookahead == 'O') ADVANCE(81);
      END_STATE();
    case 71:
      if (lookahead == 'O') ADVANCE(89);
      END_STATE();
    case 72:
      if (lookahead == 'O') ADVANCE(85);
      END_STATE();
    case 73:
      if (lookahead == 'P') ADVANCE(60);
      END_STATE();
    case 74:
      if (lookahead == 'P') ADVANCE(20);
      END_STATE();
    case 75:
      if (lookahead == 'P') ADVANCE(71);
      END_STATE();
    case 76:
      if (lookahead == 'P') ADVANCE(58);
      END_STATE();
    case 77:
      if (lookahead == 'P') ADVANCE(95);
      END_STATE();
    case 78:
      if (lookahead == 'R') ADVANCE(342);
      END_STATE();
    case 79:
      if (lookahead == 'R') ADVANCE(340);
      END_STATE();
    case 80:
      if (lookahead == 'R') ADVANCE(25);
      END_STATE();
    case 81:
      if (lookahead == 'R') ADVANCE(29);
      END_STATE();
    case 82:
      if (lookahead == 'R') ADVANCE(38);
      END_STATE();
    case 83:
      if (lookahead == 'R') ADVANCE(55);
      END_STATE();
    case 84:
      if (lookahead == 'R') ADVANCE(42);
      END_STATE();
    case 85:
      if (lookahead == 'R') ADVANCE(45);
      END_STATE();
    case 86:
      if (lookahead == 'S') ADVANCE(340);
      END_STATE();
    case 87:
      if (lookahead == 'S') ADVANCE(69);
      END_STATE();
    case 88:
      if (lookahead == 'S') ADVANCE(34);
      END_STATE();
    case 89:
      if (lookahead == 'S') ADVANCE(26);
      END_STATE();
    case 90:
      if (lookahead == 'S') ADVANCE(44);
      END_STATE();
    case 91:
      if (lookahead == 'S') ADVANCE(99);
      END_STATE();
    case 92:
      if (lookahead == 'T') ADVANCE(23);
      END_STATE();
    case 93:
      if (lookahead == 'T') ADVANCE(340);
      END_STATE();
    case 94:
      if (lookahead == 'T') ADVANCE(107);
      END_STATE();
    case 95:
      if (lookahead == 'T') ADVANCE(403);
      END_STATE();
    case 96:
      if (lookahead == 'T') ADVANCE(74);
      END_STATE();
    case 97:
      if (lookahead == 'T') ADVANCE(34);
      END_STATE();
    case 98:
      if (lookahead == 'T') ADVANCE(37);
      END_STATE();
    case 99:
      if (lookahead == 'T') ADVANCE(43);
      END_STATE();
    case 100:
      if (lookahead == 'T') ADVANCE(39);
      END_STATE();
    case 101:
      if (lookahead == 'T') ADVANCE(72);
      END_STATE();
    case 102:
      if (lookahead == 'U') ADVANCE(340);
      END_STATE();
    case 103:
      if (lookahead == 'U') ADVANCE(51);
      END_STATE();
    case 104:
      if (lookahead == 'U') ADVANCE(80);
      END_STATE();
    case 105:
      if (lookahead == 'U') ADVANCE(31);
      END_STATE();
    case 106:
      if (lookahead == 'U') ADVANCE(49);
      END_STATE();
    case 107:
      if (lookahead == 'Y') ADVANCE(75);
      END_STATE();
    case 108:
      if (lookahead == ']') ADVANCE(162);
      END_STATE();
    case 109:
      if (lookahead == '_') ADVANCE(82);
      END_STATE();
    case 110:
      if (lookahead == '_') ADVANCE(94);
      END_STATE();
    case 111:
      if (lookahead == '_') ADVANCE(84);
      END_STATE();
    case 112:
      if (lookahead == 'a') ADVANCE(121);
      END_STATE();
    case 113:
      if (lookahead == 'b') ADVANCE(112);
      END_STATE();
    case 114:
      if (lookahead == 'c') ADVANCE(117);
      END_STATE();
    case 115:
      if (lookahead == 'd') ADVANCE(108);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 118:
      if (lookahead == 'i') ADVANCE(122);
      END_STATE();
    case 119:
      if (lookahead == 'l') ADVANCE(129);
      if (lookahead == 'n') ADVANCE(115);
      END_STATE();
    case 120:
      if (lookahead == 'l') ADVANCE(123);
      END_STATE();
    case 121:
      if (lookahead == 'l') ADVANCE(108);
      END_STATE();
    case 122:
      if (lookahead == 'm') ADVANCE(126);
      END_STATE();
    case 123:
      if (lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 124:
      if (lookahead == 'o') ADVANCE(127);
      END_STATE();
    case 125:
      if (lookahead == 'o') ADVANCE(131);
      END_STATE();
    case 126:
      if (lookahead == 'p') ADVANCE(124);
      END_STATE();
    case 127:
      if (lookahead == 'r') ADVANCE(130);
      END_STATE();
    case 128:
      if (lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 129:
      if (lookahead == 's') ADVANCE(116);
      END_STATE();
    case 130:
      if (lookahead == 't') ADVANCE(412);
      END_STATE();
    case 131:
      if (lookahead == 'u') ADVANCE(128);
      END_STATE();
    case 132:
      if (lookahead == '|') ADVANCE(147);
      END_STATE();
    case 133:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(133)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 134:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(134)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 135:
      if (eof) ADVANCE(137);
      if (lookahead == '\n') ADVANCE(138);
      if (lookahead == '#') ADVANCE(394);
      if (lookahead == '&') ADVANCE(5);
      if (lookahead == '.') ADVANCE(188);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ':') ADVANCE(405);
      if (lookahead == '<') ADVANCE(143);
      if (lookahead == '=') ADVANCE(139);
      if (lookahead == '@') ADVANCE(118);
      if (lookahead == 'A') ADVANCE(246);
      if (lookahead == 'O') ADVANCE(261);
      if (lookahead == '[') ADVANCE(153);
      if (lookahead == '|') ADVANCE(132);
      if (lookahead == '}') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(135)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 136:
      if (eof) ADVANCE(137);
      if (lookahead == '\n') ADVANCE(138);
      if (lookahead == '#') ADVANCE(394);
      if (lookahead == '.') ADVANCE(188);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == '<') ADVANCE(143);
      if (lookahead == '=') ADVANCE(140);
      if (lookahead == '>') ADVANCE(142);
      if (lookahead == '@') ADVANCE(118);
      if (lookahead == '[') ADVANCE(153);
      if (lookahead == '{') ADVANCE(163);
      if (lookahead == '}') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(136)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym__block_item_token1);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '<') ADVANCE(144);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(13);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_reference_line_token1);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_AND);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_AND);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_OR);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_OR);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == 'e') ADVANCE(119);
      if (lookahead == 'g') ADVANCE(120);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym__condition_inner_token1);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym__condition_inner_token1);
      if (lookahead == '$') ADVANCE(166);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym__condition_inner_token1);
      if (lookahead == '&') ADVANCE(146);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym__condition_inner_token1);
      if (lookahead == '&') ADVANCE(157);
      if (lookahead == 'A') ADVANCE(159);
      if (lookahead == 'O') ADVANCE(160);
      if (lookahead == '[') ADVANCE(152);
      if (lookahead == '{') ADVANCE(156);
      if (lookahead == '|') ADVANCE(161);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(158);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(155);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym__condition_inner_token1);
      if (lookahead == 'N') ADVANCE(28);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym__condition_inner_token1);
      if (lookahead == 'R') ADVANCE(150);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym__condition_inner_token1);
      if (lookahead == '|') ADVANCE(147);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_condition_predefined_token1);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '$') ADVANCE(166);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_LBRACE_DOLLAR);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_value_token1);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == '$') ADVANCE(166);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == '(') ADVANCE(183);
      if (lookahead == 'C') ADVANCE(171);
      if (lookahead == 'E') ADVANCE(173);
      if (lookahead == 'F') ADVANCE(176);
      if (lookahead == 'H') ADVANCE(177);
      if (lookahead == 'I') ADVANCE(178);
      if (lookahead == 'L') ADVANCE(179);
      if (lookahead == 'P') ADVANCE(172);
      if (lookahead == 'R') ADVANCE(174);
      if (lookahead == 'S') ADVANCE(181);
      if (lookahead == 'T') ADVANCE(175);
      if (lookahead == 'U') ADVANCE(180);
      if (lookahead == '{') ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(168);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == 'A') ADVANCE(88);
      if (lookahead == 'O') ADVANCE(18);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == 'A') ADVANCE(47);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == 'D') ADVANCE(52);
      if (lookahead == 'X') ADVANCE(92);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == 'E') ADVANCE(24);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == 'E') ADVANCE(63);
      if (lookahead == 'M') ADVANCE(33);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == 'I') ADVANCE(59);
      if (lookahead == 'L') ADVANCE(103);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == 'M') ADVANCE(33);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == 'M') ADVANCE(17);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == 'O') ADVANCE(19);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == 'S') ADVANCE(35);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == 'V') ADVANCE(46);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == '{') ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(168);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_multiline_value_token1);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_multiline_value_token1);
      if (lookahead == '$') ADVANCE(166);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_multiline_value_token1);
      if (lookahead == '{') ADVANCE(185);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(184);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'A') ADVANCE(225);
      if (lookahead == 'G') ADVANCE(295);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'A') ADVANCE(225);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'A') ADVANCE(296);
      if (lookahead == 'N') ADVANCE(284);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'A') ADVANCE(207);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'A') ADVANCE(249);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'A') ADVANCE(274);
      if (lookahead == 'O') ADVANCE(191);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'A') ADVANCE(275);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'A') ADVANCE(283);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'B') ADVANCE(195);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'C') ADVANCE(251);
      if (lookahead == 'S') ADVANCE(287);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'C') ADVANCE(237);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'C') ADVANCE(208);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'C') ADVANCE(265);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'D') ADVANCE(231);
      if (lookahead == 'X') ADVANCE(278);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'D') ADVANCE(149);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'D') ADVANCE(269);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'D') ADVANCE(218);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'D') ADVANCE(285);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'D') ADVANCE(298);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'E') ADVANCE(339);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'E') ADVANCE(198);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'E') ADVANCE(242);
      if (lookahead == 'M') ADVANCE(211);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'E') ADVANCE(247);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'E') ADVANCE(243);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'E') ADVANCE(262);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'E') ADVANCE(269);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'E') ADVANCE(248);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'E') ADVANCE(271);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'E') ADVANCE(226);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'E') ADVANCE(297);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'E') ADVANCE(235);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'E') ADVANCE(260);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'E') ADVANCE(259);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'E') ADVANCE(298);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'F') ADVANCE(331);
      if (lookahead == 'S') ADVANCE(336);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'G') ADVANCE(339);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'G') ADVANCE(208);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'G') ADVANCE(234);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'G') ADVANCE(233);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'I') ADVANCE(239);
      if (lookahead == 'L') ADVANCE(289);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'I') ADVANCE(248);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'I') ADVANCE(206);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'I') ADVANCE(281);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'I') ADVANCE(258);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'I') ADVANCE(245);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'I') ADVANCE(276);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'L') ADVANCE(339);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'L') ADVANCE(313);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'L') ADVANCE(290);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'L') ADVANCE(196);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'L') ADVANCE(214);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'L') ADVANCE(292);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'M') ADVANCE(189);
      if (lookahead == 'N') ADVANCE(199);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'M') ADVANCE(255);
      if (lookahead == 'X') ADVANCE(277);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'M') ADVANCE(255);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'M') ADVANCE(211);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'N') ADVANCE(339);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'N') ADVANCE(203);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'N') ADVANCE(288);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'N') ADVANCE(277);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'N') ADVANCE(219);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'O') ADVANCE(192);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'O') ADVANCE(264);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'O') ADVANCE(291);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'O') ADVANCE(273);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'O') ADVANCE(268);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'P') ADVANCE(238);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'P') ADVANCE(253);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'P') ADVANCE(193);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'P') ADVANCE(280);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'P') ADVANCE(240);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'R') ADVANCE(339);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'R') ADVANCE(151);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'R') ADVANCE(296);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'R') ADVANCE(200);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'R') ADVANCE(204);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'R') ADVANCE(232);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'R') ADVANCE(216);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'R') ADVANCE(217);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'R') ADVANCE(222);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'S') ADVANCE(339);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'S') ADVANCE(336);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'S') ADVANCE(252);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'S') ADVANCE(213);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'S') ADVANCE(201);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'S') ADVANCE(208);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'S') ADVANCE(221);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'S') ADVANCE(286);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'T') ADVANCE(339);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'T') ADVANCE(197);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'T') ADVANCE(294);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'T') ADVANCE(404);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'T') ADVANCE(257);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'T') ADVANCE(324);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'T') ADVANCE(208);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'T') ADVANCE(215);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'T') ADVANCE(212);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'T') ADVANCE(220);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'T') ADVANCE(254);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'U') ADVANCE(339);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'U') ADVANCE(230);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'U') ADVANCE(205);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'U') ADVANCE(263);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'U') ADVANCE(227);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'V') ADVANCE(224);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'Y') ADVANCE(256);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == '_') ADVANCE(266);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == '_') ADVANCE(229);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == '_') ADVANCE(267);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'a') ADVANCE(300);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'c') ADVANCE(309);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'd') ADVANCE(303);
      if (lookahead == 'p') ADVANCE(325);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'd') ADVANCE(270);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'd') ADVANCE(282);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'e') ADVANCE(325);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'e') ADVANCE(316);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'e') ADVANCE(223);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'e') ADVANCE(320);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'e') ADVANCE(328);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'e') ADVANCE(270);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'e') ADVANCE(236);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'g') ADVANCE(339);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'i') ADVANCE(326);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'i') ADVANCE(332);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'i') ADVANCE(319);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'l') ADVANCE(299);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'm') ADVANCE(321);
      if (lookahead == 'p') ADVANCE(315);
      if (lookahead == 'v') ADVANCE(308);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'm') ADVANCE(236);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'n') ADVANCE(312);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'n') ADVANCE(311);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'n') ADVANCE(302);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'o') ADVANCE(338);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'o') ADVANCE(317);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'o') ADVANCE(327);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'o') ADVANCE(236);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'p') ADVANCE(307);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'q') ADVANCE(337);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'r') ADVANCE(335);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'r') ADVANCE(333);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'r') ADVANCE(304);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'r') ADVANCE(314);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'r') ADVANCE(322);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 's') ADVANCE(334);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 's') ADVANCE(310);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 't') ADVANCE(339);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 't') ADVANCE(236);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 't') ADVANCE(330);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'u') ADVANCE(310);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'v') ADVANCE(306);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_cobject);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_cobject);
      if (lookahead == 'S') ADVANCE(340);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_cobject);
      if (lookahead == '_') ADVANCE(50);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_modifier_predefined);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'F') ADVANCE(380);
      if (lookahead == 'S') ADVANCE(385);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'L') ADVANCE(362);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'S') ADVANCE(385);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'T') ADVANCE(371);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'a') ADVANCE(349);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'c') ADVANCE(356);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'd') ADVANCE(351);
      if (lookahead == 'p') ADVANCE(374);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'd') ADVANCE(347);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'd') ADVANCE(346);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'e') ADVANCE(374);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'e') ADVANCE(366);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'e') ADVANCE(345);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'e') ADVANCE(346);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'e') ADVANCE(344);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'e') ADVANCE(369);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'e') ADVANCE(377);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'g') ADVANCE(343);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'i') ADVANCE(375);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'i') ADVANCE(381);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'i') ADVANCE(368);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'l') ADVANCE(348);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'm') ADVANCE(345);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'm') ADVANCE(370);
      if (lookahead == 'p') ADVANCE(364);
      if (lookahead == 'v') ADVANCE(359);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'n') ADVANCE(361);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'n') ADVANCE(360);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'n') ADVANCE(352);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'o') ADVANCE(387);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'o') ADVANCE(345);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'o') ADVANCE(365);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'o') ADVANCE(376);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'p') ADVANCE(358);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'q') ADVANCE(386);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'r') ADVANCE(383);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'r') ADVANCE(382);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'r') ADVANCE(353);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'r') ADVANCE(363);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'r') ADVANCE(372);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 's') ADVANCE(384);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 's') ADVANCE(355);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 't') ADVANCE(345);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 't') ADVANCE(343);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 't') ADVANCE(379);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'u') ADVANCE(355);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'v') ADVANCE(357);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_modifier_parameter_token1);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_modifier_parameter_token1);
      if (lookahead == '$') ADVANCE(166);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_modifier_parameter_token1);
      if (lookahead == '(') ADVANCE(183);
      if (lookahead == '{') ADVANCE(391);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != ',') ADVANCE(390);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_single_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(394);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '$') ADVANCE(166);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '{') ADVANCE(397);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(398);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(396);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(166);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '{') ADVANCE(401);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(400);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_INCLUDE_TYPOSCRIPT);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_INCLUDE_TYPOSCRIPT);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(145);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_import_legacy_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(407);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(408);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_import_legacy_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(408);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_source_EQ);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_import_legacy_token2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(410);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(411);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_import_legacy_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(411);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_ATimport);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 136},
  [2] = {.lex_state = 136},
  [3] = {.lex_state = 136},
  [4] = {.lex_state = 136},
  [5] = {.lex_state = 136},
  [6] = {.lex_state = 136},
  [7] = {.lex_state = 135},
  [8] = {.lex_state = 135},
  [9] = {.lex_state = 6},
  [10] = {.lex_state = 6},
  [11] = {.lex_state = 6},
  [12] = {.lex_state = 136},
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 6},
  [15] = {.lex_state = 136},
  [16] = {.lex_state = 136},
  [17] = {.lex_state = 136},
  [18] = {.lex_state = 136},
  [19] = {.lex_state = 136},
  [20] = {.lex_state = 136},
  [21] = {.lex_state = 136},
  [22] = {.lex_state = 136},
  [23] = {.lex_state = 136},
  [24] = {.lex_state = 136},
  [25] = {.lex_state = 136},
  [26] = {.lex_state = 136},
  [27] = {.lex_state = 136},
  [28] = {.lex_state = 136},
  [29] = {.lex_state = 136},
  [30] = {.lex_state = 136},
  [31] = {.lex_state = 136},
  [32] = {.lex_state = 136},
  [33] = {.lex_state = 136},
  [34] = {.lex_state = 136},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 8},
  [37] = {.lex_state = 8},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 6},
  [40] = {.lex_state = 8},
  [41] = {.lex_state = 8},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 6},
  [44] = {.lex_state = 8},
  [45] = {.lex_state = 136},
  [46] = {.lex_state = 8},
  [47] = {.lex_state = 9},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 9},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 8},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 7},
  [56] = {.lex_state = 9},
  [57] = {.lex_state = 8},
  [58] = {.lex_state = 8},
  [59] = {.lex_state = 7},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 7},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 7},
  [64] = {.lex_state = 8},
  [65] = {.lex_state = 7},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 9},
  [78] = {.lex_state = 7},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 16},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 16},
  [90] = {.lex_state = 16},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 56},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 135},
  [99] = {.lex_state = 133},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 407},
  [103] = {.lex_state = 136},
  [104] = {.lex_state = 136},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 134},
  [108] = {.lex_state = 135},
  [109] = {.lex_state = 56},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 134},
  [117] = {.lex_state = 134},
  [118] = {.lex_state = 134},
  [119] = {.lex_state = 134},
  [120] = {.lex_state = 134},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym__block_item_token1] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [aux_sym_reference_line_token1] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_AND] = ACTIONS(1),
    [anon_sym_OR] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [aux_sym_condition_predefined_token1] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_DOLLAR] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_cobject] = ACTIONS(1),
    [sym_modifier_predefined] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_single_line_comment] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_INCLUDE_TYPOSCRIPT] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_ATimport] = ACTIONS(1),
  },
  [1] = {
    [sym_typoscript] = STATE(115),
    [sym__block_item] = STATE(5),
    [sym_assignment_line] = STATE(5),
    [sym_deletion_line] = STATE(5),
    [sym_copy_line] = STATE(5),
    [sym_reference_line] = STATE(5),
    [sym_modification_line] = STATE(5),
    [sym_configuration_block] = STATE(5),
    [sym__condition_segment] = STATE(5),
    [sym_condition] = STATE(7),
    [sym_condition_predefined] = STATE(5),
    [sym__imports] = STATE(5),
    [sym_import_legacy] = STATE(5),
    [sym_import] = STATE(5),
    [aux_sym_typoscript_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym__block_item_token1] = ACTIONS(5),
    [anon_sym_LT] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [aux_sym_condition_predefined_token1] = ACTIONS(11),
    [sym_identifier] = ACTIONS(13),
    [sym_comment] = ACTIONS(5),
    [sym_single_line_comment] = ACTIONS(5),
    [anon_sym_ATimport] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(22), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(28), 1,
      aux_sym_condition_predefined_token1,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(34), 1,
      anon_sym_ATimport,
    STATE(7), 1,
      sym_condition,
    ACTIONS(19), 3,
      aux_sym__block_item_token1,
      sym_comment,
      sym_single_line_comment,
    STATE(2), 13,
      sym__block_item,
      sym_assignment_line,
      sym_deletion_line,
      sym_copy_line,
      sym_reference_line,
      sym_modification_line,
      sym_configuration_block,
      sym__condition_segment,
      sym_condition_predefined,
      sym__imports,
      sym_import_legacy,
      sym_import,
      aux_sym_typoscript_repeat1,
  [42] = 9,
    ACTIONS(40), 1,
      anon_sym_LT,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(46), 1,
      aux_sym_condition_predefined_token1,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    ACTIONS(51), 1,
      sym_identifier,
    ACTIONS(54), 1,
      anon_sym_ATimport,
    STATE(7), 1,
      sym_condition,
    ACTIONS(37), 3,
      aux_sym__block_item_token1,
      sym_comment,
      sym_single_line_comment,
    STATE(3), 13,
      sym__block_item,
      sym_assignment_line,
      sym_deletion_line,
      sym_copy_line,
      sym_reference_line,
      sym_modification_line,
      sym_configuration_block,
      sym__condition_segment,
      sym_condition_predefined,
      sym__imports,
      sym_import_legacy,
      sym_import,
      aux_sym_block_repeat1,
  [84] = 9,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      aux_sym_condition_predefined_token1,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_ATimport,
    ACTIONS(59), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      sym_condition,
    ACTIONS(57), 3,
      aux_sym__block_item_token1,
      sym_comment,
      sym_single_line_comment,
    STATE(3), 13,
      sym__block_item,
      sym_assignment_line,
      sym_deletion_line,
      sym_copy_line,
      sym_reference_line,
      sym_modification_line,
      sym_configuration_block,
      sym__condition_segment,
      sym_condition_predefined,
      sym__imports,
      sym_import_legacy,
      sym_import,
      aux_sym_block_repeat1,
  [126] = 9,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      aux_sym_condition_predefined_token1,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_ATimport,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      sym_condition,
    ACTIONS(63), 3,
      aux_sym__block_item_token1,
      sym_comment,
      sym_single_line_comment,
    STATE(2), 13,
      sym__block_item,
      sym_assignment_line,
      sym_deletion_line,
      sym_copy_line,
      sym_reference_line,
      sym_modification_line,
      sym_configuration_block,
      sym__condition_segment,
      sym_condition_predefined,
      sym__imports,
      sym_import_legacy,
      sym_import,
      aux_sym_typoscript_repeat1,
  [168] = 9,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      aux_sym_condition_predefined_token1,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_ATimport,
    ACTIONS(67), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      sym_condition,
    ACTIONS(65), 3,
      aux_sym__block_item_token1,
      sym_comment,
      sym_single_line_comment,
    STATE(4), 13,
      sym__block_item,
      sym_assignment_line,
      sym_deletion_line,
      sym_copy_line,
      sym_reference_line,
      sym_modification_line,
      sym_configuration_block,
      sym__condition_segment,
      sym_condition_predefined,
      sym__imports,
      sym_import_legacy,
      sym_import,
      aux_sym_block_repeat1,
  [210] = 5,
    STATE(30), 1,
      sym_condition_bool,
    ACTIONS(71), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(73), 2,
      anon_sym_AND,
      anon_sym_OR,
    ACTIONS(75), 2,
      anon_sym_LBRACK,
      sym_identifier,
    ACTIONS(69), 8,
      ts_builtin_sym_end,
      aux_sym__block_item_token1,
      anon_sym_LT,
      aux_sym_condition_predefined_token1,
      anon_sym_RBRACE,
      sym_comment,
      sym_single_line_comment,
      anon_sym_ATimport,
  [236] = 2,
    ACTIONS(79), 4,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LBRACK,
      sym_identifier,
    ACTIONS(77), 10,
      ts_builtin_sym_end,
      aux_sym__block_item_token1,
      anon_sym_LT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      aux_sym_condition_predefined_token1,
      anon_sym_RBRACE,
      sym_comment,
      sym_single_line_comment,
      anon_sym_ATimport,
  [255] = 7,
    ACTIONS(83), 1,
      anon_sym_LBRACK,
    ACTIONS(85), 1,
      anon_sym_RBRACK,
    ACTIONS(87), 1,
      aux_sym__condition_inner_token1,
    ACTIONS(89), 1,
      anon_sym_LBRACE_DOLLAR,
    STATE(38), 1,
      sym_condition,
    STATE(10), 3,
      sym_condition_bool,
      aux_sym__condition_inner,
      sym_constant,
    ACTIONS(81), 4,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_AND,
      anon_sym_OR,
  [282] = 7,
    ACTIONS(94), 1,
      anon_sym_LBRACK,
    ACTIONS(97), 1,
      anon_sym_RBRACK,
    ACTIONS(99), 1,
      aux_sym__condition_inner_token1,
    ACTIONS(102), 1,
      anon_sym_LBRACE_DOLLAR,
    STATE(38), 1,
      sym_condition,
    STATE(10), 3,
      sym_condition_bool,
      aux_sym__condition_inner,
      sym_constant,
    ACTIONS(91), 4,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_AND,
      anon_sym_OR,
  [309] = 7,
    ACTIONS(83), 1,
      anon_sym_LBRACK,
    ACTIONS(87), 1,
      aux_sym__condition_inner_token1,
    ACTIONS(89), 1,
      anon_sym_LBRACE_DOLLAR,
    ACTIONS(105), 1,
      anon_sym_RBRACK,
    STATE(38), 1,
      sym_condition,
    STATE(10), 3,
      sym_condition_bool,
      aux_sym__condition_inner,
      sym_constant,
    ACTIONS(81), 4,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_AND,
      anon_sym_OR,
  [336] = 2,
    ACTIONS(109), 1,
      anon_sym_LBRACK,
    ACTIONS(107), 10,
      ts_builtin_sym_end,
      aux_sym__block_item_token1,
      anon_sym_GT,
      anon_sym_LT,
      aux_sym_condition_predefined_token1,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
      sym_single_line_comment,
      anon_sym_ATimport,
  [352] = 6,
    ACTIONS(83), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      anon_sym_LBRACE_DOLLAR,
    ACTIONS(111), 1,
      aux_sym__condition_inner_token1,
    STATE(38), 1,
      sym_condition,
    STATE(11), 3,
      sym_condition_bool,
      aux_sym__condition_inner,
      sym_constant,
    ACTIONS(81), 4,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_AND,
      anon_sym_OR,
  [376] = 6,
    ACTIONS(83), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      anon_sym_LBRACE_DOLLAR,
    ACTIONS(113), 1,
      aux_sym__condition_inner_token1,
    STATE(38), 1,
      sym_condition,
    STATE(9), 3,
      sym_condition_bool,
      aux_sym__condition_inner,
      sym_constant,
    ACTIONS(81), 4,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_AND,
      anon_sym_OR,
  [400] = 2,
    ACTIONS(117), 1,
      anon_sym_LBRACK,
    ACTIONS(115), 10,
      ts_builtin_sym_end,
      aux_sym__block_item_token1,
      anon_sym_GT,
      anon_sym_LT,
      aux_sym_condition_predefined_token1,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
      sym_single_line_comment,
      anon_sym_ATimport,
  [416] = 2,
    ACTIONS(121), 1,
      anon_sym_LBRACK,
    ACTIONS(119), 9,
      ts_builtin_sym_end,
      aux_sym__block_item_token1,
      anon_sym_LT,
      aux_sym_condition_predefined_token1,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
      sym_single_line_comment,
      anon_sym_ATimport,
  [431] = 2,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    ACTIONS(123), 9,
      ts_builtin_sym_end,
      aux_sym__block_item_token1,
      anon_sym_LT,
      aux_sym_condition_predefined_token1,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
      sym_single_line_comment,
      anon_sym_ATimport,
  [446] = 2,
    ACTIONS(129), 1,
      anon_sym_LBRACK,
    ACTIONS(127), 9,
      ts_builtin_sym_end,
      aux_sym__block_item_token1,
      anon_sym_LT,
      aux_sym_condition_predefined_token1,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
      sym_single_line_comment,
      anon_sym_ATimport,
  [461] = 2,
    ACTIONS(133), 1,
      anon_sym_LBRACK,
    ACTIONS(131), 9,
      ts_builtin_sym_end,
      aux_sym__block_item_token1,
      anon_sym_LT,
      aux_sym_condition_predefined_token1,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
      sym_single_line_comment,
      anon_sym_ATimport,
  [476] = 2,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    ACTIONS(135), 9,
      ts_builtin_sym_end,
      aux_sym__block_item_token1,
      anon_sym_LT,
      aux_sym_condition_predefined_token1,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
      sym_single_line_comment,
      anon_sym_ATimport,
  [491] = 2,
    ACTIONS(141), 1,
      anon_sym_LBRACK,
    ACTIONS(139), 9,
      ts_builtin_sym_end,
      aux_sym__block_item_token1,
      anon_sym_LT,
      aux_sym_condition_predefined_token1,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
      sym_single_line_comment,
      anon_sym_ATimport,
  [506] = 2,
    ACTIONS(145), 1,
      anon_sym_LBRACK,
    ACTIONS(143), 9,
      ts_builtin_sym_end,
      aux_sym__block_item_token1,
      anon_sym_LT,
      aux_sym_condition_predefined_token1,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
      sym_single_line_comment,
      anon_sym_ATimport,
  [521] = 2,
    ACTIONS(149), 1,
      anon_sym_LBRACK,
    ACTIONS(147), 9,
      ts_builtin_sym_end,
      aux_sym__block_item_token1,
      anon_sym_LT,
      aux_sym_condition_predefined_token1,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
      sym_single_line_comment,
      anon_sym_ATimport,
  [536] = 2,
    ACTIONS(153), 1,
      anon_sym_LBRACK,
    ACTIONS(151), 9,
      ts_builtin_sym_end,
      aux_sym__block_item_token1,
      anon_sym_LT,
      aux_sym_condition_predefined_token1,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
      sym_single_line_comment,
      anon_sym_ATimport,
  [551] = 2,
    ACTIONS(157), 1,
      anon_sym_LBRACK,
    ACTIONS(155), 9,
      ts_builtin_sym_end,
      aux_sym__block_item_token1,
      anon_sym_LT,
      aux_sym_condition_predefined_token1,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
      sym_single_line_comment,
      anon_sym_ATimport,
  [566] = 2,
    ACTIONS(161), 1,
      anon_sym_LBRACK,
    ACTIONS(159), 9,
      ts_builtin_sym_end,
      aux_sym__block_item_token1,
      anon_sym_LT,
      aux_sym_condition_predefined_token1,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
      sym_single_line_comment,
      anon_sym_ATimport,
  [581] = 2,
    ACTIONS(165), 1,
      anon_sym_LBRACK,
    ACTIONS(163), 9,
      ts_builtin_sym_end,
      aux_sym__block_item_token1,
      anon_sym_LT,
      aux_sym_condition_predefined_token1,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
      sym_single_line_comment,
      anon_sym_ATimport,
  [596] = 2,
    ACTIONS(169), 1,
      anon_sym_LBRACK,
    ACTIONS(167), 9,
      ts_builtin_sym_end,
      aux_sym__block_item_token1,
      anon_sym_LT,
      aux_sym_condition_predefined_token1,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
      sym_single_line_comment,
      anon_sym_ATimport,
  [611] = 2,
    ACTIONS(173), 1,
      anon_sym_LBRACK,
    ACTIONS(171), 9,
      ts_builtin_sym_end,
      aux_sym__block_item_token1,
      anon_sym_LT,
      aux_sym_condition_predefined_token1,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
      sym_single_line_comment,
      anon_sym_ATimport,
  [626] = 2,
    ACTIONS(177), 1,
      anon_sym_LBRACK,
    ACTIONS(175), 9,
      ts_builtin_sym_end,
      aux_sym__block_item_token1,
      anon_sym_LT,
      aux_sym_condition_predefined_token1,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
      sym_single_line_comment,
      anon_sym_ATimport,
  [641] = 2,
    ACTIONS(181), 1,
      anon_sym_LBRACK,
    ACTIONS(179), 9,
      ts_builtin_sym_end,
      aux_sym__block_item_token1,
      anon_sym_LT,
      aux_sym_condition_predefined_token1,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
      sym_single_line_comment,
      anon_sym_ATimport,
  [656] = 2,
    ACTIONS(185), 1,
      anon_sym_LBRACK,
    ACTIONS(183), 9,
      ts_builtin_sym_end,
      aux_sym__block_item_token1,
      anon_sym_LT,
      aux_sym_condition_predefined_token1,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
      sym_single_line_comment,
      anon_sym_ATimport,
  [671] = 2,
    ACTIONS(189), 1,
      anon_sym_LBRACK,
    ACTIONS(187), 9,
      ts_builtin_sym_end,
      aux_sym__block_item_token1,
      anon_sym_LT,
      aux_sym_condition_predefined_token1,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
      sym_single_line_comment,
      anon_sym_ATimport,
  [686] = 2,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(191), 9,
      ts_builtin_sym_end,
      aux_sym__block_item_token1,
      anon_sym_LT,
      aux_sym_condition_predefined_token1,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
      sym_single_line_comment,
      anon_sym_ATimport,
  [701] = 7,
    ACTIONS(195), 1,
      anon_sym_LF,
    ACTIONS(197), 1,
      anon_sym_LBRACE_DOLLAR,
    ACTIONS(199), 1,
      aux_sym_value_token1,
    ACTIONS(201), 1,
      anon_sym_LPAREN,
    ACTIONS(203), 1,
      sym_cobject,
    STATE(54), 2,
      sym_constant,
      aux_sym_value_repeat1,
    STATE(97), 2,
      sym_value,
      sym_multiline_value,
  [725] = 6,
    ACTIONS(205), 1,
      anon_sym_LBRACE_DOLLAR,
    ACTIONS(208), 1,
      anon_sym_LPAREN,
    ACTIONS(213), 1,
      aux_sym_modifier_parameter_token1,
    STATE(64), 1,
      sym_modifier_parameters,
    ACTIONS(211), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    STATE(36), 2,
      sym_constant,
      aux_sym_modifier_parameter_repeat1,
  [746] = 7,
    ACTIONS(216), 1,
      anon_sym_LBRACE_DOLLAR,
    ACTIONS(218), 1,
      anon_sym_LPAREN,
    ACTIONS(220), 1,
      anon_sym_RPAREN,
    ACTIONS(222), 1,
      aux_sym_modifier_parameter_token1,
    STATE(64), 1,
      sym_modifier_parameters,
    STATE(71), 1,
      sym_modifier_parameter,
    STATE(40), 2,
      sym_constant,
      aux_sym_modifier_parameter_repeat1,
  [769] = 1,
    ACTIONS(224), 8,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym__condition_inner_token1,
      anon_sym_LBRACE_DOLLAR,
  [780] = 1,
    ACTIONS(79), 8,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym__condition_inner_token1,
      anon_sym_LBRACE_DOLLAR,
  [791] = 6,
    ACTIONS(216), 1,
      anon_sym_LBRACE_DOLLAR,
    ACTIONS(218), 1,
      anon_sym_LPAREN,
    ACTIONS(228), 1,
      aux_sym_modifier_parameter_token1,
    STATE(64), 1,
      sym_modifier_parameters,
    ACTIONS(226), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    STATE(36), 2,
      sym_constant,
      aux_sym_modifier_parameter_repeat1,
  [812] = 7,
    ACTIONS(216), 1,
      anon_sym_LBRACE_DOLLAR,
    ACTIONS(218), 1,
      anon_sym_LPAREN,
    ACTIONS(222), 1,
      aux_sym_modifier_parameter_token1,
    ACTIONS(230), 1,
      anon_sym_RPAREN,
    STATE(64), 1,
      sym_modifier_parameters,
    STATE(73), 1,
      sym_modifier_parameter,
    STATE(40), 2,
      sym_constant,
      aux_sym_modifier_parameter_repeat1,
  [835] = 1,
    ACTIONS(169), 8,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym__condition_inner_token1,
      anon_sym_LBRACE_DOLLAR,
  [846] = 1,
    ACTIONS(232), 8,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym__condition_inner_token1,
      anon_sym_LBRACE_DOLLAR,
  [857] = 6,
    ACTIONS(216), 1,
      anon_sym_LBRACE_DOLLAR,
    ACTIONS(218), 1,
      anon_sym_LPAREN,
    ACTIONS(222), 1,
      aux_sym_modifier_parameter_token1,
    STATE(64), 1,
      sym_modifier_parameters,
    STATE(88), 1,
      sym_modifier_parameter,
    STATE(40), 2,
      sym_constant,
      aux_sym_modifier_parameter_repeat1,
  [877] = 7,
    ACTIONS(234), 1,
      anon_sym_EQ,
    ACTIONS(236), 1,
      anon_sym_GT,
    ACTIONS(238), 1,
      anon_sym_LT,
    ACTIONS(240), 1,
      aux_sym_reference_line_token1,
    ACTIONS(242), 1,
      anon_sym_COLON_EQ,
    ACTIONS(244), 1,
      anon_sym_LBRACE,
    STATE(26), 1,
      sym_block,
  [899] = 1,
    ACTIONS(246), 5,
      anon_sym_LBRACE_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_modifier_parameter_token1,
  [907] = 4,
    ACTIONS(248), 1,
      anon_sym_LBRACE_DOLLAR,
    ACTIONS(251), 1,
      aux_sym_multiline_value_token1,
    ACTIONS(254), 1,
      anon_sym_RPAREN,
    STATE(47), 2,
      sym_constant,
      aux_sym_multiline_value_repeat1,
  [921] = 4,
    ACTIONS(256), 1,
      anon_sym_LBRACE_DOLLAR,
    ACTIONS(258), 1,
      anon_sym_DQUOTE,
    ACTIONS(260), 1,
      aux_sym_string_token1,
    STATE(62), 2,
      sym_constant,
      aux_sym_string_repeat1,
  [935] = 4,
    ACTIONS(262), 1,
      anon_sym_LBRACE_DOLLAR,
    ACTIONS(264), 1,
      aux_sym_multiline_value_token1,
    ACTIONS(266), 1,
      anon_sym_RPAREN,
    STATE(47), 2,
      sym_constant,
      aux_sym_multiline_value_repeat1,
  [949] = 4,
    ACTIONS(256), 1,
      anon_sym_LBRACE_DOLLAR,
    ACTIONS(260), 1,
      aux_sym_string_token1,
    ACTIONS(268), 1,
      anon_sym_DQUOTE,
    STATE(62), 2,
      sym_constant,
      aux_sym_string_repeat1,
  [963] = 4,
    ACTIONS(270), 1,
      anon_sym_LF,
    ACTIONS(272), 1,
      anon_sym_LBRACE_DOLLAR,
    ACTIONS(275), 1,
      aux_sym_value_token1,
    STATE(51), 2,
      sym_constant,
      aux_sym_value_repeat1,
  [977] = 1,
    ACTIONS(278), 5,
      anon_sym_LBRACE_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_modifier_parameter_token1,
  [985] = 4,
    ACTIONS(256), 1,
      anon_sym_LBRACE_DOLLAR,
    ACTIONS(280), 1,
      anon_sym_DQUOTE,
    ACTIONS(282), 1,
      aux_sym_string_token1,
    STATE(50), 2,
      sym_constant,
      aux_sym_string_repeat1,
  [999] = 4,
    ACTIONS(197), 1,
      anon_sym_LBRACE_DOLLAR,
    ACTIONS(284), 1,
      anon_sym_LF,
    ACTIONS(286), 1,
      aux_sym_value_token1,
    STATE(51), 2,
      sym_constant,
      aux_sym_value_repeat1,
  [1013] = 4,
    ACTIONS(258), 1,
      anon_sym_SQUOTE,
    ACTIONS(288), 1,
      anon_sym_LBRACE_DOLLAR,
    ACTIONS(290), 1,
      aux_sym_string_token2,
    STATE(63), 2,
      sym_constant,
      aux_sym_string_repeat2,
  [1027] = 4,
    ACTIONS(262), 1,
      anon_sym_LBRACE_DOLLAR,
    ACTIONS(292), 1,
      aux_sym_multiline_value_token1,
    ACTIONS(294), 1,
      anon_sym_RPAREN,
    STATE(49), 2,
      sym_constant,
      aux_sym_multiline_value_repeat1,
  [1041] = 1,
    ACTIONS(296), 5,
      anon_sym_LBRACE_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_modifier_parameter_token1,
  [1049] = 1,
    ACTIONS(232), 5,
      anon_sym_LBRACE_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_modifier_parameter_token1,
  [1057] = 4,
    ACTIONS(288), 1,
      anon_sym_LBRACE_DOLLAR,
    ACTIONS(298), 1,
      anon_sym_SQUOTE,
    ACTIONS(300), 1,
      aux_sym_string_token2,
    STATE(55), 2,
      sym_constant,
      aux_sym_string_repeat2,
  [1071] = 4,
    ACTIONS(256), 1,
      anon_sym_LBRACE_DOLLAR,
    ACTIONS(298), 1,
      anon_sym_DQUOTE,
    ACTIONS(302), 1,
      aux_sym_string_token1,
    STATE(48), 2,
      sym_constant,
      aux_sym_string_repeat1,
  [1085] = 4,
    ACTIONS(280), 1,
      anon_sym_SQUOTE,
    ACTIONS(288), 1,
      anon_sym_LBRACE_DOLLAR,
    ACTIONS(304), 1,
      aux_sym_string_token2,
    STATE(65), 2,
      sym_constant,
      aux_sym_string_repeat2,
  [1099] = 4,
    ACTIONS(306), 1,
      anon_sym_LBRACE_DOLLAR,
    ACTIONS(309), 1,
      anon_sym_DQUOTE,
    ACTIONS(311), 1,
      aux_sym_string_token1,
    STATE(62), 2,
      sym_constant,
      aux_sym_string_repeat1,
  [1113] = 4,
    ACTIONS(314), 1,
      anon_sym_LBRACE_DOLLAR,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      aux_sym_string_token2,
    STATE(63), 2,
      sym_constant,
      aux_sym_string_repeat2,
  [1127] = 1,
    ACTIONS(322), 5,
      anon_sym_LBRACE_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_modifier_parameter_token1,
  [1135] = 4,
    ACTIONS(268), 1,
      anon_sym_SQUOTE,
    ACTIONS(288), 1,
      anon_sym_LBRACE_DOLLAR,
    ACTIONS(290), 1,
      aux_sym_string_token2,
    STATE(63), 2,
      sym_constant,
      aux_sym_string_repeat2,
  [1149] = 3,
    ACTIONS(324), 1,
      anon_sym_LF,
    STATE(91), 1,
      sym__comments,
    ACTIONS(326), 2,
      sym_comment,
      sym_single_line_comment,
  [1160] = 3,
    ACTIONS(328), 1,
      anon_sym_LF,
    STATE(96), 1,
      sym__comments,
    ACTIONS(330), 2,
      sym_comment,
      sym_single_line_comment,
  [1171] = 3,
    ACTIONS(332), 1,
      anon_sym_LF,
    STATE(100), 1,
      sym__comments,
    ACTIONS(334), 2,
      sym_comment,
      sym_single_line_comment,
  [1182] = 3,
    ACTIONS(336), 1,
      anon_sym_LF,
    STATE(110), 1,
      sym__comments,
    ACTIONS(338), 2,
      sym_comment,
      sym_single_line_comment,
  [1193] = 3,
    ACTIONS(340), 1,
      anon_sym_RPAREN,
    ACTIONS(342), 1,
      anon_sym_COMMA,
    STATE(81), 1,
      aux_sym_modifier_parameters_repeat1,
  [1203] = 3,
    ACTIONS(342), 1,
      anon_sym_COMMA,
    ACTIONS(344), 1,
      anon_sym_RPAREN,
    STATE(75), 1,
      aux_sym_modifier_parameters_repeat1,
  [1213] = 3,
    ACTIONS(346), 1,
      anon_sym_DQUOTE,
    ACTIONS(348), 1,
      anon_sym_SQUOTE,
    STATE(86), 1,
      sym_string,
  [1223] = 3,
    ACTIONS(342), 1,
      anon_sym_COMMA,
    ACTIONS(350), 1,
      anon_sym_RPAREN,
    STATE(70), 1,
      aux_sym_modifier_parameters_repeat1,
  [1233] = 1,
    ACTIONS(352), 3,
      anon_sym_LF,
      sym_comment,
      sym_single_line_comment,
  [1239] = 3,
    ACTIONS(342), 1,
      anon_sym_COMMA,
    ACTIONS(354), 1,
      anon_sym_RPAREN,
    STATE(81), 1,
      aux_sym_modifier_parameters_repeat1,
  [1249] = 3,
    ACTIONS(356), 1,
      anon_sym_DQUOTE,
    ACTIONS(358), 1,
      anon_sym_SQUOTE,
    STATE(17), 1,
      sym_string,
  [1259] = 1,
    ACTIONS(232), 3,
      anon_sym_LBRACE_DOLLAR,
      aux_sym_multiline_value_token1,
      anon_sym_RPAREN,
  [1265] = 1,
    ACTIONS(232), 3,
      anon_sym_LBRACE_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_string_token2,
  [1271] = 1,
    ACTIONS(232), 3,
      anon_sym_LBRACE_DOLLAR,
      anon_sym_DQUOTE,
      aux_sym_string_token1,
  [1277] = 1,
    ACTIONS(360), 3,
      anon_sym_LF,
      sym_comment,
      sym_single_line_comment,
  [1283] = 3,
    ACTIONS(362), 1,
      anon_sym_RPAREN,
    ACTIONS(364), 1,
      anon_sym_COMMA,
    STATE(81), 1,
      aux_sym_modifier_parameters_repeat1,
  [1293] = 1,
    ACTIONS(367), 3,
      anon_sym_LF,
      sym_comment,
      sym_single_line_comment,
  [1299] = 3,
    ACTIONS(356), 1,
      anon_sym_DQUOTE,
    ACTIONS(358), 1,
      anon_sym_SQUOTE,
    STATE(95), 1,
      sym_string,
  [1309] = 1,
    ACTIONS(232), 3,
      anon_sym_LF,
      anon_sym_LBRACE_DOLLAR,
      aux_sym_value_token1,
  [1315] = 2,
    ACTIONS(369), 1,
      anon_sym_LPAREN,
    STATE(69), 1,
      sym_modifier_parameters,
  [1322] = 2,
    ACTIONS(371), 1,
      anon_sym_GT,
    ACTIONS(373), 1,
      aux_sym_import_legacy_token2,
  [1329] = 1,
    ACTIONS(375), 2,
      sym_modifier_predefined,
      sym_modifier_function,
  [1334] = 1,
    ACTIONS(362), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1339] = 2,
    ACTIONS(107), 1,
      aux_sym_import_legacy_token2,
    ACTIONS(109), 1,
      anon_sym_GT,
  [1346] = 2,
    ACTIONS(115), 1,
      aux_sym_import_legacy_token2,
    ACTIONS(117), 1,
      anon_sym_GT,
  [1353] = 1,
    ACTIONS(377), 1,
      anon_sym_LF,
  [1357] = 1,
    ACTIONS(379), 1,
      anon_sym_LF,
  [1361] = 1,
    ACTIONS(381), 1,
      anon_sym_source_EQ,
  [1365] = 1,
    ACTIONS(383), 1,
      anon_sym_LF,
  [1369] = 1,
    ACTIONS(385), 1,
      anon_sym_GT,
  [1373] = 1,
    ACTIONS(387), 1,
      anon_sym_LF,
  [1377] = 1,
    ACTIONS(389), 1,
      anon_sym_LF,
  [1381] = 1,
    ACTIONS(391), 1,
      anon_sym_EQ,
  [1385] = 1,
    ACTIONS(393), 1,
      sym_modifier_function,
  [1389] = 1,
    ACTIONS(395), 1,
      anon_sym_LF,
  [1393] = 1,
    ACTIONS(397), 1,
      anon_sym_RBRACE,
  [1397] = 1,
    ACTIONS(399), 1,
      aux_sym_import_legacy_token1,
  [1401] = 1,
    ACTIONS(401), 1,
      sym_identifier,
  [1405] = 1,
    ACTIONS(403), 1,
      sym_identifier,
  [1409] = 1,
    ACTIONS(405), 1,
      anon_sym_RBRACE,
  [1413] = 1,
    ACTIONS(407), 1,
      anon_sym_LF,
  [1417] = 1,
    ACTIONS(409), 1,
      aux_sym_constant_token1,
  [1421] = 1,
    ACTIONS(411), 1,
      anon_sym_COLON,
  [1425] = 1,
    ACTIONS(413), 1,
      anon_sym_INCLUDE_TYPOSCRIPT,
  [1429] = 1,
    ACTIONS(415), 1,
      anon_sym_LF,
  [1433] = 1,
    ACTIONS(417), 1,
      anon_sym_RBRACE,
  [1437] = 1,
    ACTIONS(419), 1,
      anon_sym_RBRACE,
  [1441] = 1,
    ACTIONS(421), 1,
      anon_sym_RBRACE,
  [1445] = 1,
    ACTIONS(423), 1,
      anon_sym_RBRACE,
  [1449] = 1,
    ACTIONS(425), 1,
      ts_builtin_sym_end,
  [1453] = 1,
    ACTIONS(427), 1,
      aux_sym_constant_token1,
  [1457] = 1,
    ACTIONS(429), 1,
      aux_sym_constant_token1,
  [1461] = 1,
    ACTIONS(431), 1,
      aux_sym_constant_token1,
  [1465] = 1,
    ACTIONS(433), 1,
      aux_sym_constant_token1,
  [1469] = 1,
    ACTIONS(435), 1,
      aux_sym_constant_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 42,
  [SMALL_STATE(4)] = 84,
  [SMALL_STATE(5)] = 126,
  [SMALL_STATE(6)] = 168,
  [SMALL_STATE(7)] = 210,
  [SMALL_STATE(8)] = 236,
  [SMALL_STATE(9)] = 255,
  [SMALL_STATE(10)] = 282,
  [SMALL_STATE(11)] = 309,
  [SMALL_STATE(12)] = 336,
  [SMALL_STATE(13)] = 352,
  [SMALL_STATE(14)] = 376,
  [SMALL_STATE(15)] = 400,
  [SMALL_STATE(16)] = 416,
  [SMALL_STATE(17)] = 431,
  [SMALL_STATE(18)] = 446,
  [SMALL_STATE(19)] = 461,
  [SMALL_STATE(20)] = 476,
  [SMALL_STATE(21)] = 491,
  [SMALL_STATE(22)] = 506,
  [SMALL_STATE(23)] = 521,
  [SMALL_STATE(24)] = 536,
  [SMALL_STATE(25)] = 551,
  [SMALL_STATE(26)] = 566,
  [SMALL_STATE(27)] = 581,
  [SMALL_STATE(28)] = 596,
  [SMALL_STATE(29)] = 611,
  [SMALL_STATE(30)] = 626,
  [SMALL_STATE(31)] = 641,
  [SMALL_STATE(32)] = 656,
  [SMALL_STATE(33)] = 671,
  [SMALL_STATE(34)] = 686,
  [SMALL_STATE(35)] = 701,
  [SMALL_STATE(36)] = 725,
  [SMALL_STATE(37)] = 746,
  [SMALL_STATE(38)] = 769,
  [SMALL_STATE(39)] = 780,
  [SMALL_STATE(40)] = 791,
  [SMALL_STATE(41)] = 812,
  [SMALL_STATE(42)] = 835,
  [SMALL_STATE(43)] = 846,
  [SMALL_STATE(44)] = 857,
  [SMALL_STATE(45)] = 877,
  [SMALL_STATE(46)] = 899,
  [SMALL_STATE(47)] = 907,
  [SMALL_STATE(48)] = 921,
  [SMALL_STATE(49)] = 935,
  [SMALL_STATE(50)] = 949,
  [SMALL_STATE(51)] = 963,
  [SMALL_STATE(52)] = 977,
  [SMALL_STATE(53)] = 985,
  [SMALL_STATE(54)] = 999,
  [SMALL_STATE(55)] = 1013,
  [SMALL_STATE(56)] = 1027,
  [SMALL_STATE(57)] = 1041,
  [SMALL_STATE(58)] = 1049,
  [SMALL_STATE(59)] = 1057,
  [SMALL_STATE(60)] = 1071,
  [SMALL_STATE(61)] = 1085,
  [SMALL_STATE(62)] = 1099,
  [SMALL_STATE(63)] = 1113,
  [SMALL_STATE(64)] = 1127,
  [SMALL_STATE(65)] = 1135,
  [SMALL_STATE(66)] = 1149,
  [SMALL_STATE(67)] = 1160,
  [SMALL_STATE(68)] = 1171,
  [SMALL_STATE(69)] = 1182,
  [SMALL_STATE(70)] = 1193,
  [SMALL_STATE(71)] = 1203,
  [SMALL_STATE(72)] = 1213,
  [SMALL_STATE(73)] = 1223,
  [SMALL_STATE(74)] = 1233,
  [SMALL_STATE(75)] = 1239,
  [SMALL_STATE(76)] = 1249,
  [SMALL_STATE(77)] = 1259,
  [SMALL_STATE(78)] = 1265,
  [SMALL_STATE(79)] = 1271,
  [SMALL_STATE(80)] = 1277,
  [SMALL_STATE(81)] = 1283,
  [SMALL_STATE(82)] = 1293,
  [SMALL_STATE(83)] = 1299,
  [SMALL_STATE(84)] = 1309,
  [SMALL_STATE(85)] = 1315,
  [SMALL_STATE(86)] = 1322,
  [SMALL_STATE(87)] = 1329,
  [SMALL_STATE(88)] = 1334,
  [SMALL_STATE(89)] = 1339,
  [SMALL_STATE(90)] = 1346,
  [SMALL_STATE(91)] = 1353,
  [SMALL_STATE(92)] = 1357,
  [SMALL_STATE(93)] = 1361,
  [SMALL_STATE(94)] = 1365,
  [SMALL_STATE(95)] = 1369,
  [SMALL_STATE(96)] = 1373,
  [SMALL_STATE(97)] = 1377,
  [SMALL_STATE(98)] = 1381,
  [SMALL_STATE(99)] = 1385,
  [SMALL_STATE(100)] = 1389,
  [SMALL_STATE(101)] = 1393,
  [SMALL_STATE(102)] = 1397,
  [SMALL_STATE(103)] = 1401,
  [SMALL_STATE(104)] = 1405,
  [SMALL_STATE(105)] = 1409,
  [SMALL_STATE(106)] = 1413,
  [SMALL_STATE(107)] = 1417,
  [SMALL_STATE(108)] = 1421,
  [SMALL_STATE(109)] = 1425,
  [SMALL_STATE(110)] = 1429,
  [SMALL_STATE(111)] = 1433,
  [SMALL_STATE(112)] = 1437,
  [SMALL_STATE(113)] = 1441,
  [SMALL_STATE(114)] = 1445,
  [SMALL_STATE(115)] = 1449,
  [SMALL_STATE(116)] = 1453,
  [SMALL_STATE(117)] = 1457,
  [SMALL_STATE(118)] = 1461,
  [SMALL_STATE(119)] = 1465,
  [SMALL_STATE(120)] = 1469,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typoscript, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_typoscript_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_typoscript_repeat1, 2), SHIFT_REPEAT(2),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_typoscript_repeat1, 2), SHIFT_REPEAT(109),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_typoscript_repeat1, 2), SHIFT_REPEAT(13),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_typoscript_repeat1, 2), SHIFT_REPEAT(106),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_typoscript_repeat1, 2), SHIFT_REPEAT(45),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_typoscript_repeat1, 2), SHIFT_REPEAT(76),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(3),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(109),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(13),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(106),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(45),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(76),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typoscript, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__condition_segment, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__condition_segment, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 3),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 3),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__condition_inner, 2), SHIFT_REPEAT(42),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__condition_inner, 2), SHIFT_REPEAT(14),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__condition_inner, 2),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__condition_inner, 2), SHIFT_REPEAT(10),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__condition_inner, 2), SHIFT_REPEAT(107),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_line, 4, .production_id = 3),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_copy_line, 4, .production_id = 3),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 2),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_legacy, 11, .production_id = 7),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_legacy, 11, .production_id = 7),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, .production_id = 2),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2, .production_id = 2),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_line, 4),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_line, 4),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition_predefined, 2),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition_predefined, 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deletion_line, 3),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deletion_line, 3),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modification_line, 5),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modification_line, 5),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_line, 5, .production_id = 3),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_copy_line, 5, .production_id = 3),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_line, 5, .production_id = 4),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference_line, 5, .production_id = 4),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_configuration_block, 2),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_configuration_block, 2),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, .production_id = 5),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, .production_id = 5),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition_bool, 1),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition_bool, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_legacy, 7),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_legacy, 7),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__condition_segment, 2),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__condition_segment, 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deletion_line, 4),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deletion_line, 4),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modification_line, 6),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modification_line, 6),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_line, 3),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_line, 3),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_line, 4, .production_id = 4),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference_line, 4, .production_id = 4),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [205] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_modifier_parameter_repeat1, 2), SHIFT_REPEAT(120),
  [208] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_modifier_parameter_repeat1, 2), SHIFT_REPEAT(41),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_modifier_parameter_repeat1, 2),
  [213] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_modifier_parameter_repeat1, 2), SHIFT_REPEAT(36),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__condition_inner, 1, .production_id = 1),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifier_parameter, 1),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 3),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifier_parameters, 3),
  [248] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_value_repeat1, 2), SHIFT_REPEAT(119),
  [251] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_value_repeat1, 2), SHIFT_REPEAT(47),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_value_repeat1, 2),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2),
  [272] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(116),
  [275] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(51),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifier_parameters, 2),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifier_parameters, 4),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [306] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(117),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [311] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(62),
  [314] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(118),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2),
  [319] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(63),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_modifier_parameter_repeat1, 1, .production_id = 6),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier_parameters, 3),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier_parameters, 4),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_modifier_parameters_repeat1, 2),
  [364] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_modifier_parameters_repeat1, 2), SHIFT_REPEAT(44),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier_parameters, 2),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_value, 3),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_value, 2),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [425] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_TypoScript(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif

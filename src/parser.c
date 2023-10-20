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
#define STATE_COUNT 132
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 80
#define ALIAS_COUNT 5
#define TOKEN_COUNT 43
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
  aux_sym_condition_else_token1 = 15,
  aux_sym_condition_end_token1 = 16,
  anon_sym_LBRACE = 17,
  anon_sym_RBRACE = 18,
  anon_sym_LBRACE_DOLLAR = 19,
  aux_sym_constant_token1 = 20,
  aux_sym_value_token1 = 21,
  anon_sym_LPAREN = 22,
  aux_sym_multiline_value_token1 = 23,
  anon_sym_RPAREN = 24,
  sym_identifier = 25,
  sym_cobject = 26,
  sym_modifier_predefined = 27,
  sym_modifier_function = 28,
  anon_sym_COMMA = 29,
  aux_sym_modifier_parameter_token1 = 30,
  sym_comment = 31,
  sym_single_line_comment = 32,
  anon_sym_DQUOTE = 33,
  aux_sym_string_token1 = 34,
  anon_sym_SQUOTE = 35,
  aux_sym_string_token2 = 36,
  anon_sym_INCLUDE_TYPOSCRIPT = 37,
  anon_sym_COLON = 38,
  aux_sym_import_legacy_token1 = 39,
  anon_sym_source_EQ = 40,
  aux_sym_import_legacy_token2 = 41,
  anon_sym_ATimport = 42,
  sym_typoscript = 43,
  sym__block_item = 44,
  sym_assignment_line = 45,
  sym_multiline_line = 46,
  sym_deletion_line = 47,
  sym_copy_line = 48,
  sym_reference_line = 49,
  sym_modification_line = 50,
  sym_configuration_block = 51,
  sym__condition_segment = 52,
  sym_condition_bool = 53,
  sym_condition = 54,
  sym_condition_block = 55,
  sym__condition_line = 56,
  aux_sym__condition_inner = 57,
  sym_condition_else = 58,
  sym_condition_end = 59,
  sym_block = 60,
  sym_constant = 61,
  sym_value = 62,
  sym_multiline_value = 63,
  sym_modifier_parameters = 64,
  sym_modifier_parameter = 65,
  sym__comments = 66,
  sym_string = 67,
  sym__imports = 68,
  sym_import_legacy = 69,
  sym_import = 70,
  aux_sym_typoscript_repeat1 = 71,
  aux_sym_condition_block_repeat1 = 72,
  aux_sym__condition_line_repeat1 = 73,
  aux_sym_value_repeat1 = 74,
  aux_sym_multiline_value_repeat1 = 75,
  aux_sym_modifier_parameters_repeat1 = 76,
  aux_sym_modifier_parameter_repeat1 = 77,
  aux_sym_string_repeat1 = 78,
  aux_sym_string_repeat2 = 79,
  anon_alias_sym_bracket_parameter = 80,
  alias_sym_condition_attribute = 81,
  alias_sym_copy_identifier = 82,
  anon_alias_sym_function = 83,
  alias_sym_reference_identifier = 84,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__block_item_token1] = "_block_item_token1",
  [anon_sym_EQ] = "=",
  [anon_sym_LF] = "\n",
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
  [aux_sym_reference_line_token1] = "=<",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_AND] = "AND",
  [anon_sym_OR] = "OR",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [aux_sym__condition_inner_token1] = "_condition_inner_token1",
  [aux_sym_condition_else_token1] = "condition_else_token1",
  [aux_sym_condition_end_token1] = "condition_end_token1",
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
  [sym_multiline_line] = "multiline_line",
  [sym_deletion_line] = "deletion_line",
  [sym_copy_line] = "copy_line",
  [sym_reference_line] = "reference_line",
  [sym_modification_line] = "modification_line",
  [sym_configuration_block] = "configuration_block",
  [sym__condition_segment] = "_condition_segment",
  [sym_condition_bool] = "condition_bool",
  [sym_condition] = "condition",
  [sym_condition_block] = "condition_block",
  [sym__condition_line] = "_condition_line",
  [aux_sym__condition_inner] = "_condition_inner",
  [sym_condition_else] = "condition_else",
  [sym_condition_end] = "condition_end",
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
  [aux_sym_condition_block_repeat1] = "condition_block_repeat1",
  [aux_sym__condition_line_repeat1] = "_condition_line_repeat1",
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
  [aux_sym_condition_else_token1] = aux_sym_condition_else_token1,
  [aux_sym_condition_end_token1] = aux_sym_condition_end_token1,
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
  [sym_multiline_line] = sym_multiline_line,
  [sym_deletion_line] = sym_deletion_line,
  [sym_copy_line] = sym_copy_line,
  [sym_reference_line] = sym_reference_line,
  [sym_modification_line] = sym_modification_line,
  [sym_configuration_block] = sym_configuration_block,
  [sym__condition_segment] = sym__condition_segment,
  [sym_condition_bool] = sym_condition_bool,
  [sym_condition] = sym_condition,
  [sym_condition_block] = sym_condition_block,
  [sym__condition_line] = sym__condition_line,
  [aux_sym__condition_inner] = aux_sym__condition_inner,
  [sym_condition_else] = sym_condition_else,
  [sym_condition_end] = sym_condition_end,
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
  [aux_sym_condition_block_repeat1] = aux_sym_condition_block_repeat1,
  [aux_sym__condition_line_repeat1] = aux_sym__condition_line_repeat1,
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
    .visible = true,
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
  [aux_sym_condition_else_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_condition_end_token1] = {
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
  [sym_multiline_line] = {
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
  [sym_condition_block] = {
    .visible = true,
    .named = true,
  },
  [sym__condition_line] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__condition_inner] = {
    .visible = false,
    .named = false,
  },
  [sym_condition_else] = {
    .visible = true,
    .named = true,
  },
  [sym_condition_end] = {
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
  [aux_sym_condition_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__condition_line_repeat1] = {
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
  [11] = 11,
  [12] = 10,
  [13] = 13,
  [14] = 14,
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
  [32] = 18,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 39,
  [47] = 40,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 57,
  [59] = 59,
  [60] = 44,
  [61] = 61,
  [62] = 62,
  [63] = 54,
  [64] = 53,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 55,
  [70] = 70,
  [71] = 71,
  [72] = 45,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 44,
  [79] = 79,
  [80] = 80,
  [81] = 79,
  [82] = 82,
  [83] = 67,
  [84] = 84,
  [85] = 84,
  [86] = 86,
  [87] = 65,
  [88] = 44,
  [89] = 89,
  [90] = 44,
  [91] = 44,
  [92] = 92,
  [93] = 61,
  [94] = 94,
  [95] = 13,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 11,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 116,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 116,
  [123] = 116,
  [124] = 116,
  [125] = 116,
  [126] = 126,
  [127] = 115,
  [128] = 115,
  [129] = 115,
  [130] = 115,
  [131] = 115,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(191);
      if (lookahead == '\n') ADVANCE(195);
      if (lookahead == '"') ADVANCE(299);
      if (lookahead == '#') ADVANCE(298);
      if (lookahead == '&') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(303);
      if (lookahead == '(') ADVANCE(236);
      if (lookahead == ')') ADVANCE(240);
      if (lookahead == ',') ADVANCE(293);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '<') ADVANCE(197);
      if (lookahead == '=') ADVANCE(194);
      if (lookahead == '>') ADVANCE(196);
      if (lookahead == '@') ADVANCE(144);
      if (lookahead == 'A') ADVANCE(73);
      if (lookahead == 'C') ADVANCE(22);
      if (lookahead == 'E') ADVANCE(30);
      if (lookahead == 'F') ADVANCE(56);
      if (lookahead == 'H') ADVANCE(72);
      if (lookahead == 'I') ADVANCE(69);
      if (lookahead == 'L') ADVANCE(78);
      if (lookahead == 'O') ADVANCE(88);
      if (lookahead == 'P') ADVANCE(17);
      if (lookahead == 'R') ADVANCE(36);
      if (lookahead == 'S') ADVANCE(121);
      if (lookahead == 'T') ADVANCE(37);
      if (lookahead == 'U') ADVANCE(99);
      if (lookahead == '[') ADVANCE(205);
      if (lookahead == ']') ADVANCE(206);
      if (lookahead == 'a') ADVANCE(132);
      if (lookahead == 'p') ADVANCE(166);
      if (lookahead == 'r') ADVANCE(136);
      if (lookahead == 's') ADVANCE(155);
      if (lookahead == 'u') ADVANCE(153);
      if (lookahead == '{') ADVANCE(217);
      if (lookahead == '|') ADVANCE(178);
      if (lookahead == '}') ADVANCE(218);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(195);
      if (lookahead == '#') ADVANCE(298);
      if (lookahead == '&') ADVANCE(5);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ':') ADVANCE(308);
      if (lookahead == '=') ADVANCE(193);
      if (lookahead == 'A') ADVANCE(73);
      if (lookahead == 'O') ADVANCE(88);
      if (lookahead == '[') ADVANCE(204);
      if (lookahead == '|') ADVANCE(178);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(195);
      if (lookahead == 'C') ADVANCE(224);
      if (lookahead == 'E') ADVANCE(226);
      if (lookahead == 'F') ADVANCE(229);
      if (lookahead == 'H') ADVANCE(231);
      if (lookahead == 'I') ADVANCE(230);
      if (lookahead == 'L') ADVANCE(232);
      if (lookahead == 'P') ADVANCE(223);
      if (lookahead == 'R') ADVANCE(227);
      if (lookahead == 'S') ADVANCE(234);
      if (lookahead == 'T') ADVANCE(228);
      if (lookahead == 'U') ADVANCE(233);
      if (lookahead == '{') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(225);
      if (lookahead != 0) ADVANCE(221);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(195);
      if (lookahead == '{') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(235);
      if (lookahead != 0) ADVANCE(221);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(299);
      if (lookahead == '{') ADVANCE(301);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(302);
      if (lookahead != 0) ADVANCE(300);
      END_STATE();
    case 5:
      if (lookahead == '&') ADVANCE(200);
      END_STATE();
    case 6:
      if (lookahead == '&') ADVANCE(209);
      if (lookahead == 'A') ADVANCE(211);
      if (lookahead == 'O') ADVANCE(212);
      if (lookahead == '[') ADVANCE(204);
      if (lookahead == ']') ADVANCE(206);
      if (lookahead == '{') ADVANCE(208);
      if (lookahead == '|') ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(210);
      if (lookahead != 0) ADVANCE(207);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(303);
      if (lookahead == '{') ADVANCE(305);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(306);
      if (lookahead != 0) ADVANCE(304);
      END_STATE();
    case 8:
      if (lookahead == '(') ADVANCE(236);
      if (lookahead == ')') ADVANCE(240);
      if (lookahead == ',') ADVANCE(293);
      if (lookahead == '{') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(296);
      if (lookahead != 0) ADVANCE(294);
      END_STATE();
    case 9:
      if (lookahead == ')') ADVANCE(240);
      if (lookahead == '{') ADVANCE(238);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(239);
      if (lookahead != 0) ADVANCE(237);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(298);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '/') ADVANCE(297);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '<') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '=') ADVANCE(199);
      END_STATE();
    case 15:
      if (lookahead == '=') ADVANCE(312);
      END_STATE();
    case 16:
      if (lookahead == '>') ADVANCE(196);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(313);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(314);
      END_STATE();
    case 17:
      if (lookahead == 'A') ADVANCE(53);
      END_STATE();
    case 18:
      if (lookahead == 'A') ADVANCE(53);
      if (lookahead == 'G') ADVANCE(125);
      END_STATE();
    case 19:
      if (lookahead == 'A') ADVANCE(245);
      if (lookahead == 'N') ADVANCE(112);
      END_STATE();
    case 20:
      if (lookahead == 'A') ADVANCE(35);
      END_STATE();
    case 21:
      if (lookahead == 'A') ADVANCE(77);
      END_STATE();
    case 22:
      if (lookahead == 'A') ADVANCE(102);
      if (lookahead == 'O') ADVANCE(19);
      END_STATE();
    case 23:
      if (lookahead == 'A') ADVANCE(103);
      END_STATE();
    case 24:
      if (lookahead == 'A') ADVANCE(110);
      END_STATE();
    case 25:
      if (lookahead == 'B') ADVANCE(23);
      END_STATE();
    case 26:
      if (lookahead == 'C') ADVANCE(79);
      if (lookahead == 'S') ADVANCE(115);
      END_STATE();
    case 27:
      if (lookahead == 'C') ADVANCE(65);
      END_STATE();
    case 28:
      if (lookahead == 'C') ADVANCE(38);
      END_STATE();
    case 29:
      if (lookahead == 'C') ADVANCE(93);
      END_STATE();
    case 30:
      if (lookahead == 'D') ADVANCE(59);
      if (lookahead == 'X') ADVANCE(105);
      END_STATE();
    case 31:
      if (lookahead == 'D') ADVANCE(202);
      END_STATE();
    case 32:
      if (lookahead == 'D') ADVANCE(97);
      END_STATE();
    case 33:
      if (lookahead == 'D') ADVANCE(44);
      END_STATE();
    case 34:
      if (lookahead == 'D') ADVANCE(113);
      END_STATE();
    case 35:
      if (lookahead == 'D') ADVANCE(127);
      END_STATE();
    case 36:
      if (lookahead == 'E') ADVANCE(26);
      END_STATE();
    case 37:
      if (lookahead == 'E') ADVANCE(71);
      if (lookahead == 'M') ADVANCE(40);
      END_STATE();
    case 38:
      if (lookahead == 'E') ADVANCE(243);
      END_STATE();
    case 39:
      if (lookahead == 'E') ADVANCE(244);
      END_STATE();
    case 40:
      if (lookahead == 'E') ADVANCE(75);
      END_STATE();
    case 41:
      if (lookahead == 'E') ADVANCE(70);
      END_STATE();
    case 42:
      if (lookahead == 'E') ADVANCE(89);
      END_STATE();
    case 43:
      if (lookahead == 'E') ADVANCE(98);
      END_STATE();
    case 44:
      if (lookahead == 'E') ADVANCE(126);
      END_STATE();
    case 45:
      if (lookahead == 'E') ADVANCE(76);
      END_STATE();
    case 46:
      if (lookahead == 'E') ADVANCE(54);
      END_STATE();
    case 47:
      if (lookahead == 'E') ADVANCE(63);
      END_STATE();
    case 48:
      if (lookahead == 'E') ADVANCE(90);
      END_STATE();
    case 49:
      if (lookahead == 'E') ADVANCE(87);
      END_STATE();
    case 50:
      if (lookahead == 'E') ADVANCE(127);
      END_STATE();
    case 51:
      if (lookahead == 'F') ADVANCE(169);
      if (lookahead == 'S') ADVANCE(175);
      END_STATE();
    case 52:
      if (lookahead == 'G') ADVANCE(243);
      END_STATE();
    case 53:
      if (lookahead == 'G') ADVANCE(38);
      END_STATE();
    case 54:
      if (lookahead == 'G') ADVANCE(62);
      END_STATE();
    case 55:
      if (lookahead == 'G') ADVANCE(61);
      END_STATE();
    case 56:
      if (lookahead == 'I') ADVANCE(67);
      if (lookahead == 'L') ADVANCE(117);
      END_STATE();
    case 57:
      if (lookahead == 'I') ADVANCE(76);
      END_STATE();
    case 58:
      if (lookahead == 'I') ADVANCE(34);
      END_STATE();
    case 59:
      if (lookahead == 'I') ADVANCE(109);
      END_STATE();
    case 60:
      if (lookahead == 'I') ADVANCE(86);
      END_STATE();
    case 61:
      if (lookahead == 'I') ADVANCE(74);
      END_STATE();
    case 62:
      if (lookahead == 'I') ADVANCE(104);
      END_STATE();
    case 63:
      if (lookahead == 'L') ADVANCE(243);
      END_STATE();
    case 64:
      if (lookahead == 'L') ADVANCE(146);
      END_STATE();
    case 65:
      if (lookahead == 'L') ADVANCE(118);
      END_STATE();
    case 66:
      if (lookahead == 'L') ADVANCE(24);
      END_STATE();
    case 67:
      if (lookahead == 'L') ADVANCE(39);
      END_STATE();
    case 68:
      if (lookahead == 'L') ADVANCE(120);
      END_STATE();
    case 69:
      if (lookahead == 'M') ADVANCE(18);
      if (lookahead == 'N') ADVANCE(27);
      END_STATE();
    case 70:
      if (lookahead == 'M') ADVANCE(83);
      END_STATE();
    case 71:
      if (lookahead == 'M') ADVANCE(83);
      if (lookahead == 'X') ADVANCE(106);
      END_STATE();
    case 72:
      if (lookahead == 'M') ADVANCE(40);
      END_STATE();
    case 73:
      if (lookahead == 'N') ADVANCE(31);
      END_STATE();
    case 74:
      if (lookahead == 'N') ADVANCE(243);
      END_STATE();
    case 75:
      if (lookahead == 'N') ADVANCE(116);
      END_STATE();
    case 76:
      if (lookahead == 'N') ADVANCE(106);
      END_STATE();
    case 77:
      if (lookahead == 'N') ADVANCE(47);
      END_STATE();
    case 78:
      if (lookahead == 'O') ADVANCE(20);
      END_STATE();
    case 79:
      if (lookahead == 'O') ADVANCE(92);
      END_STATE();
    case 80:
      if (lookahead == 'O') ADVANCE(119);
      END_STATE();
    case 81:
      if (lookahead == 'O') ADVANCE(100);
      END_STATE();
    case 82:
      if (lookahead == 'O') ADVANCE(96);
      END_STATE();
    case 83:
      if (lookahead == 'P') ADVANCE(66);
      END_STATE();
    case 84:
      if (lookahead == 'P') ADVANCE(81);
      END_STATE();
    case 85:
      if (lookahead == 'P') ADVANCE(21);
      END_STATE();
    case 86:
      if (lookahead == 'P') ADVANCE(108);
      END_STATE();
    case 87:
      if (lookahead == 'P') ADVANCE(68);
      END_STATE();
    case 88:
      if (lookahead == 'R') ADVANCE(203);
      END_STATE();
    case 89:
      if (lookahead == 'R') ADVANCE(245);
      END_STATE();
    case 90:
      if (lookahead == 'R') ADVANCE(243);
      END_STATE();
    case 91:
      if (lookahead == 'R') ADVANCE(28);
      END_STATE();
    case 92:
      if (lookahead == 'R') ADVANCE(32);
      END_STATE();
    case 93:
      if (lookahead == 'R') ADVANCE(60);
      END_STATE();
    case 94:
      if (lookahead == 'R') ADVANCE(43);
      END_STATE();
    case 95:
      if (lookahead == 'R') ADVANCE(46);
      END_STATE();
    case 96:
      if (lookahead == 'R') ADVANCE(50);
      END_STATE();
    case 97:
      if (lookahead == 'S') ADVANCE(243);
      END_STATE();
    case 98:
      if (lookahead == 'S') ADVANCE(80);
      END_STATE();
    case 99:
      if (lookahead == 'S') ADVANCE(42);
      END_STATE();
    case 100:
      if (lookahead == 'S') ADVANCE(29);
      END_STATE();
    case 101:
      if (lookahead == 'S') ADVANCE(175);
      END_STATE();
    case 102:
      if (lookahead == 'S') ADVANCE(38);
      END_STATE();
    case 103:
      if (lookahead == 'S') ADVANCE(49);
      END_STATE();
    case 104:
      if (lookahead == 'S') ADVANCE(114);
      END_STATE();
    case 105:
      if (lookahead == 'T') ADVANCE(25);
      END_STATE();
    case 106:
      if (lookahead == 'T') ADVANCE(243);
      END_STATE();
    case 107:
      if (lookahead == 'T') ADVANCE(122);
      END_STATE();
    case 108:
      if (lookahead == 'T') ADVANCE(307);
      END_STATE();
    case 109:
      if (lookahead == 'T') ADVANCE(85);
      END_STATE();
    case 110:
      if (lookahead == 'T') ADVANCE(38);
      END_STATE();
    case 111:
      if (lookahead == 'T') ADVANCE(159);
      END_STATE();
    case 112:
      if (lookahead == 'T') ADVANCE(45);
      END_STATE();
    case 113:
      if (lookahead == 'T') ADVANCE(41);
      END_STATE();
    case 114:
      if (lookahead == 'T') ADVANCE(48);
      END_STATE();
    case 115:
      if (lookahead == 'T') ADVANCE(82);
      END_STATE();
    case 116:
      if (lookahead == 'U') ADVANCE(243);
      END_STATE();
    case 117:
      if (lookahead == 'U') ADVANCE(58);
      END_STATE();
    case 118:
      if (lookahead == 'U') ADVANCE(33);
      END_STATE();
    case 119:
      if (lookahead == 'U') ADVANCE(91);
      END_STATE();
    case 120:
      if (lookahead == 'U') ADVANCE(55);
      END_STATE();
    case 121:
      if (lookahead == 'V') ADVANCE(52);
      END_STATE();
    case 122:
      if (lookahead == 'Y') ADVANCE(84);
      END_STATE();
    case 123:
      if (lookahead == ']') ADVANCE(215);
      END_STATE();
    case 124:
      if (lookahead == ']') ADVANCE(214);
      END_STATE();
    case 125:
      if (lookahead == '_') ADVANCE(94);
      END_STATE();
    case 126:
      if (lookahead == '_') ADVANCE(107);
      END_STATE();
    case 127:
      if (lookahead == '_') ADVANCE(95);
      END_STATE();
    case 128:
      if (lookahead == 'a') ADVANCE(254);
      if (lookahead == 'p') ADVANCE(282);
      if (lookahead == 'r') ADVANCE(258);
      if (lookahead == 's') ADVANCE(277);
      if (lookahead == 'u') ADVANCE(271);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(128)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 129:
      if (lookahead == 'a') ADVANCE(131);
      END_STATE();
    case 130:
      if (lookahead == 'c') ADVANCE(138);
      END_STATE();
    case 131:
      if (lookahead == 'c') ADVANCE(141);
      END_STATE();
    case 132:
      if (lookahead == 'd') ADVANCE(134);
      if (lookahead == 'p') ADVANCE(160);
      END_STATE();
    case 133:
      if (lookahead == 'd') ADVANCE(101);
      END_STATE();
    case 134:
      if (lookahead == 'd') ADVANCE(111);
      END_STATE();
    case 135:
      if (lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 136:
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 137:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 138:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 139:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 140:
      if (lookahead == 'e') ADVANCE(165);
      END_STATE();
    case 141:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 142:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 143:
      if (lookahead == 'g') ADVANCE(246);
      END_STATE();
    case 144:
      if (lookahead == 'i') ADVANCE(150);
      END_STATE();
    case 145:
      if (lookahead == 'i') ADVANCE(162);
      END_STATE();
    case 146:
      if (lookahead == 'i') ADVANCE(170);
      END_STATE();
    case 147:
      if (lookahead == 'i') ADVANCE(152);
      END_STATE();
    case 148:
      if (lookahead == 'l') ADVANCE(129);
      END_STATE();
    case 149:
      if (lookahead == 'm') ADVANCE(156);
      if (lookahead == 'p') ADVANCE(148);
      if (lookahead == 'v') ADVANCE(140);
      END_STATE();
    case 150:
      if (lookahead == 'm') ADVANCE(161);
      END_STATE();
    case 151:
      if (lookahead == 'm') ADVANCE(64);
      END_STATE();
    case 152:
      if (lookahead == 'n') ADVANCE(143);
      END_STATE();
    case 153:
      if (lookahead == 'n') ADVANCE(145);
      END_STATE();
    case 154:
      if (lookahead == 'n') ADVANCE(133);
      END_STATE();
    case 155:
      if (lookahead == 'o') ADVANCE(163);
      END_STATE();
    case 156:
      if (lookahead == 'o') ADVANCE(177);
      END_STATE();
    case 157:
      if (lookahead == 'o') ADVANCE(151);
      END_STATE();
    case 158:
      if (lookahead == 'o') ADVANCE(167);
      END_STATE();
    case 159:
      if (lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 160:
      if (lookahead == 'p') ADVANCE(139);
      END_STATE();
    case 161:
      if (lookahead == 'p') ADVANCE(158);
      END_STATE();
    case 162:
      if (lookahead == 'q') ADVANCE(176);
      END_STATE();
    case 163:
      if (lookahead == 'r') ADVANCE(174);
      if (lookahead == 'u') ADVANCE(164);
      END_STATE();
    case 164:
      if (lookahead == 'r') ADVANCE(130);
      END_STATE();
    case 165:
      if (lookahead == 'r') ADVANCE(171);
      END_STATE();
    case 166:
      if (lookahead == 'r') ADVANCE(135);
      END_STATE();
    case 167:
      if (lookahead == 'r') ADVANCE(172);
      END_STATE();
    case 168:
      if (lookahead == 'r') ADVANCE(147);
      END_STATE();
    case 169:
      if (lookahead == 'r') ADVANCE(157);
      END_STATE();
    case 170:
      if (lookahead == 's') ADVANCE(173);
      END_STATE();
    case 171:
      if (lookahead == 's') ADVANCE(142);
      END_STATE();
    case 172:
      if (lookahead == 't') ADVANCE(315);
      END_STATE();
    case 173:
      if (lookahead == 't') ADVANCE(246);
      END_STATE();
    case 174:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 175:
      if (lookahead == 't') ADVANCE(168);
      END_STATE();
    case 176:
      if (lookahead == 'u') ADVANCE(142);
      END_STATE();
    case 177:
      if (lookahead == 'v') ADVANCE(137);
      END_STATE();
    case 178:
      if (lookahead == '|') ADVANCE(201);
      END_STATE();
    case 179:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(179)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 180:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(180)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 181:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(187);
      END_STATE();
    case 182:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(181);
      END_STATE();
    case 183:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(123);
      END_STATE();
    case 184:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 185:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(189);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(183);
      END_STATE();
    case 186:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(188);
      END_STATE();
    case 187:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(123);
      END_STATE();
    case 188:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(182);
      END_STATE();
    case 189:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(184);
      END_STATE();
    case 190:
      if (eof) ADVANCE(191);
      if (lookahead == '\n') ADVANCE(192);
      if (lookahead == '#') ADVANCE(298);
      if (lookahead == '(') ADVANCE(236);
      if (lookahead == '.') ADVANCE(241);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == '<') ADVANCE(197);
      if (lookahead == '=') ADVANCE(194);
      if (lookahead == '>') ADVANCE(196);
      if (lookahead == '@') ADVANCE(144);
      if (lookahead == '[') ADVANCE(205);
      if (lookahead == '{') ADVANCE(216);
      if (lookahead == '}') ADVANCE(218);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(190)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym__block_item_token1);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '<') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(13);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_reference_line_token1);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_AND);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_OR);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(185);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(186);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym__condition_inner_token1);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym__condition_inner_token1);
      if (lookahead == '$') ADVANCE(219);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym__condition_inner_token1);
      if (lookahead == '&') ADVANCE(200);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym__condition_inner_token1);
      if (lookahead == '&') ADVANCE(209);
      if (lookahead == 'A') ADVANCE(211);
      if (lookahead == 'O') ADVANCE(212);
      if (lookahead == '[') ADVANCE(204);
      if (lookahead == '{') ADVANCE(208);
      if (lookahead == '|') ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(207);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym__condition_inner_token1);
      if (lookahead == 'N') ADVANCE(31);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym__condition_inner_token1);
      if (lookahead == 'R') ADVANCE(203);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym__condition_inner_token1);
      if (lookahead == '|') ADVANCE(201);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_condition_else_token1);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_condition_end_token1);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '$') ADVANCE(219);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_LBRACE_DOLLAR);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_value_token1);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == '$') ADVANCE(219);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == 'A') ADVANCE(53);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == 'A') ADVANCE(102);
      if (lookahead == 'O') ADVANCE(19);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == 'C') ADVANCE(224);
      if (lookahead == 'E') ADVANCE(226);
      if (lookahead == 'F') ADVANCE(229);
      if (lookahead == 'H') ADVANCE(231);
      if (lookahead == 'I') ADVANCE(230);
      if (lookahead == 'L') ADVANCE(232);
      if (lookahead == 'P') ADVANCE(223);
      if (lookahead == 'R') ADVANCE(227);
      if (lookahead == 'S') ADVANCE(234);
      if (lookahead == 'T') ADVANCE(228);
      if (lookahead == 'U') ADVANCE(233);
      if (lookahead == '{') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(221);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == 'D') ADVANCE(59);
      if (lookahead == 'X') ADVANCE(105);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == 'E') ADVANCE(26);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == 'E') ADVANCE(71);
      if (lookahead == 'M') ADVANCE(40);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == 'I') ADVANCE(67);
      if (lookahead == 'L') ADVANCE(117);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == 'M') ADVANCE(18);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == 'M') ADVANCE(40);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == 'O') ADVANCE(20);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == 'S') ADVANCE(42);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == 'V') ADVANCE(52);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == '{') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(221);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_multiline_value_token1);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_multiline_value_token1);
      if (lookahead == '$') ADVANCE(219);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_multiline_value_token1);
      if (lookahead == '{') ADVANCE(238);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(237);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(242);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_cobject);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_cobject);
      if (lookahead == 'S') ADVANCE(243);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_cobject);
      if (lookahead == '_') ADVANCE(57);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_modifier_predefined);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_modifier_predefined);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'F') ADVANCE(284);
      if (lookahead == 'S') ADVANCE(289);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'L') ADVANCE(266);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'S') ADVANCE(289);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'T') ADVANCE(275);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'a') ADVANCE(253);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'c') ADVANCE(260);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'd') ADVANCE(255);
      if (lookahead == 'p') ADVANCE(278);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'd') ADVANCE(251);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'd') ADVANCE(250);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'e') ADVANCE(278);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'e') ADVANCE(270);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'e') ADVANCE(249);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'e') ADVANCE(250);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'e') ADVANCE(248);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'e') ADVANCE(273);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'e') ADVANCE(281);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'g') ADVANCE(247);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'i') ADVANCE(279);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'i') ADVANCE(285);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'i') ADVANCE(272);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'l') ADVANCE(252);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'm') ADVANCE(249);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'm') ADVANCE(274);
      if (lookahead == 'p') ADVANCE(268);
      if (lookahead == 'v') ADVANCE(263);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'n') ADVANCE(265);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'n') ADVANCE(264);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'n') ADVANCE(256);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'o') ADVANCE(291);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'o') ADVANCE(249);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'o') ADVANCE(269);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'o') ADVANCE(280);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'p') ADVANCE(262);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'q') ADVANCE(290);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'r') ADVANCE(287);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'r') ADVANCE(286);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'r') ADVANCE(257);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'r') ADVANCE(267);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'r') ADVANCE(276);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 's') ADVANCE(288);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 's') ADVANCE(259);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 't') ADVANCE(249);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 't') ADVANCE(247);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 't') ADVANCE(283);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'u') ADVANCE(259);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'v') ADVANCE(261);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_modifier_parameter_token1);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_modifier_parameter_token1);
      if (lookahead == '$') ADVANCE(219);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_modifier_parameter_token1);
      if (lookahead == '(') ADVANCE(236);
      if (lookahead == '{') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != ',') ADVANCE(294);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_single_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(298);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '$') ADVANCE(219);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '{') ADVANCE(301);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(300);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(219);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '{') ADVANCE(305);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(304);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_INCLUDE_TYPOSCRIPT);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(199);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_import_legacy_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(310);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(311);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_import_legacy_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(311);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_source_EQ);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_import_legacy_token2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(313);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(314);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_import_legacy_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(314);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_ATimport);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 190},
  [2] = {.lex_state = 190},
  [3] = {.lex_state = 190},
  [4] = {.lex_state = 190},
  [5] = {.lex_state = 190},
  [6] = {.lex_state = 190},
  [7] = {.lex_state = 190},
  [8] = {.lex_state = 190},
  [9] = {.lex_state = 6},
  [10] = {.lex_state = 6},
  [11] = {.lex_state = 190},
  [12] = {.lex_state = 6},
  [13] = {.lex_state = 190},
  [14] = {.lex_state = 190},
  [15] = {.lex_state = 190},
  [16] = {.lex_state = 190},
  [17] = {.lex_state = 190},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 190},
  [20] = {.lex_state = 190},
  [21] = {.lex_state = 190},
  [22] = {.lex_state = 190},
  [23] = {.lex_state = 190},
  [24] = {.lex_state = 190},
  [25] = {.lex_state = 190},
  [26] = {.lex_state = 190},
  [27] = {.lex_state = 190},
  [28] = {.lex_state = 190},
  [29] = {.lex_state = 190},
  [30] = {.lex_state = 190},
  [31] = {.lex_state = 190},
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 190},
  [34] = {.lex_state = 190},
  [35] = {.lex_state = 190},
  [36] = {.lex_state = 190},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 8},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 8},
  [42] = {.lex_state = 8},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 6},
  [46] = {.lex_state = 8},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 8},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 8},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 7},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 7},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 7},
  [60] = {.lex_state = 8},
  [61] = {.lex_state = 8},
  [62] = {.lex_state = 9},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 7},
  [65] = {.lex_state = 8},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 8},
  [68] = {.lex_state = 9},
  [69] = {.lex_state = 7},
  [70] = {.lex_state = 9},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 7},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 3},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 9},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 16},
  [96] = {.lex_state = 128},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 16},
  [99] = {.lex_state = 16},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 190},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 179},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 310},
  [115] = {.lex_state = 180},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 1},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 190},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 1},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 1},
  [127] = {.lex_state = 180},
  [128] = {.lex_state = 180},
  [129] = {.lex_state = 180},
  [130] = {.lex_state = 180},
  [131] = {.lex_state = 180},
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
    [aux_sym_condition_else_token1] = ACTIONS(1),
    [aux_sym_condition_end_token1] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_DOLLAR] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_cobject] = ACTIONS(1),
    [sym_modifier_predefined] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_single_line_comment] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_INCLUDE_TYPOSCRIPT] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_source_EQ] = ACTIONS(1),
    [anon_sym_ATimport] = ACTIONS(1),
  },
  [1] = {
    [sym_typoscript] = STATE(100),
    [sym__block_item] = STATE(3),
    [sym_assignment_line] = STATE(3),
    [sym_multiline_line] = STATE(3),
    [sym_deletion_line] = STATE(3),
    [sym_copy_line] = STATE(3),
    [sym_reference_line] = STATE(3),
    [sym_modification_line] = STATE(3),
    [sym_configuration_block] = STATE(3),
    [sym__condition_segment] = STATE(43),
    [sym_condition] = STATE(37),
    [sym_condition_block] = STATE(3),
    [sym__condition_line] = STATE(6),
    [sym_condition_else] = STATE(73),
    [sym_condition_end] = STATE(3),
    [sym__imports] = STATE(3),
    [sym_import_legacy] = STATE(3),
    [sym_import] = STATE(3),
    [aux_sym_typoscript_repeat1] = STATE(3),
    [aux_sym__condition_line_repeat1] = STATE(43),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym__block_item_token1] = ACTIONS(5),
    [anon_sym_LT] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [aux_sym_condition_else_token1] = ACTIONS(11),
    [aux_sym_condition_end_token1] = ACTIONS(13),
    [sym_identifier] = ACTIONS(15),
    [sym_comment] = ACTIONS(5),
    [sym_single_line_comment] = ACTIONS(5),
    [anon_sym_ATimport] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(24), 1,
      anon_sym_LT,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(30), 1,
      aux_sym_condition_else_token1,
    ACTIONS(33), 1,
      aux_sym_condition_end_token1,
    ACTIONS(36), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_ATimport,
    STATE(6), 1,
      sym__condition_line,
    STATE(37), 1,
      sym_condition,
    STATE(73), 1,
      sym_condition_else,
    STATE(43), 2,
      sym__condition_segment,
      aux_sym__condition_line_repeat1,
    ACTIONS(21), 3,
      aux_sym__block_item_token1,
      sym_comment,
      sym_single_line_comment,
    STATE(2), 14,
      sym__block_item,
      sym_assignment_line,
      sym_multiline_line,
      sym_deletion_line,
      sym_copy_line,
      sym_reference_line,
      sym_modification_line,
      sym_configuration_block,
      sym_condition_block,
      sym_condition_end,
      sym__imports,
      sym_import_legacy,
      sym_import,
      aux_sym_typoscript_repeat1,
  [56] = 13,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      aux_sym_condition_else_token1,
    ACTIONS(13), 1,
      aux_sym_condition_end_token1,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_ATimport,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    STATE(6), 1,
      sym__condition_line,
    STATE(37), 1,
      sym_condition,
    STATE(73), 1,
      sym_condition_else,
    STATE(43), 2,
      sym__condition_segment,
      aux_sym__condition_line_repeat1,
    ACTIONS(44), 3,
      aux_sym__block_item_token1,
      sym_comment,
      sym_single_line_comment,
    STATE(2), 14,
      sym__block_item,
      sym_assignment_line,
      sym_multiline_line,
      sym_deletion_line,
      sym_copy_line,
      sym_reference_line,
      sym_modification_line,
      sym_configuration_block,
      sym_condition_block,
      sym_condition_end,
      sym__imports,
      sym_import_legacy,
      sym_import,
      aux_sym_typoscript_repeat1,
  [112] = 7,
    ACTIONS(51), 1,
      anon_sym_LT,
    ACTIONS(54), 1,
      anon_sym_LBRACK,
    ACTIONS(56), 1,
      sym_identifier,
    ACTIONS(59), 1,
      anon_sym_ATimport,
    ACTIONS(48), 3,
      aux_sym__block_item_token1,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(46), 4,
      ts_builtin_sym_end,
      aux_sym_condition_else_token1,
      aux_sym_condition_end_token1,
      anon_sym_RBRACE,
    STATE(4), 12,
      sym__block_item,
      sym_assignment_line,
      sym_multiline_line,
      sym_deletion_line,
      sym_copy_line,
      sym_reference_line,
      sym_modification_line,
      sym_configuration_block,
      sym__imports,
      sym_import_legacy,
      sym_import,
      aux_sym_condition_block_repeat1,
  [150] = 7,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_ATimport,
    ACTIONS(66), 1,
      anon_sym_LBRACK,
    ACTIONS(62), 3,
      ts_builtin_sym_end,
      aux_sym_condition_else_token1,
      aux_sym_condition_end_token1,
    ACTIONS(64), 3,
      aux_sym__block_item_token1,
      sym_comment,
      sym_single_line_comment,
    STATE(4), 12,
      sym__block_item,
      sym_assignment_line,
      sym_multiline_line,
      sym_deletion_line,
      sym_copy_line,
      sym_reference_line,
      sym_modification_line,
      sym_configuration_block,
      sym__imports,
      sym_import_legacy,
      sym_import,
      aux_sym_condition_block_repeat1,
  [187] = 7,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_ATimport,
    ACTIONS(72), 1,
      anon_sym_LBRACK,
    ACTIONS(68), 3,
      ts_builtin_sym_end,
      aux_sym_condition_else_token1,
      aux_sym_condition_end_token1,
    ACTIONS(70), 3,
      aux_sym__block_item_token1,
      sym_comment,
      sym_single_line_comment,
    STATE(5), 12,
      sym__block_item,
      sym_assignment_line,
      sym_multiline_line,
      sym_deletion_line,
      sym_copy_line,
      sym_reference_line,
      sym_modification_line,
      sym_configuration_block,
      sym__imports,
      sym_import_legacy,
      sym_import,
      aux_sym_condition_block_repeat1,
  [224] = 6,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_ATimport,
    ACTIONS(74), 1,
      anon_sym_RBRACE,
    ACTIONS(64), 3,
      aux_sym__block_item_token1,
      sym_comment,
      sym_single_line_comment,
    STATE(4), 12,
      sym__block_item,
      sym_assignment_line,
      sym_multiline_line,
      sym_deletion_line,
      sym_copy_line,
      sym_reference_line,
      sym_modification_line,
      sym_configuration_block,
      sym__imports,
      sym_import_legacy,
      sym_import,
      aux_sym_condition_block_repeat1,
  [256] = 6,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_ATimport,
    ACTIONS(78), 1,
      anon_sym_RBRACE,
    ACTIONS(76), 3,
      aux_sym__block_item_token1,
      sym_comment,
      sym_single_line_comment,
    STATE(7), 12,
      sym__block_item,
      sym_assignment_line,
      sym_multiline_line,
      sym_deletion_line,
      sym_copy_line,
      sym_reference_line,
      sym_modification_line,
      sym_configuration_block,
      sym__imports,
      sym_import_legacy,
      sym_import,
      aux_sym_condition_block_repeat1,
  [288] = 7,
    ACTIONS(83), 1,
      anon_sym_LBRACK,
    ACTIONS(86), 1,
      anon_sym_RBRACK,
    ACTIONS(88), 1,
      aux_sym__condition_inner_token1,
    ACTIONS(91), 1,
      anon_sym_LBRACE_DOLLAR,
    STATE(38), 1,
      sym_condition,
    STATE(9), 3,
      sym_condition_bool,
      aux_sym__condition_inner,
      sym_constant,
    ACTIONS(80), 4,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_AND,
      anon_sym_OR,
  [315] = 7,
    ACTIONS(96), 1,
      anon_sym_LBRACK,
    ACTIONS(98), 1,
      anon_sym_RBRACK,
    ACTIONS(100), 1,
      aux_sym__condition_inner_token1,
    ACTIONS(102), 1,
      anon_sym_LBRACE_DOLLAR,
    STATE(38), 1,
      sym_condition,
    STATE(9), 3,
      sym_condition_bool,
      aux_sym__condition_inner,
      sym_constant,
    ACTIONS(94), 4,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_AND,
      anon_sym_OR,
  [342] = 2,
    ACTIONS(106), 1,
      anon_sym_LBRACK,
    ACTIONS(104), 11,
      ts_builtin_sym_end,
      aux_sym__block_item_token1,
      anon_sym_GT,
      anon_sym_LT,
      aux_sym_condition_else_token1,
      aux_sym_condition_end_token1,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
      sym_single_line_comment,
      anon_sym_ATimport,
  [359] = 7,
    ACTIONS(96), 1,
      anon_sym_LBRACK,
    ACTIONS(100), 1,
      aux_sym__condition_inner_token1,
    ACTIONS(102), 1,
      anon_sym_LBRACE_DOLLAR,
    ACTIONS(108), 1,
      anon_sym_RBRACK,
    STATE(38), 1,
      sym_condition,
    STATE(9), 3,
      sym_condition_bool,
      aux_sym__condition_inner,
      sym_constant,
    ACTIONS(94), 4,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_AND,
      anon_sym_OR,
  [386] = 2,
    ACTIONS(112), 1,
      anon_sym_LBRACK,
    ACTIONS(110), 11,
      ts_builtin_sym_end,
      aux_sym__block_item_token1,
      anon_sym_GT,
      anon_sym_LT,
      aux_sym_condition_else_token1,
      aux_sym_condition_end_token1,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
      sym_single_line_comment,
      anon_sym_ATimport,
  [403] = 2,
    ACTIONS(116), 1,
      anon_sym_LBRACK,
    ACTIONS(114), 10,
      ts_builtin_sym_end,
      aux_sym__block_item_token1,
      anon_sym_LT,
      aux_sym_condition_else_token1,
      aux_sym_condition_end_token1,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
      sym_single_line_comment,
      anon_sym_ATimport,
  [419] = 2,
    ACTIONS(120), 1,
      anon_sym_LBRACK,
    ACTIONS(118), 10,
      ts_builtin_sym_end,
      aux_sym__block_item_token1,
      anon_sym_LT,
      aux_sym_condition_else_token1,
      aux_sym_condition_end_token1,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
      sym_single_line_comment,
      anon_sym_ATimport,
  [435] = 2,
    ACTIONS(124), 1,
      anon_sym_LBRACK,
    ACTIONS(122), 10,
      ts_builtin_sym_end,
      aux_sym__block_item_token1,
      anon_sym_LT,
      aux_sym_condition_else_token1,
      aux_sym_condition_end_token1,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
      sym_single_line_comment,
      anon_sym_ATimport,
  [451] = 2,
    ACTIONS(128), 1,
      anon_sym_LBRACK,
    ACTIONS(126), 10,
      ts_builtin_sym_end,
      aux_sym__block_item_token1,
      anon_sym_LT,
      aux_sym_condition_else_token1,
      aux_sym_condition_end_token1,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
      sym_single_line_comment,
      anon_sym_ATimport,
  [467] = 6,
    ACTIONS(96), 1,
      anon_sym_LBRACK,
    ACTIONS(102), 1,
      anon_sym_LBRACE_DOLLAR,
    ACTIONS(130), 1,
      aux_sym__condition_inner_token1,
    STATE(38), 1,
      sym_condition,
    STATE(10), 3,
      sym_condition_bool,
      aux_sym__condition_inner,
      sym_constant,
    ACTIONS(94), 4,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_AND,
      anon_sym_OR,
  [491] = 2,
    ACTIONS(134), 1,
      anon_sym_LBRACK,
    ACTIONS(132), 10,
      ts_builtin_sym_end,
      aux_sym__block_item_token1,
      anon_sym_LT,
      aux_sym_condition_else_token1,
      aux_sym_condition_end_token1,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
      sym_single_line_comment,
      anon_sym_ATimport,
  [507] = 2,
    ACTIONS(138), 1,
      anon_sym_LBRACK,
    ACTIONS(136), 10,
      ts_builtin_sym_end,
      aux_sym__block_item_token1,
      anon_sym_LT,
      aux_sym_condition_else_token1,
      aux_sym_condition_end_token1,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
      sym_single_line_comment,
      anon_sym_ATimport,
  [523] = 2,
    ACTIONS(142), 1,
      anon_sym_LBRACK,
    ACTIONS(140), 10,
      ts_builtin_sym_end,
      aux_sym__block_item_token1,
      anon_sym_LT,
      aux_sym_condition_else_token1,
      aux_sym_condition_end_token1,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
      sym_single_line_comment,
      anon_sym_ATimport,
  [539] = 2,
    ACTIONS(146), 1,
      anon_sym_LBRACK,
    ACTIONS(144), 10,
      ts_builtin_sym_end,
      aux_sym__block_item_token1,
      anon_sym_LT,
      aux_sym_condition_else_token1,
      aux_sym_condition_end_token1,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
      sym_single_line_comment,
      anon_sym_ATimport,
  [555] = 2,
    ACTIONS(150), 1,
      anon_sym_LBRACK,
    ACTIONS(148), 10,
      ts_builtin_sym_end,
      aux_sym__block_item_token1,
      anon_sym_LT,
      aux_sym_condition_else_token1,
      aux_sym_condition_end_token1,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
      sym_single_line_comment,
      anon_sym_ATimport,
  [571] = 2,
    ACTIONS(154), 1,
      anon_sym_LBRACK,
    ACTIONS(152), 10,
      ts_builtin_sym_end,
      aux_sym__block_item_token1,
      anon_sym_LT,
      aux_sym_condition_else_token1,
      aux_sym_condition_end_token1,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
      sym_single_line_comment,
      anon_sym_ATimport,
  [587] = 2,
    ACTIONS(158), 1,
      anon_sym_LBRACK,
    ACTIONS(156), 10,
      ts_builtin_sym_end,
      aux_sym__block_item_token1,
      anon_sym_LT,
      aux_sym_condition_else_token1,
      aux_sym_condition_end_token1,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
      sym_single_line_comment,
      anon_sym_ATimport,
  [603] = 2,
    ACTIONS(162), 1,
      anon_sym_LBRACK,
    ACTIONS(160), 10,
      ts_builtin_sym_end,
      aux_sym__block_item_token1,
      anon_sym_LT,
      aux_sym_condition_else_token1,
      aux_sym_condition_end_token1,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
      sym_single_line_comment,
      anon_sym_ATimport,
  [619] = 2,
    ACTIONS(166), 1,
      anon_sym_LBRACK,
    ACTIONS(164), 10,
      ts_builtin_sym_end,
      aux_sym__block_item_token1,
      anon_sym_LT,
      aux_sym_condition_else_token1,
      aux_sym_condition_end_token1,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
      sym_single_line_comment,
      anon_sym_ATimport,
  [635] = 2,
    ACTIONS(170), 1,
      anon_sym_LBRACK,
    ACTIONS(168), 10,
      ts_builtin_sym_end,
      aux_sym__block_item_token1,
      anon_sym_LT,
      aux_sym_condition_else_token1,
      aux_sym_condition_end_token1,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
      sym_single_line_comment,
      anon_sym_ATimport,
  [651] = 2,
    ACTIONS(174), 1,
      anon_sym_LBRACK,
    ACTIONS(172), 10,
      ts_builtin_sym_end,
      aux_sym__block_item_token1,
      anon_sym_LT,
      aux_sym_condition_else_token1,
      aux_sym_condition_end_token1,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
      sym_single_line_comment,
      anon_sym_ATimport,
  [667] = 2,
    ACTIONS(178), 1,
      anon_sym_LBRACK,
    ACTIONS(176), 10,
      ts_builtin_sym_end,
      aux_sym__block_item_token1,
      anon_sym_LT,
      aux_sym_condition_else_token1,
      aux_sym_condition_end_token1,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
      sym_single_line_comment,
      anon_sym_ATimport,
  [683] = 2,
    ACTIONS(182), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 10,
      ts_builtin_sym_end,
      aux_sym__block_item_token1,
      anon_sym_LT,
      aux_sym_condition_else_token1,
      aux_sym_condition_end_token1,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
      sym_single_line_comment,
      anon_sym_ATimport,
  [699] = 6,
    ACTIONS(96), 1,
      anon_sym_LBRACK,
    ACTIONS(102), 1,
      anon_sym_LBRACE_DOLLAR,
    ACTIONS(184), 1,
      aux_sym__condition_inner_token1,
    STATE(38), 1,
      sym_condition,
    STATE(12), 3,
      sym_condition_bool,
      aux_sym__condition_inner,
      sym_constant,
    ACTIONS(94), 4,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_AND,
      anon_sym_OR,
  [723] = 2,
    ACTIONS(188), 1,
      anon_sym_LBRACK,
    ACTIONS(186), 9,
      ts_builtin_sym_end,
      aux_sym__block_item_token1,
      anon_sym_LT,
      aux_sym_condition_else_token1,
      aux_sym_condition_end_token1,
      sym_identifier,
      sym_comment,
      sym_single_line_comment,
      anon_sym_ATimport,
  [738] = 2,
    ACTIONS(192), 1,
      anon_sym_LBRACK,
    ACTIONS(190), 9,
      ts_builtin_sym_end,
      aux_sym__block_item_token1,
      anon_sym_LT,
      aux_sym_condition_else_token1,
      aux_sym_condition_end_token1,
      sym_identifier,
      sym_comment,
      sym_single_line_comment,
      anon_sym_ATimport,
  [753] = 2,
    ACTIONS(196), 1,
      anon_sym_LBRACK,
    ACTIONS(194), 9,
      ts_builtin_sym_end,
      aux_sym__block_item_token1,
      anon_sym_LT,
      aux_sym_condition_else_token1,
      aux_sym_condition_end_token1,
      sym_identifier,
      sym_comment,
      sym_single_line_comment,
      anon_sym_ATimport,
  [768] = 9,
    ACTIONS(198), 1,
      anon_sym_EQ,
    ACTIONS(200), 1,
      anon_sym_GT,
    ACTIONS(202), 1,
      anon_sym_LT,
    ACTIONS(204), 1,
      aux_sym_reference_line_token1,
    ACTIONS(206), 1,
      anon_sym_COLON_EQ,
    ACTIONS(208), 1,
      anon_sym_LBRACE,
    ACTIONS(210), 1,
      anon_sym_LPAREN,
    STATE(27), 1,
      sym_block,
    STATE(120), 1,
      sym_multiline_value,
  [796] = 3,
    STATE(74), 1,
      sym_condition_bool,
    ACTIONS(212), 4,
      anon_sym_LF,
      anon_sym_LBRACK,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(214), 4,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_AND,
      anon_sym_OR,
  [812] = 1,
    ACTIONS(216), 8,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym__condition_inner_token1,
      anon_sym_LBRACE_DOLLAR,
  [823] = 7,
    ACTIONS(218), 1,
      anon_sym_LBRACE_DOLLAR,
    ACTIONS(220), 1,
      anon_sym_LPAREN,
    ACTIONS(222), 1,
      anon_sym_RPAREN,
    ACTIONS(224), 1,
      aux_sym_modifier_parameter_token1,
    STATE(51), 1,
      sym_modifier_parameters,
    STATE(85), 1,
      sym_modifier_parameter,
    STATE(42), 2,
      sym_constant,
      aux_sym_modifier_parameter_repeat1,
  [846] = 1,
    ACTIONS(226), 8,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym__condition_inner_token1,
      anon_sym_LBRACE_DOLLAR,
  [857] = 6,
    ACTIONS(228), 1,
      anon_sym_LBRACE_DOLLAR,
    ACTIONS(231), 1,
      anon_sym_LPAREN,
    ACTIONS(236), 1,
      aux_sym_modifier_parameter_token1,
    STATE(51), 1,
      sym_modifier_parameters,
    ACTIONS(234), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    STATE(41), 2,
      sym_constant,
      aux_sym_modifier_parameter_repeat1,
  [878] = 6,
    ACTIONS(218), 1,
      anon_sym_LBRACE_DOLLAR,
    ACTIONS(220), 1,
      anon_sym_LPAREN,
    ACTIONS(241), 1,
      aux_sym_modifier_parameter_token1,
    STATE(51), 1,
      sym_modifier_parameters,
    ACTIONS(239), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    STATE(41), 2,
      sym_constant,
      aux_sym_modifier_parameter_repeat1,
  [899] = 6,
    ACTIONS(243), 1,
      anon_sym_LF,
    ACTIONS(245), 1,
      anon_sym_LBRACK,
    STATE(37), 1,
      sym_condition,
    STATE(111), 1,
      sym__comments,
    ACTIONS(247), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(50), 2,
      sym__condition_segment,
      aux_sym__condition_line_repeat1,
  [920] = 1,
    ACTIONS(249), 8,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym__condition_inner_token1,
      anon_sym_LBRACE_DOLLAR,
  [931] = 1,
    ACTIONS(251), 8,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym__condition_inner_token1,
      anon_sym_LBRACE_DOLLAR,
  [942] = 7,
    ACTIONS(218), 1,
      anon_sym_LBRACE_DOLLAR,
    ACTIONS(220), 1,
      anon_sym_LPAREN,
    ACTIONS(224), 1,
      aux_sym_modifier_parameter_token1,
    ACTIONS(253), 1,
      anon_sym_RPAREN,
    STATE(51), 1,
      sym_modifier_parameters,
    STATE(84), 1,
      sym_modifier_parameter,
    STATE(42), 2,
      sym_constant,
      aux_sym_modifier_parameter_repeat1,
  [965] = 1,
    ACTIONS(255), 8,
      anon_sym_LF,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LBRACK,
      sym_comment,
      sym_single_line_comment,
  [976] = 6,
    ACTIONS(257), 1,
      anon_sym_LF,
    ACTIONS(259), 1,
      anon_sym_LBRACE_DOLLAR,
    ACTIONS(261), 1,
      aux_sym_value_token1,
    ACTIONS(263), 1,
      sym_cobject,
    STATE(117), 1,
      sym_value,
    STATE(56), 2,
      sym_constant,
      aux_sym_value_repeat1,
  [996] = 6,
    ACTIONS(218), 1,
      anon_sym_LBRACE_DOLLAR,
    ACTIONS(220), 1,
      anon_sym_LPAREN,
    ACTIONS(224), 1,
      aux_sym_modifier_parameter_token1,
    STATE(51), 1,
      sym_modifier_parameters,
    STATE(94), 1,
      sym_modifier_parameter,
    STATE(42), 2,
      sym_constant,
      aux_sym_modifier_parameter_repeat1,
  [1016] = 4,
    ACTIONS(267), 1,
      anon_sym_LBRACK,
    STATE(37), 1,
      sym_condition,
    STATE(50), 2,
      sym__condition_segment,
      aux_sym__condition_line_repeat1,
    ACTIONS(265), 3,
      anon_sym_LF,
      sym_comment,
      sym_single_line_comment,
  [1032] = 1,
    ACTIONS(270), 5,
      anon_sym_LBRACE_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_modifier_parameter_token1,
  [1040] = 4,
    ACTIONS(272), 1,
      anon_sym_LBRACE_DOLLAR,
    ACTIONS(275), 1,
      anon_sym_DQUOTE,
    ACTIONS(277), 1,
      aux_sym_string_token1,
    STATE(52), 2,
      sym_constant,
      aux_sym_string_repeat1,
  [1054] = 4,
    ACTIONS(280), 1,
      anon_sym_LBRACE_DOLLAR,
    ACTIONS(282), 1,
      anon_sym_SQUOTE,
    ACTIONS(284), 1,
      aux_sym_string_token2,
    STATE(59), 2,
      sym_constant,
      aux_sym_string_repeat2,
  [1068] = 4,
    ACTIONS(282), 1,
      anon_sym_DQUOTE,
    ACTIONS(286), 1,
      anon_sym_LBRACE_DOLLAR,
    ACTIONS(288), 1,
      aux_sym_string_token1,
    STATE(52), 2,
      sym_constant,
      aux_sym_string_repeat1,
  [1082] = 4,
    ACTIONS(280), 1,
      anon_sym_LBRACE_DOLLAR,
    ACTIONS(290), 1,
      anon_sym_SQUOTE,
    ACTIONS(292), 1,
      aux_sym_string_token2,
    STATE(53), 2,
      sym_constant,
      aux_sym_string_repeat2,
  [1096] = 4,
    ACTIONS(259), 1,
      anon_sym_LBRACE_DOLLAR,
    ACTIONS(294), 1,
      anon_sym_LF,
    ACTIONS(296), 1,
      aux_sym_value_token1,
    STATE(66), 2,
      sym_constant,
      aux_sym_value_repeat1,
  [1110] = 4,
    ACTIONS(286), 1,
      anon_sym_LBRACE_DOLLAR,
    ACTIONS(290), 1,
      anon_sym_DQUOTE,
    ACTIONS(298), 1,
      aux_sym_string_token1,
    STATE(54), 2,
      sym_constant,
      aux_sym_string_repeat1,
  [1124] = 4,
    ACTIONS(286), 1,
      anon_sym_LBRACE_DOLLAR,
    ACTIONS(300), 1,
      anon_sym_DQUOTE,
    ACTIONS(302), 1,
      aux_sym_string_token1,
    STATE(63), 2,
      sym_constant,
      aux_sym_string_repeat1,
  [1138] = 4,
    ACTIONS(304), 1,
      anon_sym_LBRACE_DOLLAR,
    ACTIONS(307), 1,
      anon_sym_SQUOTE,
    ACTIONS(309), 1,
      aux_sym_string_token2,
    STATE(59), 2,
      sym_constant,
      aux_sym_string_repeat2,
  [1152] = 1,
    ACTIONS(249), 5,
      anon_sym_LBRACE_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_modifier_parameter_token1,
  [1160] = 1,
    ACTIONS(312), 5,
      anon_sym_LBRACE_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_modifier_parameter_token1,
  [1168] = 4,
    ACTIONS(314), 1,
      anon_sym_LBRACE_DOLLAR,
    ACTIONS(316), 1,
      aux_sym_multiline_value_token1,
    ACTIONS(318), 1,
      anon_sym_RPAREN,
    STATE(70), 2,
      sym_constant,
      aux_sym_multiline_value_repeat1,
  [1182] = 4,
    ACTIONS(286), 1,
      anon_sym_LBRACE_DOLLAR,
    ACTIONS(288), 1,
      aux_sym_string_token1,
    ACTIONS(320), 1,
      anon_sym_DQUOTE,
    STATE(52), 2,
      sym_constant,
      aux_sym_string_repeat1,
  [1196] = 4,
    ACTIONS(280), 1,
      anon_sym_LBRACE_DOLLAR,
    ACTIONS(284), 1,
      aux_sym_string_token2,
    ACTIONS(320), 1,
      anon_sym_SQUOTE,
    STATE(59), 2,
      sym_constant,
      aux_sym_string_repeat2,
  [1210] = 1,
    ACTIONS(322), 5,
      anon_sym_LBRACE_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_modifier_parameter_token1,
  [1218] = 4,
    ACTIONS(324), 1,
      anon_sym_LF,
    ACTIONS(326), 1,
      anon_sym_LBRACE_DOLLAR,
    ACTIONS(329), 1,
      aux_sym_value_token1,
    STATE(66), 2,
      sym_constant,
      aux_sym_value_repeat1,
  [1232] = 1,
    ACTIONS(332), 5,
      anon_sym_LBRACE_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_modifier_parameter_token1,
  [1240] = 4,
    ACTIONS(314), 1,
      anon_sym_LBRACE_DOLLAR,
    ACTIONS(334), 1,
      aux_sym_multiline_value_token1,
    ACTIONS(336), 1,
      anon_sym_RPAREN,
    STATE(62), 2,
      sym_constant,
      aux_sym_multiline_value_repeat1,
  [1254] = 4,
    ACTIONS(280), 1,
      anon_sym_LBRACE_DOLLAR,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(338), 1,
      aux_sym_string_token2,
    STATE(64), 2,
      sym_constant,
      aux_sym_string_repeat2,
  [1268] = 4,
    ACTIONS(340), 1,
      anon_sym_LBRACE_DOLLAR,
    ACTIONS(343), 1,
      aux_sym_multiline_value_token1,
    ACTIONS(346), 1,
      anon_sym_RPAREN,
    STATE(70), 2,
      sym_constant,
      aux_sym_multiline_value_repeat1,
  [1282] = 3,
    ACTIONS(348), 1,
      anon_sym_LF,
    STATE(106), 1,
      sym__comments,
    ACTIONS(350), 2,
      sym_comment,
      sym_single_line_comment,
  [1293] = 1,
    ACTIONS(352), 4,
      anon_sym_LF,
      anon_sym_LBRACK,
      sym_comment,
      sym_single_line_comment,
  [1300] = 3,
    ACTIONS(243), 1,
      anon_sym_LF,
    STATE(111), 1,
      sym__comments,
    ACTIONS(247), 2,
      sym_comment,
      sym_single_line_comment,
  [1311] = 1,
    ACTIONS(354), 4,
      anon_sym_LF,
      anon_sym_LBRACK,
      sym_comment,
      sym_single_line_comment,
  [1318] = 3,
    ACTIONS(356), 1,
      anon_sym_LF,
    STATE(121), 1,
      sym__comments,
    ACTIONS(358), 2,
      sym_comment,
      sym_single_line_comment,
  [1329] = 3,
    ACTIONS(360), 1,
      anon_sym_LF,
    STATE(101), 1,
      sym__comments,
    ACTIONS(362), 2,
      sym_comment,
      sym_single_line_comment,
  [1340] = 3,
    ACTIONS(364), 1,
      anon_sym_LF,
    STATE(110), 1,
      sym__comments,
    ACTIONS(366), 2,
      sym_comment,
      sym_single_line_comment,
  [1351] = 1,
    ACTIONS(249), 3,
      anon_sym_LBRACE_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_string_token2,
  [1357] = 3,
    ACTIONS(368), 1,
      anon_sym_RPAREN,
    ACTIONS(370), 1,
      anon_sym_COMMA,
    STATE(89), 1,
      aux_sym_modifier_parameters_repeat1,
  [1367] = 1,
    ACTIONS(372), 3,
      anon_sym_LF,
      sym_comment,
      sym_single_line_comment,
  [1373] = 3,
    ACTIONS(370), 1,
      anon_sym_COMMA,
    ACTIONS(374), 1,
      anon_sym_RPAREN,
    STATE(89), 1,
      aux_sym_modifier_parameters_repeat1,
  [1383] = 3,
    ACTIONS(376), 1,
      anon_sym_DQUOTE,
    ACTIONS(378), 1,
      anon_sym_SQUOTE,
    STATE(98), 1,
      sym_string,
  [1393] = 1,
    ACTIONS(380), 3,
      anon_sym_LF,
      sym_comment,
      sym_single_line_comment,
  [1399] = 3,
    ACTIONS(370), 1,
      anon_sym_COMMA,
    ACTIONS(382), 1,
      anon_sym_RPAREN,
    STATE(79), 1,
      aux_sym_modifier_parameters_repeat1,
  [1409] = 3,
    ACTIONS(370), 1,
      anon_sym_COMMA,
    ACTIONS(384), 1,
      anon_sym_RPAREN,
    STATE(81), 1,
      aux_sym_modifier_parameters_repeat1,
  [1419] = 3,
    ACTIONS(386), 1,
      anon_sym_DQUOTE,
    ACTIONS(388), 1,
      anon_sym_SQUOTE,
    STATE(104), 1,
      sym_string,
  [1429] = 1,
    ACTIONS(390), 3,
      anon_sym_LF,
      sym_comment,
      sym_single_line_comment,
  [1435] = 1,
    ACTIONS(249), 3,
      anon_sym_LF,
      anon_sym_LBRACE_DOLLAR,
      aux_sym_value_token1,
  [1441] = 3,
    ACTIONS(392), 1,
      anon_sym_RPAREN,
    ACTIONS(394), 1,
      anon_sym_COMMA,
    STATE(89), 1,
      aux_sym_modifier_parameters_repeat1,
  [1451] = 1,
    ACTIONS(249), 3,
      anon_sym_LBRACE_DOLLAR,
      anon_sym_DQUOTE,
      aux_sym_string_token1,
  [1457] = 1,
    ACTIONS(249), 3,
      anon_sym_LBRACE_DOLLAR,
      aux_sym_multiline_value_token1,
      anon_sym_RPAREN,
  [1463] = 3,
    ACTIONS(386), 1,
      anon_sym_DQUOTE,
    ACTIONS(388), 1,
      anon_sym_SQUOTE,
    STATE(31), 1,
      sym_string,
  [1473] = 1,
    ACTIONS(397), 3,
      anon_sym_LF,
      sym_comment,
      sym_single_line_comment,
  [1479] = 1,
    ACTIONS(392), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1484] = 2,
    ACTIONS(110), 1,
      aux_sym_import_legacy_token2,
    ACTIONS(112), 1,
      anon_sym_GT,
  [1491] = 1,
    ACTIONS(399), 2,
      sym_modifier_predefined,
      sym_modifier_function,
  [1496] = 2,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    STATE(75), 1,
      sym_modifier_parameters,
  [1503] = 2,
    ACTIONS(403), 1,
      anon_sym_GT,
    ACTIONS(405), 1,
      aux_sym_import_legacy_token2,
  [1510] = 2,
    ACTIONS(104), 1,
      aux_sym_import_legacy_token2,
    ACTIONS(106), 1,
      anon_sym_GT,
  [1517] = 1,
    ACTIONS(407), 1,
      ts_builtin_sym_end,
  [1521] = 1,
    ACTIONS(409), 1,
      anon_sym_LF,
  [1525] = 1,
    ACTIONS(411), 1,
      sym_identifier,
  [1529] = 1,
    ACTIONS(413), 1,
      anon_sym_LF,
  [1533] = 1,
    ACTIONS(415), 1,
      anon_sym_GT,
  [1537] = 1,
    ACTIONS(417), 1,
      anon_sym_EQ,
  [1541] = 1,
    ACTIONS(419), 1,
      anon_sym_LF,
  [1545] = 1,
    ACTIONS(421), 1,
      anon_sym_INCLUDE_TYPOSCRIPT,
  [1549] = 1,
    ACTIONS(423), 1,
      anon_sym_source_EQ,
  [1553] = 1,
    ACTIONS(425), 1,
      sym_modifier_function,
  [1557] = 1,
    ACTIONS(427), 1,
      anon_sym_LF,
  [1561] = 1,
    ACTIONS(429), 1,
      anon_sym_LF,
  [1565] = 1,
    ACTIONS(431), 1,
      anon_sym_LF,
  [1569] = 1,
    ACTIONS(433), 1,
      anon_sym_LF,
  [1573] = 1,
    ACTIONS(435), 1,
      aux_sym_import_legacy_token1,
  [1577] = 1,
    ACTIONS(437), 1,
      aux_sym_constant_token1,
  [1581] = 1,
    ACTIONS(439), 1,
      anon_sym_RBRACE,
  [1585] = 1,
    ACTIONS(441), 1,
      anon_sym_LF,
  [1589] = 1,
    ACTIONS(443), 1,
      anon_sym_RBRACE,
  [1593] = 1,
    ACTIONS(445), 1,
      sym_identifier,
  [1597] = 1,
    ACTIONS(447), 1,
      anon_sym_LF,
  [1601] = 1,
    ACTIONS(449), 1,
      anon_sym_LF,
  [1605] = 1,
    ACTIONS(451), 1,
      anon_sym_RBRACE,
  [1609] = 1,
    ACTIONS(453), 1,
      anon_sym_RBRACE,
  [1613] = 1,
    ACTIONS(455), 1,
      anon_sym_RBRACE,
  [1617] = 1,
    ACTIONS(457), 1,
      anon_sym_RBRACE,
  [1621] = 1,
    ACTIONS(459), 1,
      anon_sym_COLON,
  [1625] = 1,
    ACTIONS(461), 1,
      aux_sym_constant_token1,
  [1629] = 1,
    ACTIONS(463), 1,
      aux_sym_constant_token1,
  [1633] = 1,
    ACTIONS(465), 1,
      aux_sym_constant_token1,
  [1637] = 1,
    ACTIONS(467), 1,
      aux_sym_constant_token1,
  [1641] = 1,
    ACTIONS(469), 1,
      aux_sym_constant_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 56,
  [SMALL_STATE(4)] = 112,
  [SMALL_STATE(5)] = 150,
  [SMALL_STATE(6)] = 187,
  [SMALL_STATE(7)] = 224,
  [SMALL_STATE(8)] = 256,
  [SMALL_STATE(9)] = 288,
  [SMALL_STATE(10)] = 315,
  [SMALL_STATE(11)] = 342,
  [SMALL_STATE(12)] = 359,
  [SMALL_STATE(13)] = 386,
  [SMALL_STATE(14)] = 403,
  [SMALL_STATE(15)] = 419,
  [SMALL_STATE(16)] = 435,
  [SMALL_STATE(17)] = 451,
  [SMALL_STATE(18)] = 467,
  [SMALL_STATE(19)] = 491,
  [SMALL_STATE(20)] = 507,
  [SMALL_STATE(21)] = 523,
  [SMALL_STATE(22)] = 539,
  [SMALL_STATE(23)] = 555,
  [SMALL_STATE(24)] = 571,
  [SMALL_STATE(25)] = 587,
  [SMALL_STATE(26)] = 603,
  [SMALL_STATE(27)] = 619,
  [SMALL_STATE(28)] = 635,
  [SMALL_STATE(29)] = 651,
  [SMALL_STATE(30)] = 667,
  [SMALL_STATE(31)] = 683,
  [SMALL_STATE(32)] = 699,
  [SMALL_STATE(33)] = 723,
  [SMALL_STATE(34)] = 738,
  [SMALL_STATE(35)] = 753,
  [SMALL_STATE(36)] = 768,
  [SMALL_STATE(37)] = 796,
  [SMALL_STATE(38)] = 812,
  [SMALL_STATE(39)] = 823,
  [SMALL_STATE(40)] = 846,
  [SMALL_STATE(41)] = 857,
  [SMALL_STATE(42)] = 878,
  [SMALL_STATE(43)] = 899,
  [SMALL_STATE(44)] = 920,
  [SMALL_STATE(45)] = 931,
  [SMALL_STATE(46)] = 942,
  [SMALL_STATE(47)] = 965,
  [SMALL_STATE(48)] = 976,
  [SMALL_STATE(49)] = 996,
  [SMALL_STATE(50)] = 1016,
  [SMALL_STATE(51)] = 1032,
  [SMALL_STATE(52)] = 1040,
  [SMALL_STATE(53)] = 1054,
  [SMALL_STATE(54)] = 1068,
  [SMALL_STATE(55)] = 1082,
  [SMALL_STATE(56)] = 1096,
  [SMALL_STATE(57)] = 1110,
  [SMALL_STATE(58)] = 1124,
  [SMALL_STATE(59)] = 1138,
  [SMALL_STATE(60)] = 1152,
  [SMALL_STATE(61)] = 1160,
  [SMALL_STATE(62)] = 1168,
  [SMALL_STATE(63)] = 1182,
  [SMALL_STATE(64)] = 1196,
  [SMALL_STATE(65)] = 1210,
  [SMALL_STATE(66)] = 1218,
  [SMALL_STATE(67)] = 1232,
  [SMALL_STATE(68)] = 1240,
  [SMALL_STATE(69)] = 1254,
  [SMALL_STATE(70)] = 1268,
  [SMALL_STATE(71)] = 1282,
  [SMALL_STATE(72)] = 1293,
  [SMALL_STATE(73)] = 1300,
  [SMALL_STATE(74)] = 1311,
  [SMALL_STATE(75)] = 1318,
  [SMALL_STATE(76)] = 1329,
  [SMALL_STATE(77)] = 1340,
  [SMALL_STATE(78)] = 1351,
  [SMALL_STATE(79)] = 1357,
  [SMALL_STATE(80)] = 1367,
  [SMALL_STATE(81)] = 1373,
  [SMALL_STATE(82)] = 1383,
  [SMALL_STATE(83)] = 1393,
  [SMALL_STATE(84)] = 1399,
  [SMALL_STATE(85)] = 1409,
  [SMALL_STATE(86)] = 1419,
  [SMALL_STATE(87)] = 1429,
  [SMALL_STATE(88)] = 1435,
  [SMALL_STATE(89)] = 1441,
  [SMALL_STATE(90)] = 1451,
  [SMALL_STATE(91)] = 1457,
  [SMALL_STATE(92)] = 1463,
  [SMALL_STATE(93)] = 1473,
  [SMALL_STATE(94)] = 1479,
  [SMALL_STATE(95)] = 1484,
  [SMALL_STATE(96)] = 1491,
  [SMALL_STATE(97)] = 1496,
  [SMALL_STATE(98)] = 1503,
  [SMALL_STATE(99)] = 1510,
  [SMALL_STATE(100)] = 1517,
  [SMALL_STATE(101)] = 1521,
  [SMALL_STATE(102)] = 1525,
  [SMALL_STATE(103)] = 1529,
  [SMALL_STATE(104)] = 1533,
  [SMALL_STATE(105)] = 1537,
  [SMALL_STATE(106)] = 1541,
  [SMALL_STATE(107)] = 1545,
  [SMALL_STATE(108)] = 1549,
  [SMALL_STATE(109)] = 1553,
  [SMALL_STATE(110)] = 1557,
  [SMALL_STATE(111)] = 1561,
  [SMALL_STATE(112)] = 1565,
  [SMALL_STATE(113)] = 1569,
  [SMALL_STATE(114)] = 1573,
  [SMALL_STATE(115)] = 1577,
  [SMALL_STATE(116)] = 1581,
  [SMALL_STATE(117)] = 1585,
  [SMALL_STATE(118)] = 1589,
  [SMALL_STATE(119)] = 1593,
  [SMALL_STATE(120)] = 1597,
  [SMALL_STATE(121)] = 1601,
  [SMALL_STATE(122)] = 1605,
  [SMALL_STATE(123)] = 1609,
  [SMALL_STATE(124)] = 1613,
  [SMALL_STATE(125)] = 1617,
  [SMALL_STATE(126)] = 1621,
  [SMALL_STATE(127)] = 1625,
  [SMALL_STATE(128)] = 1629,
  [SMALL_STATE(129)] = 1633,
  [SMALL_STATE(130)] = 1637,
  [SMALL_STATE(131)] = 1641,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typoscript, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_typoscript_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_typoscript_repeat1, 2), SHIFT_REPEAT(2),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_typoscript_repeat1, 2), SHIFT_REPEAT(107),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_typoscript_repeat1, 2), SHIFT_REPEAT(32),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_typoscript_repeat1, 2), SHIFT_REPEAT(80),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_typoscript_repeat1, 2), SHIFT_REPEAT(113),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_typoscript_repeat1, 2), SHIFT_REPEAT(36),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_typoscript_repeat1, 2), SHIFT_REPEAT(92),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typoscript, 1),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_condition_block_repeat1, 2),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_condition_block_repeat1, 2), SHIFT_REPEAT(4),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_condition_block_repeat1, 2), SHIFT_REPEAT(107),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_condition_block_repeat1, 2),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_condition_block_repeat1, 2), SHIFT_REPEAT(36),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_condition_block_repeat1, 2), SHIFT_REPEAT(92),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition_block, 2),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition_block, 2),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition_block, 1),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition_block, 1),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__condition_inner, 2), SHIFT_REPEAT(45),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__condition_inner, 2), SHIFT_REPEAT(18),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__condition_inner, 2),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__condition_inner, 2), SHIFT_REPEAT(9),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__condition_inner, 2), SHIFT_REPEAT(115),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_line, 4, .production_id = 3),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_copy_line, 4, .production_id = 3),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, .production_id = 5),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, .production_id = 5),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_line, 4, .production_id = 4),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference_line, 4, .production_id = 4),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deletion_line, 4),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deletion_line, 4),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_line, 5, .production_id = 3),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_copy_line, 5, .production_id = 3),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deletion_line, 3),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deletion_line, 3),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_line, 5, .production_id = 4),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference_line, 5, .production_id = 4),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modification_line, 5),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modification_line, 5),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_line, 4),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_line, 4),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_line, 3),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_line, 3),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modification_line, 6),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modification_line, 6),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_legacy, 7),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_legacy, 7),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_configuration_block, 2),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_configuration_block, 2),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_legacy, 11, .production_id = 7),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_legacy, 11, .production_id = 7),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_line, 3),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_line, 3),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, .production_id = 2),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2, .production_id = 2),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 2),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 2),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__condition_line, 2),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__condition_line, 2),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition_end, 2),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition_end, 2),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__condition_line, 3),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__condition_line, 3),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__condition_segment, 1),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__condition_inner, 1, .production_id = 1),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 3),
  [228] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_modifier_parameter_repeat1, 2), SHIFT_REPEAT(131),
  [231] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_modifier_parameter_repeat1, 2), SHIFT_REPEAT(39),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_modifier_parameter_repeat1, 2),
  [236] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_modifier_parameter_repeat1, 2), SHIFT_REPEAT(41),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifier_parameter, 1),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 3),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition_bool, 1),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 3),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__condition_line_repeat1, 2),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__condition_line_repeat1, 2), SHIFT_REPEAT(32),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_modifier_parameter_repeat1, 1, .production_id = 6),
  [272] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(129),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [277] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(52),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [304] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(130),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2),
  [309] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(59),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifier_parameters, 4),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifier_parameters, 3),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2),
  [326] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(127),
  [329] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(66),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifier_parameters, 2),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [340] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_value_repeat1, 2), SHIFT_REPEAT(128),
  [343] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_value_repeat1, 2), SHIFT_REPEAT(70),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_value_repeat1, 2),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition_bool, 1),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__condition_segment, 2),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition_else, 1),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier_parameters, 2),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier_parameters, 3),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_modifier_parameters_repeat1, 2),
  [394] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_modifier_parameters_repeat1, 2), SHIFT_REPEAT(49),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier_parameters, 4),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [407] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_value, 3),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_value, 2),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_typoscript(void) {
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

#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 133
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 88
#define ALIAS_COUNT 0
#define TOKEN_COUNT 50
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 11
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 13

enum ts_symbol_identifiers {
  sym__name = 1,
  anon_sym_GT_LPAREN = 2,
  anon_sym_RPAREN = 3,
  anon_sym_LPAREN = 4,
  anon_sym_RPAREN_LT = 5,
  anon_sym_TILDE = 6,
  anon_sym_LT_TILDE = 7,
  anon_sym_U0001f991 = 8,
  anon_sym_GT_LT_BSLASH_SLASH_GT = 9,
  anon_sym_LT_BSLASH_SLASH_GT_LT = 10,
  anon_sym_GT_LT_GT = 11,
  anon_sym_LT_GT_LT = 12,
  anon_sym_LPAREN_PLUSo = 13,
  anon_sym_o_PLUS_RPAREN = 14,
  anon_sym_GT_LT = 15,
  anon_sym_LPAREN_LPAREN_LPAREN = 16,
  anon_sym_AT = 17,
  anon_sym_GT = 18,
  anon_sym_CARET = 19,
  anon_sym_STAR = 20,
  anon_sym_POUND_POUND_POUND = 21,
  anon_sym_LT = 22,
  anon_sym_u2248 = 23,
  anon_sym_EQ = 24,
  anon_sym_LBRACK = 25,
  anon_sym_RBRACK = 26,
  aux_sym_positive_literal_token1 = 27,
  sym_one = 28,
  sym_zero = 29,
  anon_sym_LT3 = 30,
  anon_sym_u2661 = 31,
  anon_sym_LT_SLASH3 = 32,
  anon_sym_U0001f494 = 33,
  anon_sym_LT_LT = 34,
  anon_sym_GT_GT = 35,
  anon_sym_AMP = 36,
  anon_sym_PIPE = 37,
  anon_sym_EQ_EQ = 38,
  anon_sym_u2248u2248 = 39,
  anon_sym_TILDE_EQ = 40,
  anon_sym_TILDEu2248 = 41,
  anon_sym_o_TILDE = 42,
  anon_sym_TILDEo = 43,
  anon_sym_o_TILDE_EQ = 44,
  anon_sym_o_TILDEu2248 = 45,
  anon_sym_TILDEo_EQ = 46,
  anon_sym_TILDEou2248 = 47,
  sym_comment = 48,
  sym_multiline_comment = 49,
  sym_source_file = 50,
  sym_subroutine = 51,
  sym_right_sub = 52,
  sym_left_sub = 53,
  sym__statement = 54,
  sym__simple_statement = 55,
  sym__statement_list = 56,
  sym_return_statement = 57,
  sym_break_statement = 58,
  sym_block = 59,
  sym_anchor_statement = 60,
  sym_loopy_fysh = 61,
  sym_happy_fysh = 62,
  sym_dead_fysh = 63,
  sym_grilled_fysh = 64,
  sym_loop_statement = 65,
  sym_if_statement = 66,
  sym_expression_statement = 67,
  sym_inc_statement = 68,
  sym_dec_statement = 69,
  sym_assignment_statement = 70,
  sym__expression = 71,
  sym_fysh_tank = 72,
  sym_fysh_bowl = 73,
  sym_positive_ident = 74,
  sym_positive_literal = 75,
  sym_negative_ident = 76,
  sym_negative_literal = 77,
  sym_scales = 78,
  sym_binary_expression = 79,
  sym_call_expression = 80,
  sym_addition = 81,
  aux_sym_source_file_repeat1 = 82,
  aux_sym_subroutine_repeat1 = 83,
  aux_sym__statement_list_repeat1 = 84,
  aux_sym_positive_literal_repeat1 = 85,
  aux_sym_scales_repeat1 = 86,
  aux_sym_call_expression_repeat1 = 87,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__name] = "_name",
  [anon_sym_GT_LPAREN] = ">(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN_LT] = ")<",
  [anon_sym_TILDE] = "~",
  [anon_sym_LT_TILDE] = "<~",
  [anon_sym_U0001f991] = "\U0001f991",
  [anon_sym_GT_LT_BSLASH_SLASH_GT] = "><\\/>",
  [anon_sym_LT_BSLASH_SLASH_GT_LT] = "<\\/><",
  [anon_sym_GT_LT_GT] = "><>",
  [anon_sym_LT_GT_LT] = "<><",
  [anon_sym_LPAREN_PLUSo] = "(+o",
  [anon_sym_o_PLUS_RPAREN] = "o+)",
  [anon_sym_GT_LT] = "><",
  [anon_sym_LPAREN_LPAREN_LPAREN] = "(((",
  [anon_sym_AT] = "@",
  [anon_sym_GT] = ">",
  [anon_sym_CARET] = "^",
  [anon_sym_STAR] = "*",
  [anon_sym_POUND_POUND_POUND] = "###",
  [anon_sym_LT] = "<",
  [anon_sym_u2248] = "\u2248",
  [anon_sym_EQ] = "=",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [aux_sym_positive_literal_token1] = "positive_literal_token1",
  [sym_one] = "one",
  [sym_zero] = "zero",
  [anon_sym_LT3] = "<3",
  [anon_sym_u2661] = "\u2661",
  [anon_sym_LT_SLASH3] = "</3",
  [anon_sym_U0001f494] = "\U0001f494",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_AMP] = "&",
  [anon_sym_PIPE] = "|",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_u2248u2248] = "\u2248\u2248",
  [anon_sym_TILDE_EQ] = "~=",
  [anon_sym_TILDEu2248] = "~\u2248",
  [anon_sym_o_TILDE] = "o~",
  [anon_sym_TILDEo] = "~o",
  [anon_sym_o_TILDE_EQ] = "o~=",
  [anon_sym_o_TILDEu2248] = "o~\u2248",
  [anon_sym_TILDEo_EQ] = "~o=",
  [anon_sym_TILDEou2248] = "~o\u2248",
  [sym_comment] = "comment",
  [sym_multiline_comment] = "multiline_comment",
  [sym_source_file] = "source_file",
  [sym_subroutine] = "subroutine",
  [sym_right_sub] = "right_sub",
  [sym_left_sub] = "left_sub",
  [sym__statement] = "_statement",
  [sym__simple_statement] = "_simple_statement",
  [sym__statement_list] = "_statement_list",
  [sym_return_statement] = "return_statement",
  [sym_break_statement] = "break_statement",
  [sym_block] = "block",
  [sym_anchor_statement] = "anchor_statement",
  [sym_loopy_fysh] = "loopy_fysh",
  [sym_happy_fysh] = "happy_fysh",
  [sym_dead_fysh] = "dead_fysh",
  [sym_grilled_fysh] = "grilled_fysh",
  [sym_loop_statement] = "loop_statement",
  [sym_if_statement] = "if_statement",
  [sym_expression_statement] = "expression_statement",
  [sym_inc_statement] = "inc_statement",
  [sym_dec_statement] = "dec_statement",
  [sym_assignment_statement] = "assignment_statement",
  [sym__expression] = "_expression",
  [sym_fysh_tank] = "fysh_tank",
  [sym_fysh_bowl] = "fysh_bowl",
  [sym_positive_ident] = "positive_ident",
  [sym_positive_literal] = "positive_literal",
  [sym_negative_ident] = "negative_ident",
  [sym_negative_literal] = "negative_literal",
  [sym_scales] = "scales",
  [sym_binary_expression] = "binary_expression",
  [sym_call_expression] = "call_expression",
  [sym_addition] = "addition",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_subroutine_repeat1] = "subroutine_repeat1",
  [aux_sym__statement_list_repeat1] = "_statement_list_repeat1",
  [aux_sym_positive_literal_repeat1] = "positive_literal_repeat1",
  [aux_sym_scales_repeat1] = "scales_repeat1",
  [aux_sym_call_expression_repeat1] = "call_expression_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__name] = sym__name,
  [anon_sym_GT_LPAREN] = anon_sym_GT_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN_LT] = anon_sym_RPAREN_LT,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_LT_TILDE] = anon_sym_LT_TILDE,
  [anon_sym_U0001f991] = anon_sym_U0001f991,
  [anon_sym_GT_LT_BSLASH_SLASH_GT] = anon_sym_GT_LT_BSLASH_SLASH_GT,
  [anon_sym_LT_BSLASH_SLASH_GT_LT] = anon_sym_LT_BSLASH_SLASH_GT_LT,
  [anon_sym_GT_LT_GT] = anon_sym_GT_LT_GT,
  [anon_sym_LT_GT_LT] = anon_sym_LT_GT_LT,
  [anon_sym_LPAREN_PLUSo] = anon_sym_LPAREN_PLUSo,
  [anon_sym_o_PLUS_RPAREN] = anon_sym_o_PLUS_RPAREN,
  [anon_sym_GT_LT] = anon_sym_GT_LT,
  [anon_sym_LPAREN_LPAREN_LPAREN] = anon_sym_LPAREN_LPAREN_LPAREN,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_POUND_POUND_POUND] = anon_sym_POUND_POUND_POUND,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_u2248] = anon_sym_u2248,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [aux_sym_positive_literal_token1] = aux_sym_positive_literal_token1,
  [sym_one] = sym_one,
  [sym_zero] = sym_zero,
  [anon_sym_LT3] = anon_sym_LT3,
  [anon_sym_u2661] = anon_sym_u2661,
  [anon_sym_LT_SLASH3] = anon_sym_LT_SLASH3,
  [anon_sym_U0001f494] = anon_sym_U0001f494,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_u2248u2248] = anon_sym_u2248u2248,
  [anon_sym_TILDE_EQ] = anon_sym_TILDE_EQ,
  [anon_sym_TILDEu2248] = anon_sym_TILDEu2248,
  [anon_sym_o_TILDE] = anon_sym_o_TILDE,
  [anon_sym_TILDEo] = anon_sym_TILDEo,
  [anon_sym_o_TILDE_EQ] = anon_sym_o_TILDE_EQ,
  [anon_sym_o_TILDEu2248] = anon_sym_o_TILDEu2248,
  [anon_sym_TILDEo_EQ] = anon_sym_TILDEo_EQ,
  [anon_sym_TILDEou2248] = anon_sym_TILDEou2248,
  [sym_comment] = sym_comment,
  [sym_multiline_comment] = sym_multiline_comment,
  [sym_source_file] = sym_source_file,
  [sym_subroutine] = sym_subroutine,
  [sym_right_sub] = sym_right_sub,
  [sym_left_sub] = sym_left_sub,
  [sym__statement] = sym__statement,
  [sym__simple_statement] = sym__simple_statement,
  [sym__statement_list] = sym__statement_list,
  [sym_return_statement] = sym_return_statement,
  [sym_break_statement] = sym_break_statement,
  [sym_block] = sym_block,
  [sym_anchor_statement] = sym_anchor_statement,
  [sym_loopy_fysh] = sym_loopy_fysh,
  [sym_happy_fysh] = sym_happy_fysh,
  [sym_dead_fysh] = sym_dead_fysh,
  [sym_grilled_fysh] = sym_grilled_fysh,
  [sym_loop_statement] = sym_loop_statement,
  [sym_if_statement] = sym_if_statement,
  [sym_expression_statement] = sym_expression_statement,
  [sym_inc_statement] = sym_inc_statement,
  [sym_dec_statement] = sym_dec_statement,
  [sym_assignment_statement] = sym_assignment_statement,
  [sym__expression] = sym__expression,
  [sym_fysh_tank] = sym_fysh_tank,
  [sym_fysh_bowl] = sym_fysh_bowl,
  [sym_positive_ident] = sym_positive_ident,
  [sym_positive_literal] = sym_positive_literal,
  [sym_negative_ident] = sym_negative_ident,
  [sym_negative_literal] = sym_negative_literal,
  [sym_scales] = sym_scales,
  [sym_binary_expression] = sym_binary_expression,
  [sym_call_expression] = sym_call_expression,
  [sym_addition] = sym_addition,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_subroutine_repeat1] = aux_sym_subroutine_repeat1,
  [aux_sym__statement_list_repeat1] = aux_sym__statement_list_repeat1,
  [aux_sym_positive_literal_repeat1] = aux_sym_positive_literal_repeat1,
  [aux_sym_scales_repeat1] = aux_sym_scales_repeat1,
  [aux_sym_call_expression_repeat1] = aux_sym_call_expression_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__name] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_GT_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_U0001f991] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_LT_BSLASH_SLASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_BSLASH_SLASH_GT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_LT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_GT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN_PLUSo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_o_PLUS_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN_LPAREN_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_POUND_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u2248] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
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
  [aux_sym_positive_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_one] = {
    .visible = true,
    .named = true,
  },
  [sym_zero] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u2661] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASH3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_U0001f494] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u2248u2248] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDEu2248] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_o_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDEo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_o_TILDE_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_o_TILDEu2248] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDEo_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDEou2248] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_multiline_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_subroutine] = {
    .visible = true,
    .named = true,
  },
  [sym_right_sub] = {
    .visible = true,
    .named = true,
  },
  [sym_left_sub] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym__simple_statement] = {
    .visible = false,
    .named = true,
  },
  [sym__statement_list] = {
    .visible = false,
    .named = true,
  },
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_break_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_anchor_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_loopy_fysh] = {
    .visible = true,
    .named = true,
  },
  [sym_happy_fysh] = {
    .visible = true,
    .named = true,
  },
  [sym_dead_fysh] = {
    .visible = true,
    .named = true,
  },
  [sym_grilled_fysh] = {
    .visible = true,
    .named = true,
  },
  [sym_loop_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_inc_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_dec_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_fysh_tank] = {
    .visible = true,
    .named = true,
  },
  [sym_fysh_bowl] = {
    .visible = true,
    .named = true,
  },
  [sym_positive_ident] = {
    .visible = true,
    .named = true,
  },
  [sym_positive_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_negative_ident] = {
    .visible = true,
    .named = true,
  },
  [sym_negative_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_scales] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_call_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_addition] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_subroutine_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__statement_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_positive_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_scales_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_call_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_body = 1,
  field_cond = 2,
  field_dir = 3,
  field_else = 4,
  field_left = 5,
  field_name = 6,
  field_operator = 7,
  field_params = 8,
  field_right = 9,
  field_then = 10,
  field_value = 11,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_cond] = "cond",
  [field_dir] = "dir",
  [field_else] = "else",
  [field_left] = "left",
  [field_name] = "name",
  [field_operator] = "operator",
  [field_params] = "params",
  [field_right] = "right",
  [field_then] = "then",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 1},
  [6] = {.index = 7, .length = 2},
  [7] = {.index = 9, .length = 2},
  [8] = {.index = 11, .length = 2},
  [9] = {.index = 13, .length = 3},
  [10] = {.index = 16, .length = 2},
  [11] = {.index = 18, .length = 1},
  [12] = {.index = 19, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_right, 1},
  [1] =
    {field_dir, 0},
    {field_value, 1},
  [3] =
    {field_body, 1},
  [4] =
    {field_left, 0},
    {field_right, 1},
  [6] =
    {field_name, 1},
  [7] =
    {field_body, 2},
    {field_params, 1},
  [9] =
    {field_body, 2},
    {field_cond, 1},
  [11] =
    {field_cond, 1},
    {field_then, 2},
  [13] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [16] =
    {field_left, 0},
    {field_right, 2},
  [18] =
    {field_name, 2},
  [19] =
    {field_cond, 1},
    {field_else, 4},
    {field_then, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
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
  [12] = 12,
  [13] = 10,
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
  [32] = 32,
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
  [46] = 46,
  [47] = 42,
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
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 44,
  [62] = 50,
  [63] = 48,
  [64] = 51,
  [65] = 60,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 71,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 75,
  [83] = 77,
  [84] = 76,
  [85] = 85,
  [86] = 86,
  [87] = 69,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 89,
  [93] = 88,
  [94] = 94,
  [95] = 21,
  [96] = 91,
  [97] = 97,
  [98] = 90,
  [99] = 99,
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
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 111,
  [124] = 115,
  [125] = 118,
  [126] = 126,
  [127] = 126,
  [128] = 128,
  [129] = 129,
  [130] = 121,
  [131] = 131,
  [132] = 132,
};

static inline bool sym__name_character_set_1(int32_t c) {
  return (c < 43514
    ? (c < 4193
      ? (c < 2707
        ? (c < 1994
          ? (c < 910
            ? (c < 736
              ? (c < 186
                ? (c < 'a'
                  ? (c < '_'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= '_')
                  : (c <= 'z' || (c < 181
                    ? c == 170
                    : c <= 181)))
                : (c <= 186 || (c < 248
                  ? (c < 216
                    ? (c >= 192 && c <= 214)
                    : c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))))
              : (c <= 740 || (c < 891
                ? (c < 880
                  ? (c < 750
                    ? c == 748
                    : c <= 750)
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 904
                  ? (c < 902
                    ? c == 895
                    : c <= 902)
                  : (c <= 906 || c == 908))))))
            : (c <= 929 || (c < 1649
              ? (c < 1376
                ? (c < 1162
                  ? (c < 1015
                    ? (c >= 931 && c <= 1013)
                    : c <= 1153)
                  : (c <= 1327 || (c < 1369
                    ? (c >= 1329 && c <= 1366)
                    : c <= 1369)))
                : (c <= 1416 || (c < 1568
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))))
              : (c <= 1747 || (c < 1791
                ? (c < 1774
                  ? (c < 1765
                    ? c == 1749
                    : c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1869
                  ? (c < 1810
                    ? c == 1808
                    : c <= 1839)
                  : (c <= 1957 || c == 1969))))))))
          : (c <= 2026 || (c < 2482
            ? (c < 2208
              ? (c < 2088
                ? (c < 2048
                  ? (c < 2042
                    ? (c >= 2036 && c <= 2037)
                    : c <= 2042)
                  : (c <= 2069 || (c < 2084
                    ? c == 2074
                    : c <= 2084)))
                : (c <= 2088 || (c < 2160
                  ? (c < 2144
                    ? (c >= 2112 && c <= 2136)
                    : c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))))
              : (c <= 2249 || (c < 2417
                ? (c < 2384
                  ? (c < 2365
                    ? (c >= 2308 && c <= 2361)
                    : c <= 2365)
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))))))
            : (c <= 2482 || (c < 2579
              ? (c < 2527
                ? (c < 2510
                  ? (c < 2493
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2493)
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))
                : (c <= 2529 || (c < 2565
                  ? (c < 2556
                    ? (c >= 2544 && c <= 2545)
                    : c <= 2556)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))))
              : (c <= 2600 || (c < 2649
                ? (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))
                : (c <= 2652 || (c < 2693
                  ? (c < 2674
                    ? c == 2654
                    : c <= 2676)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))))))))))
        : (c <= 2728 || (c < 3242
          ? (c < 2962
            ? (c < 2858
              ? (c < 2784
                ? (c < 2741
                  ? (c < 2738
                    ? (c >= 2730 && c <= 2736)
                    : c <= 2739)
                  : (c <= 2745 || (c < 2768
                    ? c == 2749
                    : c <= 2768)))
                : (c <= 2785 || (c < 2831
                  ? (c < 2821
                    ? c == 2809
                    : c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))))
              : (c <= 2864 || (c < 2911
                ? (c < 2877
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2949
                  ? (c < 2947
                    ? c == 2929
                    : c <= 2947)
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))))))
            : (c <= 2965 || (c < 3090
              ? (c < 2984
                ? (c < 2974
                  ? (c < 2972
                    ? (c >= 2969 && c <= 2970)
                    : c <= 2972)
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))
                : (c <= 2986 || (c < 3077
                  ? (c < 3024
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3024)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))
              : (c <= 3112 || (c < 3168
                ? (c < 3160
                  ? (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3133)
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3214
                  ? (c < 3205
                    ? c == 3200
                    : c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))))))))
          : (c <= 3251 || (c < 3648
            ? (c < 3412
              ? (c < 3332
                ? (c < 3293
                  ? (c < 3261
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3261)
                  : (c <= 3294 || (c < 3313
                    ? (c >= 3296 && c <= 3297)
                    : c <= 3314)))
                : (c <= 3340 || (c < 3389
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3386)
                  : (c <= 3389 || c == 3406))))
              : (c <= 3414 || (c < 3507
                ? (c < 3461
                  ? (c < 3450
                    ? (c >= 3423 && c <= 3425)
                    : c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3585
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3632 || c == 3634))))))
            : (c <= 3654 || (c < 3782
              ? (c < 3749
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))
                : (c <= 3749 || (c < 3773
                  ? (c < 3762
                    ? (c >= 3751 && c <= 3760)
                    : c <= 3762)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))
              : (c <= 3782 || (c < 3976
                ? (c < 3904
                  ? (c < 3840
                    ? (c >= 3804 && c <= 3807)
                    : c <= 3840)
                  : (c <= 3911 || (c >= 3913 && c <= 3948)))
                : (c <= 3980 || (c < 4176
                  ? (c < 4159
                    ? (c >= 4096 && c <= 4138)
                    : c <= 4159)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))))))))))))
      : (c <= 4193 || (c < 8134
        ? (c < 6176
          ? (c < 4808
            ? (c < 4688
              ? (c < 4295
                ? (c < 4213
                  ? (c < 4206
                    ? (c >= 4197 && c <= 4198)
                    : c <= 4208)
                  : (c <= 4225 || (c < 4256
                    ? c == 4238
                    : c <= 4293)))
                : (c <= 4295 || (c < 4348
                  ? (c < 4304
                    ? c == 4301
                    : c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))))
              : (c <= 4694 || (c < 4752
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4800
                  ? (c < 4792
                    ? (c >= 4786 && c <= 4789)
                    : c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))))))
            : (c <= 4822 || (c < 5792
              ? (c < 5024
                ? (c < 4888
                  ? (c < 4882
                    ? (c >= 4824 && c <= 4880)
                    : c <= 4885)
                  : (c <= 4954 || (c >= 4992 && c <= 5007)))
                : (c <= 5109 || (c < 5743
                  ? (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))))
              : (c <= 5866 || (c < 5984
                ? (c < 5919
                  ? (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6103
                  ? (c < 6016
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6067)
                  : (c <= 6103 || c == 6108))))))))
          : (c <= 6264 || (c < 7312
            ? (c < 6823
              ? (c < 6512
                ? (c < 6320
                  ? (c < 6314
                    ? (c >= 6272 && c <= 6312)
                    : c <= 6314)
                  : (c <= 6389 || (c < 6480
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6509)))
                : (c <= 6516 || (c < 6656
                  ? (c < 6576
                    ? (c >= 6528 && c <= 6571)
                    : c <= 6601)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6823 || (c < 7098
                ? (c < 7043
                  ? (c < 6981
                    ? (c >= 6917 && c <= 6963)
                    : c <= 6988)
                  : (c <= 7072 || (c >= 7086 && c <= 7087)))
                : (c <= 7141 || (c < 7258
                  ? (c < 7245
                    ? (c >= 7168 && c <= 7203)
                    : c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))))))
            : (c <= 7354 || (c < 8008
              ? (c < 7418
                ? (c < 7406
                  ? (c < 7401
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7960
                  ? (c < 7680
                    ? (c >= 7424 && c <= 7615)
                    : c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))
              : (c <= 8013 || (c < 8031
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || c == 8029))
                : (c <= 8061 || (c < 8126
                  ? (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))))))))))
        : (c <= 8140 || (c < 12337
          ? (c < 8544
            ? (c < 8458
              ? (c < 8305
                ? (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)))
                : (c <= 8305 || (c < 8450
                  ? (c < 8336
                    ? c == 8319
                    : c <= 8348)
                  : (c <= 8450 || c == 8455))))
              : (c <= 8467 || (c < 8488
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || c == 8486))
                : (c <= 8488 || (c < 8517
                  ? (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)
                  : (c <= 8521 || c == 8526))))))
            : (c <= 8584 || (c < 11680
              ? (c < 11559
                ? (c < 11506
                  ? (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))))
              : (c <= 11686 || (c < 11720
                ? (c < 11704
                  ? (c < 11696
                    ? (c >= 11688 && c <= 11694)
                    : c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))
                : (c <= 11726 || (c < 12293
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 12295 || (c >= 12321 && c <= 12329)))))))))
          : (c <= 12341 || (c < 42891
            ? (c < 19968
              ? (c < 12549
                ? (c < 12445
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12447 || (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)))
                : (c <= 12591 || (c < 12784
                  ? (c < 12704
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12735)
                  : (c <= 12799 || (c >= 13312 && c <= 19903)))))
              : (c <= 42124 || (c < 42560
                ? (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42775
                  ? (c < 42656
                    ? (c >= 42623 && c <= 42653)
                    : c <= 42735)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))
            : (c <= 42954 || (c < 43250
              ? (c < 43011
                ? (c < 42965
                  ? (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)
                  : (c <= 42969 || (c >= 42994 && c <= 43009)))
                : (c <= 43013 || (c < 43072
                  ? (c < 43020
                    ? (c >= 43015 && c <= 43018)
                    : c <= 43042)
                  : (c <= 43123 || (c >= 43138 && c <= 43187)))))
              : (c <= 43255 || (c < 43360
                ? (c < 43274
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43488
                  ? (c < 43471
                    ? (c >= 43396 && c <= 43442)
                    : c <= 43471)
                  : (c <= 43492 || (c >= 43494 && c <= 43503)))))))))))))))
    : (c <= 43518 || (c < 70727
      ? (c < 66956
        ? (c < 64914
          ? (c < 43868
            ? (c < 43714
              ? (c < 43646
                ? (c < 43588
                  ? (c < 43584
                    ? (c >= 43520 && c <= 43560)
                    : c <= 43586)
                  : (c <= 43595 || (c < 43642
                    ? (c >= 43616 && c <= 43638)
                    : c <= 43642)))
                : (c <= 43695 || (c < 43705
                  ? (c < 43701
                    ? c == 43697
                    : c <= 43702)
                  : (c <= 43709 || c == 43712))))
              : (c <= 43714 || (c < 43785
                ? (c < 43762
                  ? (c < 43744
                    ? (c >= 43739 && c <= 43741)
                    : c <= 43754)
                  : (c <= 43764 || (c >= 43777 && c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))))))
            : (c <= 43881 || (c < 64287
              ? (c < 63744
                ? (c < 55216
                  ? (c < 44032
                    ? (c >= 43888 && c <= 44002)
                    : c <= 55203)
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || c == 64285))))
              : (c <= 64296 || (c < 64323
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64612
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)
                  : (c <= 64829 || (c >= 64848 && c <= 64911)))))))))
          : (c <= 64967 || (c < 65599
            ? (c < 65382
              ? (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65008 && c <= 65017)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65313
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65338 || (c >= 65345 && c <= 65370)))))
              : (c <= 65437 || (c < 65498
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65440 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))
                : (c <= 65500 || (c < 65576
                  ? (c < 65549
                    ? (c >= 65536 && c <= 65547)
                    : c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))))))
            : (c <= 65613 || (c < 66464
              ? (c < 66208
                ? (c < 65856
                  ? (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)
                  : (c <= 65908 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66384
                  ? (c < 66349
                    ? (c >= 66304 && c <= 66335)
                    : c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66776
                ? (c < 66560
                  ? (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)
                  : (c <= 66717 || (c >= 66736 && c <= 66771)))
                : (c <= 66811 || (c < 66928
                  ? (c < 66864
                    ? (c >= 66816 && c <= 66855)
                    : c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))))))))))
        : (c <= 66962 || (c < 68864
          ? (c < 67828
            ? (c < 67506
              ? (c < 67072
                ? (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))
                : (c <= 67382 || (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c >= 67463 && c <= 67504)))))
              : (c <= 67514 || (c < 67644
                ? (c < 67594
                  ? (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : c <= 67592)
                  : (c <= 67637 || (c >= 67639 && c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))))))
            : (c <= 67829 || (c < 68224
              ? (c < 68096
                ? (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c >= 68030 && c <= 68031)))
                : (c <= 68096 || (c < 68121
                  ? (c < 68117
                    ? (c >= 68112 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c >= 68192 && c <= 68220)))))
              : (c <= 68252 || (c < 68448
                ? (c < 68352
                  ? (c < 68297
                    ? (c >= 68288 && c <= 68295)
                    : c <= 68324)
                  : (c <= 68405 || (c >= 68416 && c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c >= 68800 && c <= 68850)))))))))
          : (c <= 68899 || (c < 70106
            ? (c < 69749
              ? (c < 69488
                ? (c < 69376
                  ? (c < 69296
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69297)
                  : (c <= 69404 || (c < 69424
                    ? c == 69415
                    : c <= 69445)))
                : (c <= 69505 || (c < 69635
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69687 || (c >= 69745 && c <= 69746)))))
              : (c <= 69749 || (c < 69959
                ? (c < 69891
                  ? (c < 69840
                    ? (c >= 69763 && c <= 69807)
                    : c <= 69864)
                  : (c <= 69926 || c == 69956))
                : (c <= 69959 || (c < 70019
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70002)
                    : c <= 70006)
                  : (c <= 70066 || (c >= 70081 && c <= 70084)))))))
            : (c <= 70106 || (c < 70405
              ? (c < 70280
                ? (c < 70163
                  ? (c < 70144
                    ? c == 70108
                    : c <= 70161)
                  : (c <= 70187 || (c >= 70272 && c <= 70278)))
                : (c <= 70280 || (c < 70303
                  ? (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)
                  : (c <= 70312 || (c >= 70320 && c <= 70366)))))
              : (c <= 70412 || (c < 70453
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c >= 70450 && c <= 70451)))
                : (c <= 70457 || (c < 70493
                  ? (c < 70480
                    ? c == 70461
                    : c <= 70480)
                  : (c <= 70497 || (c >= 70656 && c <= 70708)))))))))))))
      : (c <= 70730 || (c < 119894
        ? (c < 73056
          ? (c < 72001
            ? (c < 71424
              ? (c < 71128
                ? (c < 70852
                  ? (c < 70784
                    ? (c >= 70751 && c <= 70753)
                    : c <= 70831)
                  : (c <= 70853 || (c < 71040
                    ? c == 70855
                    : c <= 71086)))
                : (c <= 71131 || (c < 71296
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71215)
                    : c <= 71236)
                  : (c <= 71338 || c == 71352))))
              : (c <= 71450 || (c < 71945
                ? (c < 71840
                  ? (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71723)
                  : (c <= 71903 || (c >= 71935 && c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71983 || c == 71999))))))
            : (c <= 72001 || (c < 72349
              ? (c < 72192
                ? (c < 72161
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72144)
                  : (c <= 72161 || c == 72163))
                : (c <= 72192 || (c < 72272
                  ? (c < 72250
                    ? (c >= 72203 && c <= 72242)
                    : c <= 72250)
                  : (c <= 72272 || (c >= 72284 && c <= 72329)))))
              : (c <= 72349 || (c < 72818
                ? (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72750 || c == 72768))
                : (c <= 72847 || (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))))))))
          : (c <= 73061 || (c < 93952
            ? (c < 82944
              ? (c < 73728
                ? (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c < 73648
                    ? (c >= 73440 && c <= 73458)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c >= 77824 && c <= 78894)))))
              : (c <= 83526 || (c < 92928
                ? (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))
                : (c <= 92975 || (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))))))
            : (c <= 94026 || (c < 110589
              ? (c < 94208
                ? (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))
                : (c <= 100343 || (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))))
              : (c <= 110590 || (c < 113664
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c >= 110960 && c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c >= 119808 && c <= 119892)))))))))))
        : (c <= 119964 || (c < 125259
          ? (c < 120572
            ? (c < 120086
              ? (c < 119995
                ? (c < 119973
                  ? (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)
                  : (c <= 119974 || (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)))
                : (c <= 119995 || (c < 120071
                  ? (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)
                  : (c <= 120074 || (c >= 120077 && c <= 120084)))))
              : (c <= 120092 || (c < 120138
                ? (c < 120128
                  ? (c < 120123
                    ? (c >= 120094 && c <= 120121)
                    : c <= 120126)
                  : (c <= 120132 || c == 120134))
                : (c <= 120144 || (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c >= 120540 && c <= 120570)))))))
            : (c <= 120596 || (c < 123191
              ? (c < 120714
                ? (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c >= 120688 && c <= 120712)))
                : (c <= 120744 || (c < 122624
                  ? (c < 120772
                    ? (c >= 120746 && c <= 120770)
                    : c <= 120779)
                  : (c <= 122654 || (c >= 123136 && c <= 123180)))))
              : (c <= 123197 || (c < 124904
                ? (c < 123584
                  ? (c < 123536
                    ? c == 123214
                    : c <= 123565)
                  : (c <= 123627 || (c >= 124896 && c <= 124902)))
                : (c <= 124907 || (c < 124928
                  ? (c < 124912
                    ? (c >= 124909 && c <= 124910)
                    : c <= 124926)
                  : (c <= 125124 || (c >= 125184 && c <= 125251)))))))))
          : (c <= 125259 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126497
                  ? (c < 126469
                    ? (c >= 126464 && c <= 126467)
                    : c <= 126495)
                  : (c <= 126498 || (c < 126503
                    ? c == 126500
                    : c <= 126503)))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym__name_character_set_2(int32_t c) {
  return (c < 43616
    ? (c < 3782
      ? (c < 2748
        ? (c < 2045
          ? (c < 1015
            ? (c < 710
              ? (c < 181
                ? (c < '_'
                  ? (c < 'A'
                    ? (c >= '0' && c <= '9')
                    : c <= 'Z')
                  : (c <= '_' || (c < 170
                    ? (c >= 'a' && c <= 'z')
                    : c <= 170)))
                : (c <= 181 || (c < 192
                  ? (c < 186
                    ? c == 183
                    : c <= 186)
                  : (c <= 214 || (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)))))
              : (c <= 721 || (c < 891
                ? (c < 750
                  ? (c < 748
                    ? (c >= 736 && c <= 740)
                    : c <= 748)
                  : (c <= 750 || (c < 886
                    ? (c >= 768 && c <= 884)
                    : c <= 887)))
                : (c <= 893 || (c < 908
                  ? (c < 902
                    ? c == 895
                    : c <= 906)
                  : (c <= 908 || (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)))))))
            : (c <= 1153 || (c < 1519
              ? (c < 1425
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1155 && c <= 1159)
                    : c <= 1327)
                  : (c <= 1366 || (c < 1376
                    ? c == 1369
                    : c <= 1416)))
                : (c <= 1469 || (c < 1476
                  ? (c < 1473
                    ? c == 1471
                    : c <= 1474)
                  : (c <= 1477 || (c < 1488
                    ? c == 1479
                    : c <= 1514)))))
              : (c <= 1522 || (c < 1770
                ? (c < 1646
                  ? (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1641)
                  : (c <= 1747 || (c < 1759
                    ? (c >= 1749 && c <= 1756)
                    : c <= 1768)))
                : (c <= 1788 || (c < 1869
                  ? (c < 1808
                    ? c == 1791
                    : c <= 1866)
                  : (c <= 1969 || (c < 2042
                    ? (c >= 1984 && c <= 2037)
                    : c <= 2042)))))))))
          : (c <= 2045 || (c < 2558
            ? (c < 2451
              ? (c < 2200
                ? (c < 2144
                  ? (c < 2112
                    ? (c >= 2048 && c <= 2093)
                    : c <= 2139)
                  : (c <= 2154 || (c < 2185
                    ? (c >= 2160 && c <= 2183)
                    : c <= 2190)))
                : (c <= 2273 || (c < 2417
                  ? (c < 2406
                    ? (c >= 2275 && c <= 2403)
                    : c <= 2415)
                  : (c <= 2435 || (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)))))
              : (c <= 2472 || (c < 2507
                ? (c < 2486
                  ? (c < 2482
                    ? (c >= 2474 && c <= 2480)
                    : c <= 2482)
                  : (c <= 2489 || (c < 2503
                    ? (c >= 2492 && c <= 2500)
                    : c <= 2504)))
                : (c <= 2510 || (c < 2527
                  ? (c < 2524
                    ? c == 2519
                    : c <= 2525)
                  : (c <= 2531 || (c < 2556
                    ? (c >= 2534 && c <= 2545)
                    : c <= 2556)))))))
            : (c <= 2558 || (c < 2635
              ? (c < 2610
                ? (c < 2575
                  ? (c < 2565
                    ? (c >= 2561 && c <= 2563)
                    : c <= 2570)
                  : (c <= 2576 || (c < 2602
                    ? (c >= 2579 && c <= 2600)
                    : c <= 2608)))
                : (c <= 2611 || (c < 2620
                  ? (c < 2616
                    ? (c >= 2613 && c <= 2614)
                    : c <= 2617)
                  : (c <= 2620 || (c < 2631
                    ? (c >= 2622 && c <= 2626)
                    : c <= 2632)))))
              : (c <= 2637 || (c < 2693
                ? (c < 2654
                  ? (c < 2649
                    ? c == 2641
                    : c <= 2652)
                  : (c <= 2654 || (c < 2689
                    ? (c >= 2662 && c <= 2677)
                    : c <= 2691)))
                : (c <= 2701 || (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)))))))))))
        : (c <= 2757 || (c < 3168
          ? (c < 2958
            ? (c < 2866
              ? (c < 2809
                ? (c < 2768
                  ? (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)
                  : (c <= 2768 || (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)))
                : (c <= 2815 || (c < 2831
                  ? (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)
                  : (c <= 2832 || (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)))))
              : (c <= 2867 || (c < 2908
                ? (c < 2887
                  ? (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)
                  : (c <= 2888 || (c < 2901
                    ? (c >= 2891 && c <= 2893)
                    : c <= 2903)))
                : (c <= 2909 || (c < 2929
                  ? (c < 2918
                    ? (c >= 2911 && c <= 2915)
                    : c <= 2927)
                  : (c <= 2929 || (c < 2949
                    ? (c >= 2946 && c <= 2947)
                    : c <= 2954)))))))
            : (c <= 2960 || (c < 3031
              ? (c < 2984
                ? (c < 2972
                  ? (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)
                  : (c <= 2972 || (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)))
                : (c <= 2986 || (c < 3014
                  ? (c < 3006
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3010)
                  : (c <= 3016 || (c < 3024
                    ? (c >= 3018 && c <= 3021)
                    : c <= 3024)))))
              : (c <= 3031 || (c < 3132
                ? (c < 3086
                  ? (c < 3072
                    ? (c >= 3046 && c <= 3055)
                    : c <= 3084)
                  : (c <= 3088 || (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)))
                : (c <= 3140 || (c < 3157
                  ? (c < 3146
                    ? (c >= 3142 && c <= 3144)
                    : c <= 3149)
                  : (c <= 3158 || (c < 3165
                    ? (c >= 3160 && c <= 3162)
                    : c <= 3165)))))))))
          : (c <= 3171 || (c < 3450
            ? (c < 3293
              ? (c < 3242
                ? (c < 3205
                  ? (c < 3200
                    ? (c >= 3174 && c <= 3183)
                    : c <= 3203)
                  : (c <= 3212 || (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)))
                : (c <= 3251 || (c < 3270
                  ? (c < 3260
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3268)
                  : (c <= 3272 || (c < 3285
                    ? (c >= 3274 && c <= 3277)
                    : c <= 3286)))))
              : (c <= 3294 || (c < 3346
                ? (c < 3313
                  ? (c < 3302
                    ? (c >= 3296 && c <= 3299)
                    : c <= 3311)
                  : (c <= 3314 || (c < 3342
                    ? (c >= 3328 && c <= 3340)
                    : c <= 3344)))
                : (c <= 3396 || (c < 3412
                  ? (c < 3402
                    ? (c >= 3398 && c <= 3400)
                    : c <= 3406)
                  : (c <= 3415 || (c < 3430
                    ? (c >= 3423 && c <= 3427)
                    : c <= 3439)))))))
            : (c <= 3455 || (c < 3570
              ? (c < 3520
                ? (c < 3482
                  ? (c < 3461
                    ? (c >= 3457 && c <= 3459)
                    : c <= 3478)
                  : (c <= 3505 || (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)))
                : (c <= 3526 || (c < 3542
                  ? (c < 3535
                    ? c == 3530
                    : c <= 3540)
                  : (c <= 3542 || (c < 3558
                    ? (c >= 3544 && c <= 3551)
                    : c <= 3567)))))
              : (c <= 3571 || (c < 3718
                ? (c < 3664
                  ? (c < 3648
                    ? (c >= 3585 && c <= 3642)
                    : c <= 3662)
                  : (c <= 3673 || (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)))
                : (c <= 3722 || (c < 3751
                  ? (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))))))))))
      : (c <= 3782 || (c < 8025
        ? (c < 5888
          ? (c < 4688
            ? (c < 3953
              ? (c < 3872
                ? (c < 3804
                  ? (c < 3792
                    ? (c >= 3784 && c <= 3789)
                    : c <= 3801)
                  : (c <= 3807 || (c < 3864
                    ? c == 3840
                    : c <= 3865)))
                : (c <= 3881 || (c < 3897
                  ? (c < 3895
                    ? c == 3893
                    : c <= 3895)
                  : (c <= 3897 || (c < 3913
                    ? (c >= 3902 && c <= 3911)
                    : c <= 3948)))))
              : (c <= 3972 || (c < 4256
                ? (c < 4038
                  ? (c < 3993
                    ? (c >= 3974 && c <= 3991)
                    : c <= 4028)
                  : (c <= 4038 || (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)))
                : (c <= 4293 || (c < 4304
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 4346 || (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)))))))
            : (c <= 4694 || (c < 4882
              ? (c < 4786
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)))
                : (c <= 4789 || (c < 4802
                  ? (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)
                  : (c <= 4805 || (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)))))
              : (c <= 4885 || (c < 5112
                ? (c < 4969
                  ? (c < 4957
                    ? (c >= 4888 && c <= 4954)
                    : c <= 4959)
                  : (c <= 4977 || (c < 5024
                    ? (c >= 4992 && c <= 5007)
                    : c <= 5109)))
                : (c <= 5117 || (c < 5761
                  ? (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)
                  : (c <= 5786 || (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)))))))))
          : (c <= 5909 || (c < 6688
            ? (c < 6176
              ? (c < 6016
                ? (c < 5984
                  ? (c < 5952
                    ? (c >= 5919 && c <= 5940)
                    : c <= 5971)
                  : (c <= 5996 || (c < 6002
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6003)))
                : (c <= 6099 || (c < 6112
                  ? (c < 6108
                    ? c == 6103
                    : c <= 6109)
                  : (c <= 6121 || (c < 6159
                    ? (c >= 6155 && c <= 6157)
                    : c <= 6169)))))
              : (c <= 6264 || (c < 6470
                ? (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)))))))
            : (c <= 6750 || (c < 7232
              ? (c < 6847
                ? (c < 6800
                  ? (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)
                  : (c <= 6809 || (c < 6832
                    ? c == 6823
                    : c <= 6845)))
                : (c <= 6862 || (c < 7019
                  ? (c < 6992
                    ? (c >= 6912 && c <= 6988)
                    : c <= 7001)
                  : (c <= 7027 || (c < 7168
                    ? (c >= 7040 && c <= 7155)
                    : c <= 7223)))))
              : (c <= 7241 || (c < 7380
                ? (c < 7312
                  ? (c < 7296
                    ? (c >= 7245 && c <= 7293)
                    : c <= 7304)
                  : (c <= 7354 || (c < 7376
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7378)))
                : (c <= 7418 || (c < 7968
                  ? (c < 7960
                    ? (c >= 7424 && c <= 7957)
                    : c <= 7965)
                  : (c <= 8005 || (c < 8016
                    ? (c >= 8008 && c <= 8013)
                    : c <= 8023)))))))))))
        : (c <= 8025 || (c < 11720
          ? (c < 8458
            ? (c < 8178
              ? (c < 8126
                ? (c < 8031
                  ? (c < 8029
                    ? c == 8027
                    : c <= 8029)
                  : (c <= 8061 || (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)))
                : (c <= 8126 || (c < 8144
                  ? (c < 8134
                    ? (c >= 8130 && c <= 8132)
                    : c <= 8140)
                  : (c <= 8147 || (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)))))
              : (c <= 8180 || (c < 8336
                ? (c < 8276
                  ? (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)
                  : (c <= 8276 || (c < 8319
                    ? c == 8305
                    : c <= 8319)))
                : (c <= 8348 || (c < 8421
                  ? (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)
                  : (c <= 8432 || (c < 8455
                    ? c == 8450
                    : c <= 8455)))))))
            : (c <= 8467 || (c < 11499
              ? (c < 8490
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || (c < 8488
                    ? c == 8486
                    : c <= 8488)))
                : (c <= 8505 || (c < 8526
                  ? (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)
                  : (c <= 8526 || (c < 11264
                    ? (c >= 8544 && c <= 8584)
                    : c <= 11492)))))
              : (c <= 11507 || (c < 11647
                ? (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)))
                : (c <= 11670 || (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)))))))))
          : (c <= 11726 || (c < 42623
            ? (c < 12540
              ? (c < 12337
                ? (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || (c < 12321
                    ? (c >= 12293 && c <= 12295)
                    : c <= 12335)))
                : (c <= 12341 || (c < 12441
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12442 || (c < 12449
                    ? (c >= 12445 && c <= 12447)
                    : c <= 12538)))))
              : (c <= 12543 || (c < 19968
                ? (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12735 || (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)))
                : (c <= 42124 || (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42539 || (c < 42612
                    ? (c >= 42560 && c <= 42607)
                    : c <= 42621)))))))
            : (c <= 42737 || (c < 43232
              ? (c < 42965
                ? (c < 42891
                  ? (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)
                  : (c <= 42954 || (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)))
                : (c <= 42969 || (c < 43072
                  ? (c < 43052
                    ? (c >= 42994 && c <= 43047)
                    : c <= 43052)
                  : (c <= 43123 || (c < 43216
                    ? (c >= 43136 && c <= 43205)
                    : c <= 43225)))))
              : (c <= 43255 || (c < 43471
                ? (c < 43312
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43309)
                  : (c <= 43347 || (c < 43392
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43456)))
                : (c <= 43481 || (c < 43584
                  ? (c < 43520
                    ? (c >= 43488 && c <= 43518)
                    : c <= 43574)
                  : (c <= 43597 || (c >= 43600 && c <= 43609)))))))))))))))
    : (c <= 43638 || (c < 71453
      ? (c < 67639
        ? (c < 65345
          ? (c < 64312
            ? (c < 43888
              ? (c < 43785
                ? (c < 43744
                  ? (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)
                  : (c <= 43759 || (c < 43777
                    ? (c >= 43762 && c <= 43766)
                    : c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c < 43868
                    ? (c >= 43824 && c <= 43866)
                    : c <= 43881)))))
              : (c <= 44010 || (c < 63744
                ? (c < 44032
                  ? (c < 44016
                    ? (c >= 44012 && c <= 44013)
                    : c <= 44025)
                  : (c <= 55203 || (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || (c < 64298
                    ? (c >= 64285 && c <= 64296)
                    : c <= 64310)))))))
            : (c <= 64316 || (c < 65075
              ? (c < 64612
                ? (c < 64323
                  ? (c < 64320
                    ? c == 64318
                    : c <= 64321)
                  : (c <= 64324 || (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)))
                : (c <= 64829 || (c < 65008
                  ? (c < 64914
                    ? (c >= 64848 && c <= 64911)
                    : c <= 64967)
                  : (c <= 65017 || (c < 65056
                    ? (c >= 65024 && c <= 65039)
                    : c <= 65071)))))
              : (c <= 65076 || (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65101 && c <= 65103)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65296
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65305 || (c < 65343
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65343)))))))))
          : (c <= 65370 || (c < 66513
            ? (c < 65664
              ? (c < 65536
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65382 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)))
                : (c <= 65547 || (c < 65596
                  ? (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)
                  : (c <= 65597 || (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)))))
              : (c <= 65786 || (c < 66304
                ? (c < 66176
                  ? (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)
                  : (c <= 66204 || (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)))
                : (c <= 66335 || (c < 66432
                  ? (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)
                  : (c <= 66461 || (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)))))))
            : (c <= 66517 || (c < 66979
              ? (c < 66864
                ? (c < 66736
                  ? (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)
                  : (c <= 66771 || (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)))
                : (c <= 66915 || (c < 66956
                  ? (c < 66940
                    ? (c >= 66928 && c <= 66938)
                    : c <= 66954)
                  : (c <= 66962 || (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)))))
              : (c <= 66993 || (c < 67456
                ? (c < 67072
                  ? (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)
                  : (c <= 67382 || (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)))
                : (c <= 67461 || (c < 67584
                  ? (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)
                  : (c <= 67589 || (c < 67594
                    ? c == 67592
                    : c <= 67637)))))))))))
        : (c <= 67640 || (c < 69956
          ? (c < 68448
            ? (c < 68101
              ? (c < 67828
                ? (c < 67680
                  ? (c < 67647
                    ? c == 67644
                    : c <= 67669)
                  : (c <= 67702 || (c < 67808
                    ? (c >= 67712 && c <= 67742)
                    : c <= 67826)))
                : (c <= 67829 || (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c < 68096
                    ? (c >= 68030 && c <= 68031)
                    : c <= 68099)))))
              : (c <= 68102 || (c < 68192
                ? (c < 68121
                  ? (c < 68117
                    ? (c >= 68108 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c < 68159
                    ? (c >= 68152 && c <= 68154)
                    : c <= 68159)))
                : (c <= 68220 || (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68326 || (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)))))))
            : (c <= 68466 || (c < 69424
              ? (c < 68912
                ? (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)))
                : (c <= 68921 || (c < 69296
                  ? (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))))
              : (c <= 69456 || (c < 69759
                ? (c < 69600
                  ? (c < 69552
                    ? (c >= 69488 && c <= 69509)
                    : c <= 69572)
                  : (c <= 69622 || (c < 69734
                    ? (c >= 69632 && c <= 69702)
                    : c <= 69749)))
                : (c <= 69818 || (c < 69872
                  ? (c < 69840
                    ? c == 69826
                    : c <= 69864)
                  : (c <= 69881 || (c < 69942
                    ? (c >= 69888 && c <= 69940)
                    : c <= 69951)))))))))
          : (c <= 69959 || (c < 70459
            ? (c < 70282
              ? (c < 70108
                ? (c < 70016
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70003)
                    : c <= 70006)
                  : (c <= 70084 || (c < 70094
                    ? (c >= 70089 && c <= 70092)
                    : c <= 70106)))
                : (c <= 70108 || (c < 70206
                  ? (c < 70163
                    ? (c >= 70144 && c <= 70161)
                    : c <= 70199)
                  : (c <= 70206 || (c < 70280
                    ? (c >= 70272 && c <= 70278)
                    : c <= 70280)))))
              : (c <= 70285 || (c < 70405
                ? (c < 70320
                  ? (c < 70303
                    ? (c >= 70287 && c <= 70301)
                    : c <= 70312)
                  : (c <= 70378 || (c < 70400
                    ? (c >= 70384 && c <= 70393)
                    : c <= 70403)))
                : (c <= 70412 || (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)))))))
            : (c <= 70468 || (c < 70855
              ? (c < 70502
                ? (c < 70480
                  ? (c < 70475
                    ? (c >= 70471 && c <= 70472)
                    : c <= 70477)
                  : (c <= 70480 || (c < 70493
                    ? c == 70487
                    : c <= 70499)))
                : (c <= 70508 || (c < 70736
                  ? (c < 70656
                    ? (c >= 70512 && c <= 70516)
                    : c <= 70730)
                  : (c <= 70745 || (c < 70784
                    ? (c >= 70750 && c <= 70753)
                    : c <= 70853)))))
              : (c <= 70855 || (c < 71236
                ? (c < 71096
                  ? (c < 71040
                    ? (c >= 70864 && c <= 70873)
                    : c <= 71093)
                  : (c <= 71104 || (c < 71168
                    ? (c >= 71128 && c <= 71133)
                    : c <= 71232)))
                : (c <= 71236 || (c < 71360
                  ? (c < 71296
                    ? (c >= 71248 && c <= 71257)
                    : c <= 71352)
                  : (c <= 71369 || (c >= 71424 && c <= 71450)))))))))))))
      : (c <= 71467 || (c < 119973
        ? (c < 77824
          ? (c < 72760
            ? (c < 72016
              ? (c < 71945
                ? (c < 71680
                  ? (c < 71488
                    ? (c >= 71472 && c <= 71481)
                    : c <= 71494)
                  : (c <= 71738 || (c < 71935
                    ? (c >= 71840 && c <= 71913)
                    : c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71989 || (c < 71995
                    ? (c >= 71991 && c <= 71992)
                    : c <= 72003)))))
              : (c <= 72025 || (c < 72263
                ? (c < 72154
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72151)
                  : (c <= 72161 || (c < 72192
                    ? (c >= 72163 && c <= 72164)
                    : c <= 72254)))
                : (c <= 72263 || (c < 72368
                  ? (c < 72349
                    ? (c >= 72272 && c <= 72345)
                    : c <= 72349)
                  : (c <= 72440 || (c < 72714
                    ? (c >= 72704 && c <= 72712)
                    : c <= 72758)))))))
            : (c <= 72768 || (c < 73056
              ? (c < 72968
                ? (c < 72850
                  ? (c < 72818
                    ? (c >= 72784 && c <= 72793)
                    : c <= 72847)
                  : (c <= 72871 || (c < 72960
                    ? (c >= 72873 && c <= 72886)
                    : c <= 72966)))
                : (c <= 72969 || (c < 73020
                  ? (c < 73018
                    ? (c >= 72971 && c <= 73014)
                    : c <= 73018)
                  : (c <= 73021 || (c < 73040
                    ? (c >= 73023 && c <= 73031)
                    : c <= 73049)))))
              : (c <= 73061 || (c < 73440
                ? (c < 73104
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73102)
                  : (c <= 73105 || (c < 73120
                    ? (c >= 73107 && c <= 73112)
                    : c <= 73129)))
                : (c <= 73462 || (c < 74752
                  ? (c < 73728
                    ? c == 73648
                    : c <= 74649)
                  : (c <= 74862 || (c < 77712
                    ? (c >= 74880 && c <= 75075)
                    : c <= 77808)))))))))
          : (c <= 78894 || (c < 110576
            ? (c < 93027
              ? (c < 92864
                ? (c < 92736
                  ? (c < 92160
                    ? (c >= 82944 && c <= 83526)
                    : c <= 92728)
                  : (c <= 92766 || (c < 92784
                    ? (c >= 92768 && c <= 92777)
                    : c <= 92862)))
                : (c <= 92873 || (c < 92928
                  ? (c < 92912
                    ? (c >= 92880 && c <= 92909)
                    : c <= 92916)
                  : (c <= 92982 || (c < 93008
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93017)))))
              : (c <= 93047 || (c < 94176
                ? (c < 93952
                  ? (c < 93760
                    ? (c >= 93053 && c <= 93071)
                    : c <= 93823)
                  : (c <= 94026 || (c < 94095
                    ? (c >= 94031 && c <= 94087)
                    : c <= 94111)))
                : (c <= 94177 || (c < 94208
                  ? (c < 94192
                    ? (c >= 94179 && c <= 94180)
                    : c <= 94193)
                  : (c <= 100343 || (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)))))))
            : (c <= 110579 || (c < 118528
              ? (c < 110960
                ? (c < 110592
                  ? (c < 110589
                    ? (c >= 110581 && c <= 110587)
                    : c <= 110590)
                  : (c <= 110882 || (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)))
                : (c <= 111355 || (c < 113792
                  ? (c < 113776
                    ? (c >= 113664 && c <= 113770)
                    : c <= 113788)
                  : (c <= 113800 || (c < 113821
                    ? (c >= 113808 && c <= 113817)
                    : c <= 113822)))))
              : (c <= 118573 || (c < 119210
                ? (c < 119149
                  ? (c < 119141
                    ? (c >= 118576 && c <= 118598)
                    : c <= 119145)
                  : (c <= 119154 || (c < 119173
                    ? (c >= 119163 && c <= 119170)
                    : c <= 119179)))
                : (c <= 119213 || (c < 119894
                  ? (c < 119808
                    ? (c >= 119362 && c <= 119364)
                    : c <= 119892)
                  : (c <= 119964 || (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)))))))))))
        : (c <= 119974 || (c < 124912
          ? (c < 120746
            ? (c < 120134
              ? (c < 120071
                ? (c < 119995
                  ? (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)
                  : (c <= 119995 || (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)))
                : (c <= 120074 || (c < 120094
                  ? (c < 120086
                    ? (c >= 120077 && c <= 120084)
                    : c <= 120092)
                  : (c <= 120121 || (c < 120128
                    ? (c >= 120123 && c <= 120126)
                    : c <= 120132)))))
              : (c <= 120134 || (c < 120572
                ? (c < 120488
                  ? (c < 120146
                    ? (c >= 120138 && c <= 120144)
                    : c <= 120485)
                  : (c <= 120512 || (c < 120540
                    ? (c >= 120514 && c <= 120538)
                    : c <= 120570)))
                : (c <= 120596 || (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)))))))
            : (c <= 120770 || (c < 122907
              ? (c < 121476
                ? (c < 121344
                  ? (c < 120782
                    ? (c >= 120772 && c <= 120779)
                    : c <= 120831)
                  : (c <= 121398 || (c < 121461
                    ? (c >= 121403 && c <= 121452)
                    : c <= 121461)))
                : (c <= 121476 || (c < 122624
                  ? (c < 121505
                    ? (c >= 121499 && c <= 121503)
                    : c <= 121519)
                  : (c <= 122654 || (c < 122888
                    ? (c >= 122880 && c <= 122886)
                    : c <= 122904)))))
              : (c <= 122913 || (c < 123214
                ? (c < 123136
                  ? (c < 122918
                    ? (c >= 122915 && c <= 122916)
                    : c <= 122922)
                  : (c <= 123180 || (c < 123200
                    ? (c >= 123184 && c <= 123197)
                    : c <= 123209)))
                : (c <= 123214 || (c < 124896
                  ? (c < 123584
                    ? (c >= 123536 && c <= 123566)
                    : c <= 123641)
                  : (c <= 124902 || (c < 124909
                    ? (c >= 124904 && c <= 124907)
                    : c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(33);
      if (lookahead == '#') ADVANCE(4);
      if (lookahead == '&') ADVANCE(80);
      if (lookahead == '(') ADVANCE(37);
      if (lookahead == ')') ADVANCE(35);
      if (lookahead == '*') ADVANCE(57);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == '=') ADVANCE(65);
      if (lookahead == '>') ADVANCE(53);
      if (lookahead == '@') ADVANCE(52);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == ']') ADVANCE(67);
      if (lookahead == '^') ADVANCE(56);
      if (lookahead == 'o') ADVANCE(69);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(71);
      if (lookahead == '|') ADVANCE(81);
      if (lookahead == '~') ADVANCE(40);
      if (lookahead == 176) ADVANCE(68);
      if (lookahead == 8776) ADVANCE(64);
      if (lookahead == 9825) ADVANCE(75);
      if (lookahead == 128148) ADVANCE(77);
      if (lookahead == 129425) ADVANCE(42);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(31)
      if (sym__name_character_set_1(lookahead)) ADVANCE(93);
      END_STATE();
    case 1:
      if (lookahead == '#') ADVANCE(4);
      if (lookahead == '(') ADVANCE(73);
      if (lookahead == ')') ADVANCE(72);
      if (lookahead == '>') ADVANCE(55);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(71);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      if (sym__name_character_set_1(lookahead)) ADVANCE(93);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(4);
      if (lookahead == '(' ||
          lookahead == ')') ADVANCE(72);
      if (lookahead == '>') ADVANCE(22);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(71);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      if (sym__name_character_set_1(lookahead)) ADVANCE(93);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(58);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(3);
      END_STATE();
    case 5:
      if (lookahead == '&') ADVANCE(80);
      if (lookahead == '(') ADVANCE(37);
      if (lookahead == ')') ADVANCE(35);
      if (lookahead == '<') ADVANCE(60);
      if (lookahead == '=') ADVANCE(65);
      if (lookahead == '>') ADVANCE(7);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == ']') ADVANCE(67);
      if (lookahead == '^') ADVANCE(56);
      if (lookahead == 'o') ADVANCE(12);
      if (lookahead == '|') ADVANCE(81);
      if (lookahead == '~') ADVANCE(40);
      if (lookahead == 8776) ADVANCE(64);
      if (lookahead == 9825) ADVANCE(75);
      if (lookahead == 128148) ADVANCE(77);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '(') ADVANCE(37);
      if (lookahead == ')') ADVANCE(21);
      if (lookahead == '<') ADVANCE(62);
      if (lookahead == '>') ADVANCE(54);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == 'o') ADVANCE(11);
      if (lookahead == 129425) ADVANCE(42);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '(') ADVANCE(34);
      if (lookahead == '<') ADVANCE(49);
      if (lookahead == '>') ADVANCE(79);
      END_STATE();
    case 8:
      if (lookahead == '(') ADVANCE(36);
      if (lookahead == '<') ADVANCE(59);
      if (lookahead == '>') ADVANCE(20);
      if (lookahead == '[') ADVANCE(66);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8)
      if (sym__name_character_set_1(lookahead)) ADVANCE(93);
      END_STATE();
    case 9:
      if (lookahead == '(') ADVANCE(51);
      END_STATE();
    case 10:
      if (lookahead == ')') ADVANCE(48);
      END_STATE();
    case 11:
      if (lookahead == '+') ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == '+') ADVANCE(10);
      if (lookahead == '~') ADVANCE(86);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(25);
      END_STATE();
    case 14:
      if (lookahead == '/') ADVANCE(23);
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(24);
      END_STATE();
    case 16:
      if (lookahead == '/') ADVANCE(14);
      END_STATE();
    case 17:
      if (lookahead == '3') ADVANCE(76);
      END_STATE();
    case 18:
      if (lookahead == '<') ADVANCE(46);
      END_STATE();
    case 19:
      if (lookahead == '<') ADVANCE(44);
      END_STATE();
    case 20:
      if (lookahead == '<') ADVANCE(49);
      END_STATE();
    case 21:
      if (lookahead == '<') ADVANCE(38);
      END_STATE();
    case 22:
      if (lookahead == '<') ADVANCE(16);
      END_STATE();
    case 23:
      if (lookahead == '>') ADVANCE(94);
      END_STATE();
    case 24:
      if (lookahead == '>') ADVANCE(43);
      END_STATE();
    case 25:
      if (lookahead == '>') ADVANCE(19);
      END_STATE();
    case 26:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 27:
      if (lookahead == '(' ||
          lookahead == ')') ADVANCE(72);
      if (lookahead == '>') ADVANCE(55);
      if (lookahead == 'o' ||
          lookahead == 176) ADVANCE(68);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(71);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(28)
      END_STATE();
    case 28:
      if (lookahead == '(' ||
          lookahead == ')') ADVANCE(72);
      if (lookahead == '>') ADVANCE(55);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(71);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(28)
      END_STATE();
    case 29:
      if (lookahead == '(' ||
          lookahead == ')') ADVANCE(72);
      if (lookahead == '>') ADVANCE(20);
      if (lookahead == 'o') ADVANCE(70);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(71);
      if (lookahead == 176) ADVANCE(68);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(30)
      if (sym__name_character_set_1(lookahead)) ADVANCE(93);
      END_STATE();
    case 30:
      if (lookahead == '(' ||
          lookahead == ')') ADVANCE(72);
      if (lookahead == '>') ADVANCE(20);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(71);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(30)
      if (sym__name_character_set_1(lookahead)) ADVANCE(93);
      END_STATE();
    case 31:
      if (eof) ADVANCE(33);
      if (lookahead == '#') ADVANCE(4);
      if (lookahead == '&') ADVANCE(80);
      if (lookahead == '(') ADVANCE(37);
      if (lookahead == ')') ADVANCE(35);
      if (lookahead == '*') ADVANCE(57);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == '=') ADVANCE(65);
      if (lookahead == '>') ADVANCE(53);
      if (lookahead == '@') ADVANCE(52);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == ']') ADVANCE(67);
      if (lookahead == '^') ADVANCE(56);
      if (lookahead == 'o') ADVANCE(92);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(71);
      if (lookahead == '|') ADVANCE(81);
      if (lookahead == '~') ADVANCE(40);
      if (lookahead == 8776) ADVANCE(64);
      if (lookahead == 9825) ADVANCE(75);
      if (lookahead == 128148) ADVANCE(77);
      if (lookahead == 129425) ADVANCE(42);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(31)
      if (sym__name_character_set_1(lookahead)) ADVANCE(93);
      END_STATE();
    case 32:
      if (eof) ADVANCE(33);
      if (lookahead == '(') ADVANCE(37);
      if (lookahead == ')') ADVANCE(35);
      if (lookahead == '<') ADVANCE(63);
      if (lookahead == '>') ADVANCE(53);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == 'o') ADVANCE(11);
      if (lookahead == '~') ADVANCE(39);
      if (lookahead == 129425) ADVANCE(42);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(32)
      END_STATE();
    case 33:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_GT_LPAREN);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '+') ADVANCE(26);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_RPAREN_LT);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '=') ADVANCE(84);
      if (lookahead == 'o') ADVANCE(87);
      if (lookahead == 8776) ADVANCE(85);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_LT_TILDE);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_U0001f991);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_GT_LT_BSLASH_SLASH_GT);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_LT_BSLASH_SLASH_GT_LT);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_GT_LT_GT);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LT_GT_LT);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LPAREN_PLUSo);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_o_PLUS_RPAREN);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_GT_LT);
      if (lookahead == '/') ADVANCE(14);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_GT_LT);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '>') ADVANCE(45);
      if (lookahead == '\\') ADVANCE(15);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_LPAREN_LPAREN_LPAREN);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '(') ADVANCE(34);
      if (lookahead == '<') ADVANCE(50);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '<') ADVANCE(50);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '<') ADVANCE(16);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_POUND_POUND_POUND);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == '3') ADVANCE(74);
      if (lookahead == '<') ADVANCE(78);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == '3') ADVANCE(74);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == '>') ADVANCE(18);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == '~') ADVANCE(41);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '>') ADVANCE(18);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == '~') ADVANCE(41);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == '~') ADVANCE(41);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_u2248);
      if (lookahead == 8776) ADVANCE(83);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(82);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_positive_literal_token1);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_positive_literal_token1);
      if (lookahead == '+') ADVANCE(10);
      if (lookahead == '~') ADVANCE(86);
      if (sym__name_character_set_2(lookahead)) ADVANCE(93);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_positive_literal_token1);
      if (sym__name_character_set_2(lookahead)) ADVANCE(93);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_one);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_zero);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_zero);
      if (lookahead == '(') ADVANCE(9);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_LT3);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_u2661);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_LT_SLASH3);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_U0001f494);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_u2248u2248);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_TILDE_EQ);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_TILDEu2248);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_o_TILDE);
      if (lookahead == '=') ADVANCE(88);
      if (lookahead == 8776) ADVANCE(89);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_TILDEo);
      if (lookahead == '=') ADVANCE(90);
      if (lookahead == 8776) ADVANCE(91);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_o_TILDE_EQ);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_o_TILDEu2248);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_TILDEo_EQ);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_TILDEou2248);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '+') ADVANCE(10);
      if (lookahead == '~') ADVANCE(86);
      if (sym__name_character_set_2(lookahead)) ADVANCE(93);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__name);
      if (sym__name_character_set_2(lookahead)) ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 32, .external_lex_state = 1},
  [2] = {.lex_state = 32, .external_lex_state = 1},
  [3] = {.lex_state = 32, .external_lex_state = 1},
  [4] = {.lex_state = 5, .external_lex_state = 1},
  [5] = {.lex_state = 5, .external_lex_state = 1},
  [6] = {.lex_state = 5, .external_lex_state = 1},
  [7] = {.lex_state = 5, .external_lex_state = 1},
  [8] = {.lex_state = 5, .external_lex_state = 1},
  [9] = {.lex_state = 6, .external_lex_state = 1},
  [10] = {.lex_state = 6, .external_lex_state = 1},
  [11] = {.lex_state = 6, .external_lex_state = 1},
  [12] = {.lex_state = 6, .external_lex_state = 1},
  [13] = {.lex_state = 6, .external_lex_state = 1},
  [14] = {.lex_state = 5, .external_lex_state = 1},
  [15] = {.lex_state = 5, .external_lex_state = 1},
  [16] = {.lex_state = 5, .external_lex_state = 1},
  [17] = {.lex_state = 5, .external_lex_state = 1},
  [18] = {.lex_state = 5, .external_lex_state = 1},
  [19] = {.lex_state = 5, .external_lex_state = 1},
  [20] = {.lex_state = 5, .external_lex_state = 1},
  [21] = {.lex_state = 5, .external_lex_state = 1},
  [22] = {.lex_state = 5, .external_lex_state = 1},
  [23] = {.lex_state = 5, .external_lex_state = 1},
  [24] = {.lex_state = 5, .external_lex_state = 1},
  [25] = {.lex_state = 5, .external_lex_state = 1},
  [26] = {.lex_state = 5, .external_lex_state = 1},
  [27] = {.lex_state = 5, .external_lex_state = 1},
  [28] = {.lex_state = 5, .external_lex_state = 1},
  [29] = {.lex_state = 5, .external_lex_state = 1},
  [30] = {.lex_state = 5, .external_lex_state = 1},
  [31] = {.lex_state = 5, .external_lex_state = 1},
  [32] = {.lex_state = 5, .external_lex_state = 1},
  [33] = {.lex_state = 5, .external_lex_state = 1},
  [34] = {.lex_state = 5, .external_lex_state = 1},
  [35] = {.lex_state = 5, .external_lex_state = 1},
  [36] = {.lex_state = 5, .external_lex_state = 1},
  [37] = {.lex_state = 5, .external_lex_state = 1},
  [38] = {.lex_state = 5, .external_lex_state = 1},
  [39] = {.lex_state = 5, .external_lex_state = 1},
  [40] = {.lex_state = 5, .external_lex_state = 1},
  [41] = {.lex_state = 5, .external_lex_state = 1},
  [42] = {.lex_state = 32, .external_lex_state = 1},
  [43] = {.lex_state = 8, .external_lex_state = 1},
  [44] = {.lex_state = 32, .external_lex_state = 1},
  [45] = {.lex_state = 5, .external_lex_state = 1},
  [46] = {.lex_state = 5, .external_lex_state = 1},
  [47] = {.lex_state = 6, .external_lex_state = 1},
  [48] = {.lex_state = 32, .external_lex_state = 1},
  [49] = {.lex_state = 32, .external_lex_state = 1},
  [50] = {.lex_state = 32, .external_lex_state = 1},
  [51] = {.lex_state = 32, .external_lex_state = 1},
  [52] = {.lex_state = 5, .external_lex_state = 1},
  [53] = {.lex_state = 5, .external_lex_state = 1},
  [54] = {.lex_state = 5, .external_lex_state = 1},
  [55] = {.lex_state = 5, .external_lex_state = 1},
  [56] = {.lex_state = 5, .external_lex_state = 1},
  [57] = {.lex_state = 5, .external_lex_state = 1},
  [58] = {.lex_state = 5, .external_lex_state = 1},
  [59] = {.lex_state = 32, .external_lex_state = 1},
  [60] = {.lex_state = 32, .external_lex_state = 1},
  [61] = {.lex_state = 6, .external_lex_state = 1},
  [62] = {.lex_state = 6, .external_lex_state = 1},
  [63] = {.lex_state = 6, .external_lex_state = 1},
  [64] = {.lex_state = 6, .external_lex_state = 1},
  [65] = {.lex_state = 6, .external_lex_state = 1},
  [66] = {.lex_state = 29, .external_lex_state = 1},
  [67] = {.lex_state = 29, .external_lex_state = 1},
  [68] = {.lex_state = 1, .external_lex_state = 1},
  [69] = {.lex_state = 5, .external_lex_state = 1},
  [70] = {.lex_state = 5, .external_lex_state = 1},
  [71] = {.lex_state = 0, .external_lex_state = 1},
  [72] = {.lex_state = 0, .external_lex_state = 1},
  [73] = {.lex_state = 27, .external_lex_state = 1},
  [74] = {.lex_state = 27, .external_lex_state = 1},
  [75] = {.lex_state = 27, .external_lex_state = 1},
  [76] = {.lex_state = 27, .external_lex_state = 1},
  [77] = {.lex_state = 27, .external_lex_state = 1},
  [78] = {.lex_state = 0, .external_lex_state = 1},
  [79] = {.lex_state = 0, .external_lex_state = 1},
  [80] = {.lex_state = 2, .external_lex_state = 1},
  [81] = {.lex_state = 0, .external_lex_state = 1},
  [82] = {.lex_state = 29, .external_lex_state = 1},
  [83] = {.lex_state = 29, .external_lex_state = 1},
  [84] = {.lex_state = 29, .external_lex_state = 1},
  [85] = {.lex_state = 27, .external_lex_state = 1},
  [86] = {.lex_state = 27, .external_lex_state = 1},
  [87] = {.lex_state = 0, .external_lex_state = 1},
  [88] = {.lex_state = 0, .external_lex_state = 1},
  [89] = {.lex_state = 0, .external_lex_state = 1},
  [90] = {.lex_state = 0, .external_lex_state = 1},
  [91] = {.lex_state = 0, .external_lex_state = 1},
  [92] = {.lex_state = 0, .external_lex_state = 1},
  [93] = {.lex_state = 0, .external_lex_state = 1},
  [94] = {.lex_state = 0, .external_lex_state = 1},
  [95] = {.lex_state = 0, .external_lex_state = 1},
  [96] = {.lex_state = 0, .external_lex_state = 1},
  [97] = {.lex_state = 0, .external_lex_state = 1},
  [98] = {.lex_state = 0, .external_lex_state = 1},
  [99] = {.lex_state = 1, .external_lex_state = 1},
  [100] = {.lex_state = 32, .external_lex_state = 1},
  [101] = {.lex_state = 0, .external_lex_state = 1},
  [102] = {.lex_state = 1, .external_lex_state = 1},
  [103] = {.lex_state = 0, .external_lex_state = 1},
  [104] = {.lex_state = 5, .external_lex_state = 1},
  [105] = {.lex_state = 0, .external_lex_state = 1},
  [106] = {.lex_state = 1, .external_lex_state = 1},
  [107] = {.lex_state = 32, .external_lex_state = 1},
  [108] = {.lex_state = 1, .external_lex_state = 1},
  [109] = {.lex_state = 0, .external_lex_state = 1},
  [110] = {.lex_state = 32, .external_lex_state = 1},
  [111] = {.lex_state = 32, .external_lex_state = 1},
  [112] = {.lex_state = 0, .external_lex_state = 1},
  [113] = {.lex_state = 0, .external_lex_state = 1},
  [114] = {.lex_state = 8, .external_lex_state = 1},
  [115] = {.lex_state = 32, .external_lex_state = 1},
  [116] = {.lex_state = 6, .external_lex_state = 1},
  [117] = {.lex_state = 5, .external_lex_state = 1},
  [118] = {.lex_state = 0, .external_lex_state = 1},
  [119] = {.lex_state = 1, .external_lex_state = 1},
  [120] = {.lex_state = 1, .external_lex_state = 1},
  [121] = {.lex_state = 8, .external_lex_state = 1},
  [122] = {.lex_state = 1, .external_lex_state = 1},
  [123] = {.lex_state = 32, .external_lex_state = 1},
  [124] = {.lex_state = 32, .external_lex_state = 1},
  [125] = {.lex_state = 0, .external_lex_state = 1},
  [126] = {.lex_state = 1, .external_lex_state = 1},
  [127] = {.lex_state = 1, .external_lex_state = 1},
  [128] = {.lex_state = 5, .external_lex_state = 1},
  [129] = {.lex_state = 8, .external_lex_state = 1},
  [130] = {.lex_state = 8, .external_lex_state = 1},
  [131] = {.lex_state = 5, .external_lex_state = 1},
  [132] = {.lex_state = 5, .external_lex_state = 1},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__name] = ACTIONS(1),
    [anon_sym_GT_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_LT_TILDE] = ACTIONS(1),
    [anon_sym_U0001f991] = ACTIONS(1),
    [anon_sym_GT_LT_BSLASH_SLASH_GT] = ACTIONS(1),
    [anon_sym_LT_BSLASH_SLASH_GT_LT] = ACTIONS(1),
    [anon_sym_GT_LT_GT] = ACTIONS(1),
    [anon_sym_LT_GT_LT] = ACTIONS(1),
    [anon_sym_LPAREN_PLUSo] = ACTIONS(1),
    [anon_sym_o_PLUS_RPAREN] = ACTIONS(1),
    [anon_sym_GT_LT] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_u2248] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [aux_sym_positive_literal_token1] = ACTIONS(1),
    [sym_one] = ACTIONS(1),
    [sym_zero] = ACTIONS(1),
    [anon_sym_LT3] = ACTIONS(1),
    [anon_sym_u2661] = ACTIONS(1),
    [anon_sym_LT_SLASH3] = ACTIONS(1),
    [anon_sym_U0001f494] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_u2248u2248] = ACTIONS(1),
    [anon_sym_TILDE_EQ] = ACTIONS(1),
    [anon_sym_TILDEu2248] = ACTIONS(1),
    [anon_sym_o_TILDE] = ACTIONS(1),
    [anon_sym_TILDEo] = ACTIONS(1),
    [anon_sym_o_TILDE_EQ] = ACTIONS(1),
    [anon_sym_o_TILDEu2248] = ACTIONS(1),
    [anon_sym_TILDEo_EQ] = ACTIONS(1),
    [anon_sym_TILDEou2248] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(103),
    [sym_subroutine] = STATE(3),
    [sym_right_sub] = STATE(79),
    [sym__statement] = STATE(3),
    [sym__simple_statement] = STATE(3),
    [sym_return_statement] = STATE(111),
    [sym_break_statement] = STATE(111),
    [sym_block] = STATE(3),
    [sym_anchor_statement] = STATE(111),
    [sym_loopy_fysh] = STATE(91),
    [sym_happy_fysh] = STATE(90),
    [sym_grilled_fysh] = STATE(18),
    [sym_loop_statement] = STATE(3),
    [sym_if_statement] = STATE(3),
    [sym_expression_statement] = STATE(111),
    [sym_inc_statement] = STATE(111),
    [sym_dec_statement] = STATE(111),
    [sym_assignment_statement] = STATE(111),
    [sym__expression] = STATE(18),
    [sym_fysh_bowl] = STATE(18),
    [sym_positive_ident] = STATE(33),
    [sym_positive_literal] = STATE(18),
    [sym_negative_ident] = STATE(18),
    [sym_negative_literal] = STATE(18),
    [sym_binary_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_addition] = STATE(26),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_GT_LPAREN] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_LT_TILDE] = ACTIONS(11),
    [anon_sym_U0001f991] = ACTIONS(11),
    [anon_sym_GT_LT_BSLASH_SLASH_GT] = ACTIONS(13),
    [anon_sym_LT_BSLASH_SLASH_GT_LT] = ACTIONS(13),
    [anon_sym_GT_LT_GT] = ACTIONS(15),
    [anon_sym_LPAREN_PLUSo] = ACTIONS(17),
    [anon_sym_o_PLUS_RPAREN] = ACTIONS(17),
    [anon_sym_GT_LT] = ACTIONS(19),
    [anon_sym_GT] = ACTIONS(21),
    [anon_sym_LT] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [sym_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 20,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      anon_sym_GT_LPAREN,
    ACTIONS(32), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      anon_sym_GT_LT_GT,
    ACTIONS(47), 1,
      anon_sym_GT_LT,
    ACTIONS(50), 1,
      anon_sym_GT,
    ACTIONS(53), 1,
      anon_sym_LT,
    ACTIONS(56), 1,
      anon_sym_LBRACK,
    STATE(26), 1,
      sym_addition,
    STATE(33), 1,
      sym_positive_ident,
    STATE(79), 1,
      sym_right_sub,
    STATE(90), 1,
      sym_happy_fysh,
    STATE(91), 1,
      sym_loopy_fysh,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(35), 2,
      anon_sym_LT_TILDE,
      anon_sym_U0001f991,
    ACTIONS(38), 2,
      anon_sym_GT_LT_BSLASH_SLASH_GT,
      anon_sym_LT_BSLASH_SLASH_GT_LT,
    ACTIONS(44), 2,
      anon_sym_LPAREN_PLUSo,
      anon_sym_o_PLUS_RPAREN,
    STATE(2), 7,
      sym_subroutine,
      sym__statement,
      sym__simple_statement,
      sym_block,
      sym_loop_statement,
      sym_if_statement,
      aux_sym_source_file_repeat1,
    STATE(111), 7,
      sym_return_statement,
      sym_break_statement,
      sym_anchor_statement,
      sym_expression_statement,
      sym_inc_statement,
      sym_dec_statement,
      sym_assignment_statement,
    STATE(18), 8,
      sym_grilled_fysh,
      sym__expression,
      sym_fysh_bowl,
      sym_positive_literal,
      sym_negative_ident,
      sym_negative_literal,
      sym_binary_expression,
      sym_call_expression,
  [84] = 20,
    ACTIONS(7), 1,
      anon_sym_GT_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_GT_LT_GT,
    ACTIONS(19), 1,
      anon_sym_GT_LT,
    ACTIONS(21), 1,
      anon_sym_GT,
    ACTIONS(23), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    STATE(26), 1,
      sym_addition,
    STATE(33), 1,
      sym_positive_ident,
    STATE(79), 1,
      sym_right_sub,
    STATE(90), 1,
      sym_happy_fysh,
    STATE(91), 1,
      sym_loopy_fysh,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(11), 2,
      anon_sym_LT_TILDE,
      anon_sym_U0001f991,
    ACTIONS(13), 2,
      anon_sym_GT_LT_BSLASH_SLASH_GT,
      anon_sym_LT_BSLASH_SLASH_GT_LT,
    ACTIONS(17), 2,
      anon_sym_LPAREN_PLUSo,
      anon_sym_o_PLUS_RPAREN,
    STATE(2), 7,
      sym_subroutine,
      sym__statement,
      sym__simple_statement,
      sym_block,
      sym_loop_statement,
      sym_if_statement,
      aux_sym_source_file_repeat1,
    STATE(111), 7,
      sym_return_statement,
      sym_break_statement,
      sym_anchor_statement,
      sym_expression_statement,
      sym_inc_statement,
      sym_dec_statement,
      sym_assignment_statement,
    STATE(18), 8,
      sym_grilled_fysh,
      sym__expression,
      sym_fysh_bowl,
      sym_positive_literal,
      sym_negative_ident,
      sym_negative_literal,
      sym_binary_expression,
      sym_call_expression,
  [168] = 7,
    STATE(26), 1,
      sym_addition,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(65), 2,
      anon_sym_CARET,
      anon_sym_PIPE,
    ACTIONS(63), 6,
      anon_sym_LPAREN,
      anon_sym_TILDE,
      anon_sym_GT_LT,
      anon_sym_LT,
      anon_sym_o_TILDE,
      anon_sym_TILDEo,
    ACTIONS(67), 7,
      anon_sym_LT3,
      anon_sym_u2661,
      anon_sym_LT_SLASH3,
      anon_sym_U0001f494,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    STATE(5), 9,
      sym_grilled_fysh,
      sym__expression,
      sym_fysh_bowl,
      sym_positive_ident,
      sym_positive_literal,
      sym_negative_ident,
      sym_negative_literal,
      sym_binary_expression,
      sym_call_expression,
    ACTIONS(61), 14,
      anon_sym_GT_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LPAREN_PLUSo,
      anon_sym_o_PLUS_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ_EQ,
      anon_sym_u2248u2248,
      anon_sym_TILDE_EQ,
      anon_sym_TILDEu2248,
      anon_sym_o_TILDE_EQ,
      anon_sym_o_TILDEu2248,
      anon_sym_TILDEo_EQ,
      anon_sym_TILDEou2248,
  [224] = 14,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(74), 1,
      anon_sym_TILDE,
    ACTIONS(78), 1,
      anon_sym_GT_LT,
    ACTIONS(81), 1,
      anon_sym_LT,
    ACTIONS(84), 1,
      anon_sym_LBRACK,
    STATE(26), 1,
      sym_addition,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(65), 2,
      anon_sym_CARET,
      anon_sym_PIPE,
    ACTIONS(76), 2,
      anon_sym_LPAREN_PLUSo,
      anon_sym_o_PLUS_RPAREN,
    ACTIONS(89), 2,
      anon_sym_o_TILDE,
      anon_sym_TILDEo,
    ACTIONS(69), 3,
      anon_sym_GT_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(67), 7,
      anon_sym_LT3,
      anon_sym_u2661,
      anon_sym_LT_SLASH3,
      anon_sym_U0001f494,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(87), 8,
      anon_sym_EQ_EQ,
      anon_sym_u2248u2248,
      anon_sym_TILDE_EQ,
      anon_sym_TILDEu2248,
      anon_sym_o_TILDE_EQ,
      anon_sym_o_TILDEu2248,
      anon_sym_TILDEo_EQ,
      anon_sym_TILDEou2248,
    STATE(5), 9,
      sym_grilled_fysh,
      sym__expression,
      sym_fysh_bowl,
      sym_positive_ident,
      sym_positive_literal,
      sym_negative_ident,
      sym_negative_literal,
      sym_binary_expression,
      sym_call_expression,
  [294] = 5,
    STATE(26), 1,
      sym_addition,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(63), 6,
      anon_sym_LPAREN,
      anon_sym_TILDE,
      anon_sym_GT_LT,
      anon_sym_LT,
      anon_sym_o_TILDE,
      anon_sym_TILDEo,
    STATE(5), 9,
      sym_grilled_fysh,
      sym__expression,
      sym_fysh_bowl,
      sym_positive_ident,
      sym_positive_literal,
      sym_negative_ident,
      sym_negative_literal,
      sym_binary_expression,
      sym_call_expression,
    ACTIONS(61), 23,
      anon_sym_GT_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LPAREN_PLUSo,
      anon_sym_o_PLUS_RPAREN,
      anon_sym_CARET,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LT3,
      anon_sym_u2661,
      anon_sym_LT_SLASH3,
      anon_sym_U0001f494,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_u2248u2248,
      anon_sym_TILDE_EQ,
      anon_sym_TILDEu2248,
      anon_sym_o_TILDE_EQ,
      anon_sym_o_TILDEu2248,
      anon_sym_TILDEo_EQ,
      anon_sym_TILDEou2248,
  [346] = 6,
    STATE(26), 1,
      sym_addition,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(63), 6,
      anon_sym_LPAREN,
      anon_sym_TILDE,
      anon_sym_GT_LT,
      anon_sym_LT,
      anon_sym_o_TILDE,
      anon_sym_TILDEo,
    ACTIONS(67), 7,
      anon_sym_LT3,
      anon_sym_u2661,
      anon_sym_LT_SLASH3,
      anon_sym_U0001f494,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    STATE(5), 9,
      sym_grilled_fysh,
      sym__expression,
      sym_fysh_bowl,
      sym_positive_ident,
      sym_positive_literal,
      sym_negative_ident,
      sym_negative_literal,
      sym_binary_expression,
      sym_call_expression,
    ACTIONS(61), 16,
      anon_sym_GT_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LPAREN_PLUSo,
      anon_sym_o_PLUS_RPAREN,
      anon_sym_CARET,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_u2248u2248,
      anon_sym_TILDE_EQ,
      anon_sym_TILDEu2248,
      anon_sym_o_TILDE_EQ,
      anon_sym_o_TILDEu2248,
      anon_sym_TILDEo_EQ,
      anon_sym_TILDEou2248,
  [400] = 9,
    STATE(26), 1,
      sym_addition,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(65), 2,
      anon_sym_CARET,
      anon_sym_PIPE,
    ACTIONS(89), 2,
      anon_sym_o_TILDE,
      anon_sym_TILDEo,
    ACTIONS(63), 4,
      anon_sym_LPAREN,
      anon_sym_TILDE,
      anon_sym_GT_LT,
      anon_sym_LT,
    ACTIONS(61), 6,
      anon_sym_GT_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LPAREN_PLUSo,
      anon_sym_o_PLUS_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(67), 7,
      anon_sym_LT3,
      anon_sym_u2661,
      anon_sym_LT_SLASH3,
      anon_sym_U0001f494,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(87), 8,
      anon_sym_EQ_EQ,
      anon_sym_u2248u2248,
      anon_sym_TILDE_EQ,
      anon_sym_TILDEu2248,
      anon_sym_o_TILDE_EQ,
      anon_sym_o_TILDEu2248,
      anon_sym_TILDEo_EQ,
      anon_sym_TILDEou2248,
    STATE(5), 9,
      sym_grilled_fysh,
      sym__expression,
      sym_fysh_bowl,
      sym_positive_ident,
      sym_positive_literal,
      sym_negative_ident,
      sym_negative_literal,
      sym_binary_expression,
      sym_call_expression,
  [460] = 18,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_GT_LT,
    ACTIONS(21), 1,
      anon_sym_GT,
    ACTIONS(23), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(91), 1,
      anon_sym_GT_LT_GT,
    ACTIONS(93), 1,
      anon_sym_LT_GT_LT,
    STATE(26), 1,
      sym_addition,
    STATE(33), 1,
      sym_positive_ident,
    STATE(96), 1,
      sym_loopy_fysh,
    STATE(98), 1,
      sym_happy_fysh,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(11), 2,
      anon_sym_LT_TILDE,
      anon_sym_U0001f991,
    ACTIONS(13), 2,
      anon_sym_GT_LT_BSLASH_SLASH_GT,
      anon_sym_LT_BSLASH_SLASH_GT_LT,
    ACTIONS(17), 2,
      anon_sym_LPAREN_PLUSo,
      anon_sym_o_PLUS_RPAREN,
    STATE(11), 6,
      sym__statement,
      sym__simple_statement,
      sym_block,
      sym_loop_statement,
      sym_if_statement,
      aux_sym__statement_list_repeat1,
    STATE(123), 7,
      sym_return_statement,
      sym_break_statement,
      sym_anchor_statement,
      sym_expression_statement,
      sym_inc_statement,
      sym_dec_statement,
      sym_assignment_statement,
    STATE(18), 8,
      sym_grilled_fysh,
      sym__expression,
      sym_fysh_bowl,
      sym_positive_literal,
      sym_negative_ident,
      sym_negative_literal,
      sym_binary_expression,
      sym_call_expression,
  [537] = 19,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_GT_LT,
    ACTIONS(21), 1,
      anon_sym_GT,
    ACTIONS(23), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(91), 1,
      anon_sym_GT_LT_GT,
    ACTIONS(95), 1,
      anon_sym_LT_GT_LT,
    STATE(26), 1,
      sym_addition,
    STATE(33), 1,
      sym_positive_ident,
    STATE(96), 1,
      sym_loopy_fysh,
    STATE(98), 1,
      sym_happy_fysh,
    STATE(125), 1,
      sym__statement_list,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(11), 2,
      anon_sym_LT_TILDE,
      anon_sym_U0001f991,
    ACTIONS(13), 2,
      anon_sym_GT_LT_BSLASH_SLASH_GT,
      anon_sym_LT_BSLASH_SLASH_GT_LT,
    ACTIONS(17), 2,
      anon_sym_LPAREN_PLUSo,
      anon_sym_o_PLUS_RPAREN,
    STATE(9), 5,
      sym__statement,
      sym__simple_statement,
      sym_block,
      sym_loop_statement,
      sym_if_statement,
    STATE(123), 7,
      sym_return_statement,
      sym_break_statement,
      sym_anchor_statement,
      sym_expression_statement,
      sym_inc_statement,
      sym_dec_statement,
      sym_assignment_statement,
    STATE(18), 8,
      sym_grilled_fysh,
      sym__expression,
      sym_fysh_bowl,
      sym_positive_literal,
      sym_negative_ident,
      sym_negative_literal,
      sym_binary_expression,
      sym_call_expression,
  [616] = 18,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_GT_LT,
    ACTIONS(21), 1,
      anon_sym_GT,
    ACTIONS(23), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(91), 1,
      anon_sym_GT_LT_GT,
    ACTIONS(97), 1,
      anon_sym_LT_GT_LT,
    STATE(26), 1,
      sym_addition,
    STATE(33), 1,
      sym_positive_ident,
    STATE(96), 1,
      sym_loopy_fysh,
    STATE(98), 1,
      sym_happy_fysh,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(11), 2,
      anon_sym_LT_TILDE,
      anon_sym_U0001f991,
    ACTIONS(13), 2,
      anon_sym_GT_LT_BSLASH_SLASH_GT,
      anon_sym_LT_BSLASH_SLASH_GT_LT,
    ACTIONS(17), 2,
      anon_sym_LPAREN_PLUSo,
      anon_sym_o_PLUS_RPAREN,
    STATE(12), 6,
      sym__statement,
      sym__simple_statement,
      sym_block,
      sym_loop_statement,
      sym_if_statement,
      aux_sym__statement_list_repeat1,
    STATE(123), 7,
      sym_return_statement,
      sym_break_statement,
      sym_anchor_statement,
      sym_expression_statement,
      sym_inc_statement,
      sym_dec_statement,
      sym_assignment_statement,
    STATE(18), 8,
      sym_grilled_fysh,
      sym__expression,
      sym_fysh_bowl,
      sym_positive_literal,
      sym_negative_ident,
      sym_negative_literal,
      sym_binary_expression,
      sym_call_expression,
  [693] = 18,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(108), 1,
      anon_sym_GT_LT_GT,
    ACTIONS(111), 1,
      anon_sym_LT_GT_LT,
    ACTIONS(116), 1,
      anon_sym_GT_LT,
    ACTIONS(119), 1,
      anon_sym_GT,
    ACTIONS(122), 1,
      anon_sym_LT,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    STATE(26), 1,
      sym_addition,
    STATE(33), 1,
      sym_positive_ident,
    STATE(96), 1,
      sym_loopy_fysh,
    STATE(98), 1,
      sym_happy_fysh,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(102), 2,
      anon_sym_LT_TILDE,
      anon_sym_U0001f991,
    ACTIONS(105), 2,
      anon_sym_GT_LT_BSLASH_SLASH_GT,
      anon_sym_LT_BSLASH_SLASH_GT_LT,
    ACTIONS(113), 2,
      anon_sym_LPAREN_PLUSo,
      anon_sym_o_PLUS_RPAREN,
    STATE(12), 6,
      sym__statement,
      sym__simple_statement,
      sym_block,
      sym_loop_statement,
      sym_if_statement,
      aux_sym__statement_list_repeat1,
    STATE(123), 7,
      sym_return_statement,
      sym_break_statement,
      sym_anchor_statement,
      sym_expression_statement,
      sym_inc_statement,
      sym_dec_statement,
      sym_assignment_statement,
    STATE(18), 8,
      sym_grilled_fysh,
      sym__expression,
      sym_fysh_bowl,
      sym_positive_literal,
      sym_negative_ident,
      sym_negative_literal,
      sym_binary_expression,
      sym_call_expression,
  [770] = 19,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_GT_LT,
    ACTIONS(21), 1,
      anon_sym_GT,
    ACTIONS(23), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(91), 1,
      anon_sym_GT_LT_GT,
    ACTIONS(128), 1,
      anon_sym_LT_GT_LT,
    STATE(26), 1,
      sym_addition,
    STATE(33), 1,
      sym_positive_ident,
    STATE(96), 1,
      sym_loopy_fysh,
    STATE(98), 1,
      sym_happy_fysh,
    STATE(118), 1,
      sym__statement_list,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(11), 2,
      anon_sym_LT_TILDE,
      anon_sym_U0001f991,
    ACTIONS(13), 2,
      anon_sym_GT_LT_BSLASH_SLASH_GT,
      anon_sym_LT_BSLASH_SLASH_GT_LT,
    ACTIONS(17), 2,
      anon_sym_LPAREN_PLUSo,
      anon_sym_o_PLUS_RPAREN,
    STATE(9), 5,
      sym__statement,
      sym__simple_statement,
      sym_block,
      sym_loop_statement,
      sym_if_statement,
    STATE(123), 7,
      sym_return_statement,
      sym_break_statement,
      sym_anchor_statement,
      sym_expression_statement,
      sym_inc_statement,
      sym_dec_statement,
      sym_assignment_statement,
    STATE(18), 8,
      sym_grilled_fysh,
      sym__expression,
      sym_fysh_bowl,
      sym_positive_literal,
      sym_negative_ident,
      sym_negative_literal,
      sym_binary_expression,
      sym_call_expression,
  [849] = 10,
    STATE(26), 1,
      sym_addition,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(65), 2,
      anon_sym_CARET,
      anon_sym_PIPE,
    ACTIONS(76), 2,
      anon_sym_LPAREN_PLUSo,
      anon_sym_o_PLUS_RPAREN,
    ACTIONS(89), 2,
      anon_sym_o_TILDE,
      anon_sym_TILDEo,
    ACTIONS(130), 3,
      anon_sym_GT_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(132), 3,
      anon_sym_LPAREN,
      anon_sym_GT_LT,
      anon_sym_LT,
    ACTIONS(67), 7,
      anon_sym_LT3,
      anon_sym_u2661,
      anon_sym_LT_SLASH3,
      anon_sym_U0001f494,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(87), 8,
      anon_sym_EQ_EQ,
      anon_sym_u2248u2248,
      anon_sym_TILDE_EQ,
      anon_sym_TILDEu2248,
      anon_sym_o_TILDE_EQ,
      anon_sym_o_TILDEu2248,
      anon_sym_TILDEo_EQ,
      anon_sym_TILDEou2248,
    STATE(5), 9,
      sym_grilled_fysh,
      sym__expression,
      sym_fysh_bowl,
      sym_positive_ident,
      sym_positive_literal,
      sym_negative_ident,
      sym_negative_literal,
      sym_binary_expression,
      sym_call_expression,
  [909] = 13,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(134), 1,
      anon_sym_RPAREN,
    ACTIONS(136), 1,
      anon_sym_GT_LT,
    ACTIONS(138), 1,
      anon_sym_LT,
    STATE(26), 1,
      sym_addition,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(65), 2,
      anon_sym_CARET,
      anon_sym_PIPE,
    ACTIONS(76), 2,
      anon_sym_LPAREN_PLUSo,
      anon_sym_o_PLUS_RPAREN,
    ACTIONS(89), 2,
      anon_sym_o_TILDE,
      anon_sym_TILDEo,
    ACTIONS(67), 7,
      anon_sym_LT3,
      anon_sym_u2661,
      anon_sym_LT_SLASH3,
      anon_sym_U0001f494,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(87), 8,
      anon_sym_EQ_EQ,
      anon_sym_u2248u2248,
      anon_sym_TILDE_EQ,
      anon_sym_TILDEu2248,
      anon_sym_o_TILDE_EQ,
      anon_sym_o_TILDEu2248,
      anon_sym_TILDEo_EQ,
      anon_sym_TILDEou2248,
    STATE(5), 9,
      sym_grilled_fysh,
      sym__expression,
      sym_fysh_bowl,
      sym_positive_ident,
      sym_positive_literal,
      sym_negative_ident,
      sym_negative_literal,
      sym_binary_expression,
      sym_call_expression,
  [974] = 13,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(136), 1,
      anon_sym_GT_LT,
    ACTIONS(138), 1,
      anon_sym_LT,
    ACTIONS(140), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      sym_addition,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(65), 2,
      anon_sym_CARET,
      anon_sym_PIPE,
    ACTIONS(76), 2,
      anon_sym_LPAREN_PLUSo,
      anon_sym_o_PLUS_RPAREN,
    ACTIONS(89), 2,
      anon_sym_o_TILDE,
      anon_sym_TILDEo,
    ACTIONS(67), 7,
      anon_sym_LT3,
      anon_sym_u2661,
      anon_sym_LT_SLASH3,
      anon_sym_U0001f494,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(87), 8,
      anon_sym_EQ_EQ,
      anon_sym_u2248u2248,
      anon_sym_TILDE_EQ,
      anon_sym_TILDEu2248,
      anon_sym_o_TILDE_EQ,
      anon_sym_o_TILDEu2248,
      anon_sym_TILDEo_EQ,
      anon_sym_TILDEou2248,
    STATE(5), 9,
      sym_grilled_fysh,
      sym__expression,
      sym_fysh_bowl,
      sym_positive_ident,
      sym_positive_literal,
      sym_negative_ident,
      sym_negative_literal,
      sym_binary_expression,
      sym_call_expression,
  [1039] = 13,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(136), 1,
      anon_sym_GT_LT,
    ACTIONS(138), 1,
      anon_sym_LT,
    ACTIONS(142), 1,
      anon_sym_TILDE,
    STATE(26), 1,
      sym_addition,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(65), 2,
      anon_sym_CARET,
      anon_sym_PIPE,
    ACTIONS(76), 2,
      anon_sym_LPAREN_PLUSo,
      anon_sym_o_PLUS_RPAREN,
    ACTIONS(89), 2,
      anon_sym_o_TILDE,
      anon_sym_TILDEo,
    ACTIONS(67), 7,
      anon_sym_LT3,
      anon_sym_u2661,
      anon_sym_LT_SLASH3,
      anon_sym_U0001f494,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(87), 8,
      anon_sym_EQ_EQ,
      anon_sym_u2248u2248,
      anon_sym_TILDE_EQ,
      anon_sym_TILDEu2248,
      anon_sym_o_TILDE_EQ,
      anon_sym_o_TILDEu2248,
      anon_sym_TILDEo_EQ,
      anon_sym_TILDEou2248,
    STATE(5), 9,
      sym_grilled_fysh,
      sym__expression,
      sym_fysh_bowl,
      sym_positive_ident,
      sym_positive_literal,
      sym_negative_ident,
      sym_negative_literal,
      sym_binary_expression,
      sym_call_expression,
  [1104] = 13,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(136), 1,
      anon_sym_GT_LT,
    ACTIONS(138), 1,
      anon_sym_LT,
    ACTIONS(144), 1,
      anon_sym_TILDE,
    STATE(26), 1,
      sym_addition,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(65), 2,
      anon_sym_CARET,
      anon_sym_PIPE,
    ACTIONS(76), 2,
      anon_sym_LPAREN_PLUSo,
      anon_sym_o_PLUS_RPAREN,
    ACTIONS(89), 2,
      anon_sym_o_TILDE,
      anon_sym_TILDEo,
    ACTIONS(67), 7,
      anon_sym_LT3,
      anon_sym_u2661,
      anon_sym_LT_SLASH3,
      anon_sym_U0001f494,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(87), 8,
      anon_sym_EQ_EQ,
      anon_sym_u2248u2248,
      anon_sym_TILDE_EQ,
      anon_sym_TILDEu2248,
      anon_sym_o_TILDE_EQ,
      anon_sym_o_TILDEu2248,
      anon_sym_TILDEo_EQ,
      anon_sym_TILDEou2248,
    STATE(5), 9,
      sym_grilled_fysh,
      sym__expression,
      sym_fysh_bowl,
      sym_positive_ident,
      sym_positive_literal,
      sym_negative_ident,
      sym_negative_literal,
      sym_binary_expression,
      sym_call_expression,
  [1169] = 13,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(136), 1,
      anon_sym_GT_LT,
    ACTIONS(138), 1,
      anon_sym_LT,
    ACTIONS(146), 1,
      anon_sym_TILDE,
    STATE(26), 1,
      sym_addition,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(65), 2,
      anon_sym_CARET,
      anon_sym_PIPE,
    ACTIONS(76), 2,
      anon_sym_LPAREN_PLUSo,
      anon_sym_o_PLUS_RPAREN,
    ACTIONS(89), 2,
      anon_sym_o_TILDE,
      anon_sym_TILDEo,
    ACTIONS(67), 7,
      anon_sym_LT3,
      anon_sym_u2661,
      anon_sym_LT_SLASH3,
      anon_sym_U0001f494,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(87), 8,
      anon_sym_EQ_EQ,
      anon_sym_u2248u2248,
      anon_sym_TILDE_EQ,
      anon_sym_TILDEu2248,
      anon_sym_o_TILDE_EQ,
      anon_sym_o_TILDEu2248,
      anon_sym_TILDEo_EQ,
      anon_sym_TILDEou2248,
    STATE(5), 9,
      sym_grilled_fysh,
      sym__expression,
      sym_fysh_bowl,
      sym_positive_ident,
      sym_positive_literal,
      sym_negative_ident,
      sym_negative_literal,
      sym_binary_expression,
      sym_call_expression,
  [1234] = 13,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(136), 1,
      anon_sym_GT_LT,
    ACTIONS(138), 1,
      anon_sym_LT,
    ACTIONS(148), 1,
      anon_sym_TILDE,
    STATE(26), 1,
      sym_addition,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(65), 2,
      anon_sym_CARET,
      anon_sym_PIPE,
    ACTIONS(76), 2,
      anon_sym_LPAREN_PLUSo,
      anon_sym_o_PLUS_RPAREN,
    ACTIONS(89), 2,
      anon_sym_o_TILDE,
      anon_sym_TILDEo,
    ACTIONS(67), 7,
      anon_sym_LT3,
      anon_sym_u2661,
      anon_sym_LT_SLASH3,
      anon_sym_U0001f494,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(87), 8,
      anon_sym_EQ_EQ,
      anon_sym_u2248u2248,
      anon_sym_TILDE_EQ,
      anon_sym_TILDEu2248,
      anon_sym_o_TILDE_EQ,
      anon_sym_o_TILDEu2248,
      anon_sym_TILDEo_EQ,
      anon_sym_TILDEou2248,
    STATE(5), 9,
      sym_grilled_fysh,
      sym__expression,
      sym_fysh_bowl,
      sym_positive_ident,
      sym_positive_literal,
      sym_negative_ident,
      sym_negative_literal,
      sym_binary_expression,
      sym_call_expression,
  [1299] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(152), 8,
      anon_sym_LPAREN,
      anon_sym_TILDE,
      anon_sym_GT_LT,
      anon_sym_LT,
      anon_sym_u2248,
      anon_sym_EQ,
      anon_sym_o_TILDE,
      anon_sym_TILDEo,
    ACTIONS(150), 23,
      anon_sym_GT_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LPAREN_PLUSo,
      anon_sym_o_PLUS_RPAREN,
      anon_sym_CARET,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LT3,
      anon_sym_u2661,
      anon_sym_LT_SLASH3,
      anon_sym_U0001f494,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_u2248u2248,
      anon_sym_TILDE_EQ,
      anon_sym_TILDEu2248,
      anon_sym_o_TILDE_EQ,
      anon_sym_o_TILDEu2248,
      anon_sym_TILDEo_EQ,
      anon_sym_TILDEou2248,
  [1339] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(156), 6,
      anon_sym_LPAREN,
      anon_sym_TILDE,
      anon_sym_GT_LT,
      anon_sym_LT,
      anon_sym_o_TILDE,
      anon_sym_TILDEo,
    ACTIONS(154), 23,
      anon_sym_GT_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LPAREN_PLUSo,
      anon_sym_o_PLUS_RPAREN,
      anon_sym_CARET,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LT3,
      anon_sym_u2661,
      anon_sym_LT_SLASH3,
      anon_sym_U0001f494,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_u2248u2248,
      anon_sym_TILDE_EQ,
      anon_sym_TILDEu2248,
      anon_sym_o_TILDE_EQ,
      anon_sym_o_TILDEu2248,
      anon_sym_TILDEo_EQ,
      anon_sym_TILDEou2248,
  [1377] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(160), 6,
      anon_sym_LPAREN,
      anon_sym_TILDE,
      anon_sym_GT_LT,
      anon_sym_LT,
      anon_sym_o_TILDE,
      anon_sym_TILDEo,
    ACTIONS(158), 23,
      anon_sym_GT_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LPAREN_PLUSo,
      anon_sym_o_PLUS_RPAREN,
      anon_sym_CARET,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LT3,
      anon_sym_u2661,
      anon_sym_LT_SLASH3,
      anon_sym_U0001f494,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_u2248u2248,
      anon_sym_TILDE_EQ,
      anon_sym_TILDEu2248,
      anon_sym_o_TILDE_EQ,
      anon_sym_o_TILDEu2248,
      anon_sym_TILDEo_EQ,
      anon_sym_TILDEou2248,
  [1415] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(164), 6,
      anon_sym_LPAREN,
      anon_sym_TILDE,
      anon_sym_GT_LT,
      anon_sym_LT,
      anon_sym_o_TILDE,
      anon_sym_TILDEo,
    ACTIONS(162), 23,
      anon_sym_GT_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LPAREN_PLUSo,
      anon_sym_o_PLUS_RPAREN,
      anon_sym_CARET,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LT3,
      anon_sym_u2661,
      anon_sym_LT_SLASH3,
      anon_sym_U0001f494,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_u2248u2248,
      anon_sym_TILDE_EQ,
      anon_sym_TILDEu2248,
      anon_sym_o_TILDE_EQ,
      anon_sym_o_TILDEu2248,
      anon_sym_TILDEo_EQ,
      anon_sym_TILDEou2248,
  [1453] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(168), 6,
      anon_sym_LPAREN,
      anon_sym_TILDE,
      anon_sym_GT_LT,
      anon_sym_LT,
      anon_sym_o_TILDE,
      anon_sym_TILDEo,
    ACTIONS(166), 23,
      anon_sym_GT_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LPAREN_PLUSo,
      anon_sym_o_PLUS_RPAREN,
      anon_sym_CARET,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LT3,
      anon_sym_u2661,
      anon_sym_LT_SLASH3,
      anon_sym_U0001f494,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_u2248u2248,
      anon_sym_TILDE_EQ,
      anon_sym_TILDEu2248,
      anon_sym_o_TILDE_EQ,
      anon_sym_o_TILDEu2248,
      anon_sym_TILDEo_EQ,
      anon_sym_TILDEou2248,
  [1491] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(172), 6,
      anon_sym_LPAREN,
      anon_sym_TILDE,
      anon_sym_GT_LT,
      anon_sym_LT,
      anon_sym_o_TILDE,
      anon_sym_TILDEo,
    ACTIONS(170), 23,
      anon_sym_GT_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LPAREN_PLUSo,
      anon_sym_o_PLUS_RPAREN,
      anon_sym_CARET,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LT3,
      anon_sym_u2661,
      anon_sym_LT_SLASH3,
      anon_sym_U0001f494,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_u2248u2248,
      anon_sym_TILDE_EQ,
      anon_sym_TILDEu2248,
      anon_sym_o_TILDE_EQ,
      anon_sym_o_TILDEu2248,
      anon_sym_TILDEo_EQ,
      anon_sym_TILDEou2248,
  [1529] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(176), 6,
      anon_sym_LPAREN,
      anon_sym_TILDE,
      anon_sym_GT_LT,
      anon_sym_LT,
      anon_sym_o_TILDE,
      anon_sym_TILDEo,
    ACTIONS(174), 23,
      anon_sym_GT_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LPAREN_PLUSo,
      anon_sym_o_PLUS_RPAREN,
      anon_sym_CARET,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LT3,
      anon_sym_u2661,
      anon_sym_LT_SLASH3,
      anon_sym_U0001f494,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_u2248u2248,
      anon_sym_TILDE_EQ,
      anon_sym_TILDEu2248,
      anon_sym_o_TILDE_EQ,
      anon_sym_o_TILDEu2248,
      anon_sym_TILDEo_EQ,
      anon_sym_TILDEou2248,
  [1567] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(180), 6,
      anon_sym_LPAREN,
      anon_sym_TILDE,
      anon_sym_GT_LT,
      anon_sym_LT,
      anon_sym_o_TILDE,
      anon_sym_TILDEo,
    ACTIONS(178), 23,
      anon_sym_GT_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LPAREN_PLUSo,
      anon_sym_o_PLUS_RPAREN,
      anon_sym_CARET,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LT3,
      anon_sym_u2661,
      anon_sym_LT_SLASH3,
      anon_sym_U0001f494,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_u2248u2248,
      anon_sym_TILDE_EQ,
      anon_sym_TILDEu2248,
      anon_sym_o_TILDE_EQ,
      anon_sym_o_TILDEu2248,
      anon_sym_TILDEo_EQ,
      anon_sym_TILDEou2248,
  [1605] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(184), 6,
      anon_sym_LPAREN,
      anon_sym_TILDE,
      anon_sym_GT_LT,
      anon_sym_LT,
      anon_sym_o_TILDE,
      anon_sym_TILDEo,
    ACTIONS(182), 23,
      anon_sym_GT_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LPAREN_PLUSo,
      anon_sym_o_PLUS_RPAREN,
      anon_sym_CARET,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LT3,
      anon_sym_u2661,
      anon_sym_LT_SLASH3,
      anon_sym_U0001f494,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_u2248u2248,
      anon_sym_TILDE_EQ,
      anon_sym_TILDEu2248,
      anon_sym_o_TILDE_EQ,
      anon_sym_o_TILDEu2248,
      anon_sym_TILDEo_EQ,
      anon_sym_TILDEou2248,
  [1643] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(188), 6,
      anon_sym_LPAREN,
      anon_sym_TILDE,
      anon_sym_GT_LT,
      anon_sym_LT,
      anon_sym_o_TILDE,
      anon_sym_TILDEo,
    ACTIONS(186), 23,
      anon_sym_GT_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LPAREN_PLUSo,
      anon_sym_o_PLUS_RPAREN,
      anon_sym_CARET,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LT3,
      anon_sym_u2661,
      anon_sym_LT_SLASH3,
      anon_sym_U0001f494,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_u2248u2248,
      anon_sym_TILDE_EQ,
      anon_sym_TILDEu2248,
      anon_sym_o_TILDE_EQ,
      anon_sym_o_TILDEu2248,
      anon_sym_TILDEo_EQ,
      anon_sym_TILDEou2248,
  [1681] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(192), 6,
      anon_sym_LPAREN,
      anon_sym_TILDE,
      anon_sym_GT_LT,
      anon_sym_LT,
      anon_sym_o_TILDE,
      anon_sym_TILDEo,
    ACTIONS(190), 23,
      anon_sym_GT_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LPAREN_PLUSo,
      anon_sym_o_PLUS_RPAREN,
      anon_sym_CARET,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LT3,
      anon_sym_u2661,
      anon_sym_LT_SLASH3,
      anon_sym_U0001f494,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_u2248u2248,
      anon_sym_TILDE_EQ,
      anon_sym_TILDEu2248,
      anon_sym_o_TILDE_EQ,
      anon_sym_o_TILDEu2248,
      anon_sym_TILDEo_EQ,
      anon_sym_TILDEou2248,
  [1719] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(196), 6,
      anon_sym_LPAREN,
      anon_sym_TILDE,
      anon_sym_GT_LT,
      anon_sym_LT,
      anon_sym_o_TILDE,
      anon_sym_TILDEo,
    ACTIONS(194), 23,
      anon_sym_GT_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LPAREN_PLUSo,
      anon_sym_o_PLUS_RPAREN,
      anon_sym_CARET,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LT3,
      anon_sym_u2661,
      anon_sym_LT_SLASH3,
      anon_sym_U0001f494,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_u2248u2248,
      anon_sym_TILDE_EQ,
      anon_sym_TILDEu2248,
      anon_sym_o_TILDE_EQ,
      anon_sym_o_TILDEu2248,
      anon_sym_TILDEo_EQ,
      anon_sym_TILDEou2248,
  [1757] = 4,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(202), 2,
      anon_sym_u2248,
      anon_sym_EQ,
    ACTIONS(198), 6,
      anon_sym_LPAREN,
      anon_sym_TILDE,
      anon_sym_GT_LT,
      anon_sym_LT,
      anon_sym_o_TILDE,
      anon_sym_TILDEo,
    ACTIONS(200), 20,
      anon_sym_LPAREN_PLUSo,
      anon_sym_o_PLUS_RPAREN,
      anon_sym_CARET,
      anon_sym_LBRACK,
      anon_sym_LT3,
      anon_sym_u2661,
      anon_sym_LT_SLASH3,
      anon_sym_U0001f494,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_u2248u2248,
      anon_sym_TILDE_EQ,
      anon_sym_TILDEu2248,
      anon_sym_o_TILDE_EQ,
      anon_sym_o_TILDEu2248,
      anon_sym_TILDEo_EQ,
      anon_sym_TILDEou2248,
  [1796] = 4,
    ACTIONS(204), 1,
      anon_sym_LT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(192), 5,
      anon_sym_LPAREN,
      anon_sym_TILDE,
      anon_sym_GT_LT,
      anon_sym_o_TILDE,
      anon_sym_TILDEo,
    ACTIONS(190), 20,
      anon_sym_LPAREN_PLUSo,
      anon_sym_o_PLUS_RPAREN,
      anon_sym_CARET,
      anon_sym_LBRACK,
      anon_sym_LT3,
      anon_sym_u2661,
      anon_sym_LT_SLASH3,
      anon_sym_U0001f494,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_u2248u2248,
      anon_sym_TILDE_EQ,
      anon_sym_TILDEu2248,
      anon_sym_o_TILDE_EQ,
      anon_sym_o_TILDEu2248,
      anon_sym_TILDEo_EQ,
      anon_sym_TILDEou2248,
  [1833] = 10,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(136), 1,
      anon_sym_GT_LT,
    ACTIONS(206), 1,
      anon_sym_GT_LPAREN,
    ACTIONS(208), 1,
      anon_sym_LPAREN,
    ACTIONS(210), 1,
      anon_sym_LT,
    STATE(26), 1,
      sym_addition,
    STATE(36), 1,
      aux_sym_call_expression_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(41), 2,
      sym_right_sub,
      sym_left_sub,
    STATE(14), 9,
      sym_grilled_fysh,
      sym__expression,
      sym_fysh_bowl,
      sym_positive_ident,
      sym_positive_literal,
      sym_negative_ident,
      sym_negative_literal,
      sym_binary_expression,
      sym_call_expression,
  [1874] = 10,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(136), 1,
      anon_sym_GT_LT,
    ACTIONS(206), 1,
      anon_sym_GT_LPAREN,
    ACTIONS(208), 1,
      anon_sym_LPAREN,
    ACTIONS(210), 1,
      anon_sym_LT,
    STATE(26), 1,
      sym_addition,
    STATE(37), 1,
      aux_sym_call_expression_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(40), 2,
      sym_right_sub,
      sym_left_sub,
    STATE(14), 9,
      sym_grilled_fysh,
      sym__expression,
      sym_fysh_bowl,
      sym_positive_ident,
      sym_positive_literal,
      sym_negative_ident,
      sym_negative_literal,
      sym_binary_expression,
      sym_call_expression,
  [1915] = 9,
    ACTIONS(214), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_GT_LT,
    ACTIONS(220), 1,
      anon_sym_LT,
    ACTIONS(223), 1,
      anon_sym_LBRACK,
    STATE(26), 1,
      sym_addition,
    STATE(37), 1,
      aux_sym_call_expression_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(212), 2,
      anon_sym_GT_LPAREN,
      anon_sym_RBRACK,
    STATE(14), 9,
      sym_grilled_fysh,
      sym__expression,
      sym_fysh_bowl,
      sym_positive_ident,
      sym_positive_literal,
      sym_negative_ident,
      sym_negative_literal,
      sym_binary_expression,
      sym_call_expression,
  [1953] = 9,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(136), 1,
      anon_sym_GT_LT,
    ACTIONS(210), 1,
      anon_sym_LT,
    ACTIONS(226), 1,
      anon_sym_LPAREN,
    ACTIONS(228), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      sym_addition,
    STATE(37), 1,
      aux_sym_call_expression_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(14), 9,
      sym_grilled_fysh,
      sym__expression,
      sym_fysh_bowl,
      sym_positive_ident,
      sym_positive_literal,
      sym_negative_ident,
      sym_negative_literal,
      sym_binary_expression,
      sym_call_expression,
  [1990] = 9,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(136), 1,
      anon_sym_GT_LT,
    ACTIONS(210), 1,
      anon_sym_LT,
    ACTIONS(226), 1,
      anon_sym_LPAREN,
    ACTIONS(230), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      sym_addition,
    STATE(37), 1,
      aux_sym_call_expression_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(14), 9,
      sym_grilled_fysh,
      sym__expression,
      sym_fysh_bowl,
      sym_positive_ident,
      sym_positive_literal,
      sym_negative_ident,
      sym_negative_literal,
      sym_binary_expression,
      sym_call_expression,
  [2027] = 9,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(136), 1,
      anon_sym_GT_LT,
    ACTIONS(210), 1,
      anon_sym_LT,
    ACTIONS(226), 1,
      anon_sym_LPAREN,
    ACTIONS(230), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      sym_addition,
    STATE(38), 1,
      aux_sym_call_expression_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(14), 9,
      sym_grilled_fysh,
      sym__expression,
      sym_fysh_bowl,
      sym_positive_ident,
      sym_positive_literal,
      sym_negative_ident,
      sym_negative_literal,
      sym_binary_expression,
      sym_call_expression,
  [2064] = 9,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(136), 1,
      anon_sym_GT_LT,
    ACTIONS(210), 1,
      anon_sym_LT,
    ACTIONS(226), 1,
      anon_sym_LPAREN,
    ACTIONS(232), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      sym_addition,
    STATE(39), 1,
      aux_sym_call_expression_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(14), 9,
      sym_grilled_fysh,
      sym__expression,
      sym_fysh_bowl,
      sym_positive_ident,
      sym_positive_literal,
      sym_negative_ident,
      sym_negative_literal,
      sym_binary_expression,
      sym_call_expression,
  [2101] = 5,
    ACTIONS(238), 1,
      anon_sym_GT_LT,
    STATE(72), 1,
      sym_dead_fysh,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(236), 3,
      anon_sym_LPAREN,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(234), 10,
      ts_builtin_sym_end,
      anon_sym_GT_LPAREN,
      anon_sym_LT_TILDE,
      anon_sym_U0001f991,
      anon_sym_GT_LT_BSLASH_SLASH_GT,
      anon_sym_LT_BSLASH_SLASH_GT_LT,
      anon_sym_GT_LT_GT,
      anon_sym_LPAREN_PLUSo,
      anon_sym_o_PLUS_RPAREN,
      anon_sym_LBRACK,
  [2129] = 8,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(136), 1,
      anon_sym_GT_LT,
    ACTIONS(210), 1,
      anon_sym_LT,
    ACTIONS(226), 1,
      anon_sym_LPAREN,
    ACTIONS(241), 1,
      sym__name,
    STATE(26), 1,
      sym_addition,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(15), 9,
      sym_grilled_fysh,
      sym__expression,
      sym_fysh_bowl,
      sym_positive_ident,
      sym_positive_literal,
      sym_negative_ident,
      sym_negative_literal,
      sym_binary_expression,
      sym_call_expression,
  [2163] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(245), 4,
      anon_sym_LPAREN,
      anon_sym_GT_LT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(243), 10,
      ts_builtin_sym_end,
      anon_sym_GT_LPAREN,
      anon_sym_LT_TILDE,
      anon_sym_U0001f991,
      anon_sym_GT_LT_BSLASH_SLASH_GT,
      anon_sym_LT_BSLASH_SLASH_GT_LT,
      anon_sym_GT_LT_GT,
      anon_sym_LPAREN_PLUSo,
      anon_sym_o_PLUS_RPAREN,
      anon_sym_LBRACK,
  [2186] = 7,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(136), 1,
      anon_sym_GT_LT,
    ACTIONS(210), 1,
      anon_sym_LT,
    ACTIONS(226), 1,
      anon_sym_LPAREN,
    STATE(26), 1,
      sym_addition,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(4), 9,
      sym_grilled_fysh,
      sym__expression,
      sym_fysh_bowl,
      sym_positive_ident,
      sym_positive_literal,
      sym_negative_ident,
      sym_negative_literal,
      sym_binary_expression,
      sym_call_expression,
  [2217] = 7,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(136), 1,
      anon_sym_GT_LT,
    ACTIONS(210), 1,
      anon_sym_LT,
    ACTIONS(226), 1,
      anon_sym_LPAREN,
    STATE(26), 1,
      sym_addition,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(19), 9,
      sym_grilled_fysh,
      sym__expression,
      sym_fysh_bowl,
      sym_positive_ident,
      sym_positive_literal,
      sym_negative_ident,
      sym_negative_literal,
      sym_binary_expression,
      sym_call_expression,
  [2248] = 5,
    ACTIONS(238), 1,
      anon_sym_GT_LT,
    STATE(71), 1,
      sym_dead_fysh,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(236), 3,
      anon_sym_LPAREN,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(234), 9,
      anon_sym_LT_TILDE,
      anon_sym_U0001f991,
      anon_sym_GT_LT_BSLASH_SLASH_GT,
      anon_sym_LT_BSLASH_SLASH_GT_LT,
      anon_sym_GT_LT_GT,
      anon_sym_LT_GT_LT,
      anon_sym_LPAREN_PLUSo,
      anon_sym_o_PLUS_RPAREN,
      anon_sym_LBRACK,
  [2275] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(249), 4,
      anon_sym_LPAREN,
      anon_sym_GT_LT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(247), 10,
      ts_builtin_sym_end,
      anon_sym_GT_LPAREN,
      anon_sym_LT_TILDE,
      anon_sym_U0001f991,
      anon_sym_GT_LT_BSLASH_SLASH_GT,
      anon_sym_LT_BSLASH_SLASH_GT_LT,
      anon_sym_GT_LT_GT,
      anon_sym_LPAREN_PLUSo,
      anon_sym_o_PLUS_RPAREN,
      anon_sym_LBRACK,
  [2298] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(253), 4,
      anon_sym_LPAREN,
      anon_sym_GT_LT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(251), 10,
      ts_builtin_sym_end,
      anon_sym_GT_LPAREN,
      anon_sym_LT_TILDE,
      anon_sym_U0001f991,
      anon_sym_GT_LT_BSLASH_SLASH_GT,
      anon_sym_LT_BSLASH_SLASH_GT_LT,
      anon_sym_GT_LT_GT,
      anon_sym_LPAREN_PLUSo,
      anon_sym_o_PLUS_RPAREN,
      anon_sym_LBRACK,
  [2321] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(257), 4,
      anon_sym_LPAREN,
      anon_sym_GT_LT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(255), 10,
      ts_builtin_sym_end,
      anon_sym_GT_LPAREN,
      anon_sym_LT_TILDE,
      anon_sym_U0001f991,
      anon_sym_GT_LT_BSLASH_SLASH_GT,
      anon_sym_LT_BSLASH_SLASH_GT_LT,
      anon_sym_GT_LT_GT,
      anon_sym_LPAREN_PLUSo,
      anon_sym_o_PLUS_RPAREN,
      anon_sym_LBRACK,
  [2344] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(261), 4,
      anon_sym_LPAREN,
      anon_sym_GT_LT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(259), 10,
      ts_builtin_sym_end,
      anon_sym_GT_LPAREN,
      anon_sym_LT_TILDE,
      anon_sym_U0001f991,
      anon_sym_GT_LT_BSLASH_SLASH_GT,
      anon_sym_LT_BSLASH_SLASH_GT_LT,
      anon_sym_GT_LT_GT,
      anon_sym_LPAREN_PLUSo,
      anon_sym_o_PLUS_RPAREN,
      anon_sym_LBRACK,
  [2367] = 7,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(136), 1,
      anon_sym_GT_LT,
    ACTIONS(210), 1,
      anon_sym_LT,
    ACTIONS(226), 1,
      anon_sym_LPAREN,
    STATE(26), 1,
      sym_addition,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(16), 9,
      sym_grilled_fysh,
      sym__expression,
      sym_fysh_bowl,
      sym_positive_ident,
      sym_positive_literal,
      sym_negative_ident,
      sym_negative_literal,
      sym_binary_expression,
      sym_call_expression,
  [2398] = 7,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(136), 1,
      anon_sym_GT_LT,
    ACTIONS(210), 1,
      anon_sym_LT,
    ACTIONS(226), 1,
      anon_sym_LPAREN,
    STATE(26), 1,
      sym_addition,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(15), 9,
      sym_grilled_fysh,
      sym__expression,
      sym_fysh_bowl,
      sym_positive_ident,
      sym_positive_literal,
      sym_negative_ident,
      sym_negative_literal,
      sym_binary_expression,
      sym_call_expression,
  [2429] = 7,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(136), 1,
      anon_sym_GT_LT,
    ACTIONS(210), 1,
      anon_sym_LT,
    ACTIONS(226), 1,
      anon_sym_LPAREN,
    STATE(26), 1,
      sym_addition,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(8), 9,
      sym_grilled_fysh,
      sym__expression,
      sym_fysh_bowl,
      sym_positive_ident,
      sym_positive_literal,
      sym_negative_ident,
      sym_negative_literal,
      sym_binary_expression,
      sym_call_expression,
  [2460] = 7,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(136), 1,
      anon_sym_GT_LT,
    ACTIONS(210), 1,
      anon_sym_LT,
    ACTIONS(226), 1,
      anon_sym_LPAREN,
    STATE(26), 1,
      sym_addition,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(7), 9,
      sym_grilled_fysh,
      sym__expression,
      sym_fysh_bowl,
      sym_positive_ident,
      sym_positive_literal,
      sym_negative_ident,
      sym_negative_literal,
      sym_binary_expression,
      sym_call_expression,
  [2491] = 7,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(136), 1,
      anon_sym_GT_LT,
    ACTIONS(210), 1,
      anon_sym_LT,
    ACTIONS(226), 1,
      anon_sym_LPAREN,
    STATE(26), 1,
      sym_addition,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(6), 9,
      sym_grilled_fysh,
      sym__expression,
      sym_fysh_bowl,
      sym_positive_ident,
      sym_positive_literal,
      sym_negative_ident,
      sym_negative_literal,
      sym_binary_expression,
      sym_call_expression,
  [2522] = 7,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(136), 1,
      anon_sym_GT_LT,
    ACTIONS(210), 1,
      anon_sym_LT,
    ACTIONS(226), 1,
      anon_sym_LPAREN,
    STATE(26), 1,
      sym_addition,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(20), 9,
      sym_grilled_fysh,
      sym__expression,
      sym_fysh_bowl,
      sym_positive_ident,
      sym_positive_literal,
      sym_negative_ident,
      sym_negative_literal,
      sym_binary_expression,
      sym_call_expression,
  [2553] = 7,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(136), 1,
      anon_sym_GT_LT,
    ACTIONS(210), 1,
      anon_sym_LT,
    ACTIONS(226), 1,
      anon_sym_LPAREN,
    STATE(26), 1,
      sym_addition,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(17), 9,
      sym_grilled_fysh,
      sym__expression,
      sym_fysh_bowl,
      sym_positive_ident,
      sym_positive_literal,
      sym_negative_ident,
      sym_negative_literal,
      sym_binary_expression,
      sym_call_expression,
  [2584] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(265), 4,
      anon_sym_LPAREN,
      anon_sym_GT_LT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(263), 10,
      ts_builtin_sym_end,
      anon_sym_GT_LPAREN,
      anon_sym_LT_TILDE,
      anon_sym_U0001f991,
      anon_sym_GT_LT_BSLASH_SLASH_GT,
      anon_sym_LT_BSLASH_SLASH_GT_LT,
      anon_sym_GT_LT_GT,
      anon_sym_LPAREN_PLUSo,
      anon_sym_o_PLUS_RPAREN,
      anon_sym_LBRACK,
  [2607] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(269), 4,
      anon_sym_LPAREN,
      anon_sym_GT_LT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(267), 10,
      ts_builtin_sym_end,
      anon_sym_GT_LPAREN,
      anon_sym_LT_TILDE,
      anon_sym_U0001f991,
      anon_sym_GT_LT_BSLASH_SLASH_GT,
      anon_sym_LT_BSLASH_SLASH_GT_LT,
      anon_sym_GT_LT_GT,
      anon_sym_LPAREN_PLUSo,
      anon_sym_o_PLUS_RPAREN,
      anon_sym_LBRACK,
  [2630] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(245), 4,
      anon_sym_LPAREN,
      anon_sym_GT_LT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(243), 9,
      anon_sym_LT_TILDE,
      anon_sym_U0001f991,
      anon_sym_GT_LT_BSLASH_SLASH_GT,
      anon_sym_LT_BSLASH_SLASH_GT_LT,
      anon_sym_GT_LT_GT,
      anon_sym_LT_GT_LT,
      anon_sym_LPAREN_PLUSo,
      anon_sym_o_PLUS_RPAREN,
      anon_sym_LBRACK,
  [2652] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(257), 4,
      anon_sym_LPAREN,
      anon_sym_GT_LT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(255), 9,
      anon_sym_LT_TILDE,
      anon_sym_U0001f991,
      anon_sym_GT_LT_BSLASH_SLASH_GT,
      anon_sym_LT_BSLASH_SLASH_GT_LT,
      anon_sym_GT_LT_GT,
      anon_sym_LT_GT_LT,
      anon_sym_LPAREN_PLUSo,
      anon_sym_o_PLUS_RPAREN,
      anon_sym_LBRACK,
  [2674] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(249), 4,
      anon_sym_LPAREN,
      anon_sym_GT_LT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(247), 9,
      anon_sym_LT_TILDE,
      anon_sym_U0001f991,
      anon_sym_GT_LT_BSLASH_SLASH_GT,
      anon_sym_LT_BSLASH_SLASH_GT_LT,
      anon_sym_GT_LT_GT,
      anon_sym_LT_GT_LT,
      anon_sym_LPAREN_PLUSo,
      anon_sym_o_PLUS_RPAREN,
      anon_sym_LBRACK,
  [2696] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(261), 4,
      anon_sym_LPAREN,
      anon_sym_GT_LT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(259), 9,
      anon_sym_LT_TILDE,
      anon_sym_U0001f991,
      anon_sym_GT_LT_BSLASH_SLASH_GT,
      anon_sym_LT_BSLASH_SLASH_GT_LT,
      anon_sym_GT_LT_GT,
      anon_sym_LT_GT_LT,
      anon_sym_LPAREN_PLUSo,
      anon_sym_o_PLUS_RPAREN,
      anon_sym_LBRACK,
  [2718] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(269), 4,
      anon_sym_LPAREN,
      anon_sym_GT_LT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(267), 9,
      anon_sym_LT_TILDE,
      anon_sym_U0001f991,
      anon_sym_GT_LT_BSLASH_SLASH_GT,
      anon_sym_LT_BSLASH_SLASH_GT_LT,
      anon_sym_GT_LT_GT,
      anon_sym_LT_GT_LT,
      anon_sym_LPAREN_PLUSo,
      anon_sym_o_PLUS_RPAREN,
      anon_sym_LBRACK,
  [2740] = 6,
    ACTIONS(271), 1,
      sym__name,
    ACTIONS(273), 1,
      aux_sym_positive_literal_token1,
    STATE(74), 1,
      aux_sym_positive_literal_repeat1,
    STATE(131), 1,
      sym_scales,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(275), 2,
      sym_one,
      sym_zero,
  [2761] = 6,
    ACTIONS(273), 1,
      aux_sym_positive_literal_token1,
    ACTIONS(277), 1,
      sym__name,
    STATE(74), 1,
      aux_sym_positive_literal_repeat1,
    STATE(131), 1,
      sym_scales,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(275), 2,
      sym_one,
      sym_zero,
  [2782] = 7,
    ACTIONS(279), 1,
      sym__name,
    ACTIONS(281), 1,
      anon_sym_LPAREN_LPAREN_LPAREN,
    ACTIONS(283), 1,
      anon_sym_POUND_POUND_POUND,
    ACTIONS(285), 1,
      sym_one,
    ACTIONS(287), 1,
      sym_zero,
    STATE(86), 1,
      sym_scales,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [2805] = 3,
    ACTIONS(291), 1,
      anon_sym_GT_LT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(289), 4,
      anon_sym_LPAREN,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [2819] = 3,
    ACTIONS(295), 1,
      anon_sym_GT_LT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(293), 4,
      anon_sym_LPAREN,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [2833] = 5,
    ACTIONS(91), 1,
      anon_sym_GT_LT_GT,
    ACTIONS(297), 1,
      anon_sym_GT_LT,
    STATE(98), 1,
      sym_happy_fysh,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(62), 2,
      sym_block,
      sym_if_statement,
  [2851] = 5,
    ACTIONS(15), 1,
      anon_sym_GT_LT_GT,
    ACTIONS(297), 1,
      anon_sym_GT_LT,
    STATE(90), 1,
      sym_happy_fysh,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(50), 2,
      sym_block,
      sym_if_statement,
  [2869] = 5,
    ACTIONS(299), 1,
      anon_sym_GT,
    ACTIONS(301), 1,
      aux_sym_positive_literal_token1,
    STATE(73), 1,
      aux_sym_positive_literal_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(304), 2,
      sym_one,
      sym_zero,
  [2887] = 5,
    ACTIONS(306), 1,
      aux_sym_positive_literal_token1,
    STATE(73), 1,
      aux_sym_positive_literal_repeat1,
    STATE(117), 1,
      sym_scales,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(275), 2,
      sym_one,
      sym_zero,
  [2905] = 5,
    ACTIONS(308), 1,
      anon_sym_GT,
    ACTIONS(310), 1,
      aux_sym_positive_literal_token1,
    STATE(75), 1,
      aux_sym_scales_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(312), 2,
      sym_one,
      sym_zero,
  [2923] = 5,
    ACTIONS(315), 1,
      anon_sym_GT,
    ACTIONS(317), 1,
      aux_sym_positive_literal_token1,
    STATE(77), 1,
      aux_sym_scales_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(319), 2,
      sym_one,
      sym_zero,
  [2941] = 5,
    ACTIONS(321), 1,
      anon_sym_GT,
    ACTIONS(323), 1,
      aux_sym_positive_literal_token1,
    STATE(75), 1,
      aux_sym_scales_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(325), 2,
      sym_one,
      sym_zero,
  [2959] = 5,
    ACTIONS(15), 1,
      anon_sym_GT_LT_GT,
    ACTIONS(327), 1,
      anon_sym_GT_LT,
    STATE(59), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(81), 2,
      sym_positive_ident,
      aux_sym_subroutine_repeat1,
  [2977] = 5,
    ACTIONS(15), 1,
      anon_sym_GT_LT_GT,
    ACTIONS(327), 1,
      anon_sym_GT_LT,
    STATE(49), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(78), 2,
      sym_positive_ident,
      aux_sym_subroutine_repeat1,
  [2995] = 5,
    ACTIONS(279), 1,
      sym__name,
    ACTIONS(283), 1,
      anon_sym_POUND_POUND_POUND,
    STATE(86), 1,
      sym_scales,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(285), 2,
      sym_one,
      sym_zero,
  [3013] = 4,
    ACTIONS(329), 1,
      anon_sym_GT_LT_GT,
    ACTIONS(331), 1,
      anon_sym_GT_LT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(81), 2,
      sym_positive_ident,
      aux_sym_subroutine_repeat1,
  [3028] = 4,
    ACTIONS(308), 1,
      anon_sym_GT_LT,
    STATE(82), 1,
      aux_sym_scales_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(334), 2,
      sym_one,
      sym_zero,
  [3043] = 4,
    ACTIONS(321), 1,
      anon_sym_GT_LT,
    STATE(82), 1,
      aux_sym_scales_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(337), 2,
      sym_one,
      sym_zero,
  [3058] = 4,
    ACTIONS(315), 1,
      anon_sym_GT_LT,
    STATE(83), 1,
      aux_sym_scales_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(339), 2,
      sym_one,
      sym_zero,
  [3073] = 4,
    ACTIONS(306), 1,
      aux_sym_positive_literal_token1,
    ACTIONS(341), 1,
      anon_sym_GT,
    STATE(73), 1,
      aux_sym_positive_literal_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [3087] = 4,
    ACTIONS(343), 1,
      anon_sym_GT,
    ACTIONS(345), 1,
      aux_sym_positive_literal_token1,
    STATE(85), 1,
      aux_sym_positive_literal_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [3101] = 3,
    ACTIONS(289), 1,
      anon_sym_GT_LT_GT,
    ACTIONS(291), 1,
      anon_sym_GT_LT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [3112] = 3,
    ACTIONS(15), 1,
      anon_sym_GT_LT_GT,
    STATE(42), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [3123] = 3,
    ACTIONS(15), 1,
      anon_sym_GT_LT_GT,
    STATE(44), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [3134] = 3,
    ACTIONS(347), 1,
      anon_sym_LBRACK,
    STATE(88), 1,
      sym_fysh_tank,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [3145] = 3,
    ACTIONS(347), 1,
      anon_sym_LBRACK,
    STATE(89), 1,
      sym_fysh_tank,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [3156] = 3,
    ACTIONS(91), 1,
      anon_sym_GT_LT_GT,
    STATE(61), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [3167] = 3,
    ACTIONS(91), 1,
      anon_sym_GT_LT_GT,
    STATE(47), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [3178] = 3,
    ACTIONS(349), 1,
      anon_sym_AT,
    ACTIONS(351), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [3189] = 3,
    ACTIONS(150), 1,
      anon_sym_GT_LT_GT,
    ACTIONS(152), 1,
      anon_sym_GT_LT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [3200] = 3,
    ACTIONS(347), 1,
      anon_sym_LBRACK,
    STATE(92), 1,
      sym_fysh_tank,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [3211] = 3,
    ACTIONS(353), 1,
      anon_sym_GT_LT_GT,
    ACTIONS(355), 1,
      anon_sym_GT_LT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [3222] = 3,
    ACTIONS(347), 1,
      anon_sym_LBRACK,
    STATE(93), 1,
      sym_fysh_tank,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [3233] = 2,
    ACTIONS(357), 1,
      anon_sym_GT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [3241] = 2,
    ACTIONS(359), 1,
      anon_sym_TILDE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [3249] = 2,
    ACTIONS(361), 1,
      anon_sym_GT_LT_GT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [3257] = 2,
    ACTIONS(363), 1,
      anon_sym_LPAREN_LPAREN_LPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [3265] = 2,
    ACTIONS(365), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [3273] = 2,
    ACTIONS(367), 1,
      anon_sym_GT_LT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [3281] = 2,
    ACTIONS(369), 1,
      anon_sym_STAR,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [3289] = 2,
    ACTIONS(371), 1,
      anon_sym_LPAREN_LPAREN_LPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [3297] = 2,
    ACTIONS(373), 1,
      anon_sym_TILDE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [3305] = 2,
    ACTIONS(375), 1,
      anon_sym_GT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [3313] = 2,
    ACTIONS(351), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [3321] = 2,
    ACTIONS(377), 1,
      anon_sym_TILDE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [3329] = 2,
    ACTIONS(379), 1,
      anon_sym_TILDE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [3337] = 2,
    ACTIONS(381), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [3345] = 2,
    ACTIONS(383), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [3353] = 2,
    ACTIONS(385), 1,
      sym__name,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [3361] = 2,
    ACTIONS(387), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [3369] = 2,
    ACTIONS(389), 1,
      anon_sym_RPAREN_LT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [3377] = 2,
    ACTIONS(391), 1,
      anon_sym_GT_LT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [3385] = 2,
    ACTIONS(393), 1,
      anon_sym_LT_GT_LT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [3393] = 2,
    ACTIONS(395), 1,
      anon_sym_GT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [3401] = 2,
    ACTIONS(397), 1,
      anon_sym_GT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [3409] = 2,
    ACTIONS(399), 1,
      sym__name,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [3417] = 2,
    ACTIONS(401), 1,
      anon_sym_GT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [3425] = 2,
    ACTIONS(403), 1,
      anon_sym_TILDE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [3433] = 2,
    ACTIONS(405), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [3441] = 2,
    ACTIONS(407), 1,
      anon_sym_LT_GT_LT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [3449] = 2,
    ACTIONS(409), 1,
      anon_sym_GT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [3457] = 2,
    ACTIONS(411), 1,
      anon_sym_GT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [3465] = 2,
    ACTIONS(413), 1,
      anon_sym_GT_LT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [3473] = 2,
    ACTIONS(415), 1,
      sym__name,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [3481] = 2,
    ACTIONS(417), 1,
      sym__name,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [3489] = 2,
    ACTIONS(419), 1,
      anon_sym_GT_LT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [3497] = 2,
    ACTIONS(421), 1,
      anon_sym_GT_LT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 84,
  [SMALL_STATE(4)] = 168,
  [SMALL_STATE(5)] = 224,
  [SMALL_STATE(6)] = 294,
  [SMALL_STATE(7)] = 346,
  [SMALL_STATE(8)] = 400,
  [SMALL_STATE(9)] = 460,
  [SMALL_STATE(10)] = 537,
  [SMALL_STATE(11)] = 616,
  [SMALL_STATE(12)] = 693,
  [SMALL_STATE(13)] = 770,
  [SMALL_STATE(14)] = 849,
  [SMALL_STATE(15)] = 909,
  [SMALL_STATE(16)] = 974,
  [SMALL_STATE(17)] = 1039,
  [SMALL_STATE(18)] = 1104,
  [SMALL_STATE(19)] = 1169,
  [SMALL_STATE(20)] = 1234,
  [SMALL_STATE(21)] = 1299,
  [SMALL_STATE(22)] = 1339,
  [SMALL_STATE(23)] = 1377,
  [SMALL_STATE(24)] = 1415,
  [SMALL_STATE(25)] = 1453,
  [SMALL_STATE(26)] = 1491,
  [SMALL_STATE(27)] = 1529,
  [SMALL_STATE(28)] = 1567,
  [SMALL_STATE(29)] = 1605,
  [SMALL_STATE(30)] = 1643,
  [SMALL_STATE(31)] = 1681,
  [SMALL_STATE(32)] = 1719,
  [SMALL_STATE(33)] = 1757,
  [SMALL_STATE(34)] = 1796,
  [SMALL_STATE(35)] = 1833,
  [SMALL_STATE(36)] = 1874,
  [SMALL_STATE(37)] = 1915,
  [SMALL_STATE(38)] = 1953,
  [SMALL_STATE(39)] = 1990,
  [SMALL_STATE(40)] = 2027,
  [SMALL_STATE(41)] = 2064,
  [SMALL_STATE(42)] = 2101,
  [SMALL_STATE(43)] = 2129,
  [SMALL_STATE(44)] = 2163,
  [SMALL_STATE(45)] = 2186,
  [SMALL_STATE(46)] = 2217,
  [SMALL_STATE(47)] = 2248,
  [SMALL_STATE(48)] = 2275,
  [SMALL_STATE(49)] = 2298,
  [SMALL_STATE(50)] = 2321,
  [SMALL_STATE(51)] = 2344,
  [SMALL_STATE(52)] = 2367,
  [SMALL_STATE(53)] = 2398,
  [SMALL_STATE(54)] = 2429,
  [SMALL_STATE(55)] = 2460,
  [SMALL_STATE(56)] = 2491,
  [SMALL_STATE(57)] = 2522,
  [SMALL_STATE(58)] = 2553,
  [SMALL_STATE(59)] = 2584,
  [SMALL_STATE(60)] = 2607,
  [SMALL_STATE(61)] = 2630,
  [SMALL_STATE(62)] = 2652,
  [SMALL_STATE(63)] = 2674,
  [SMALL_STATE(64)] = 2696,
  [SMALL_STATE(65)] = 2718,
  [SMALL_STATE(66)] = 2740,
  [SMALL_STATE(67)] = 2761,
  [SMALL_STATE(68)] = 2782,
  [SMALL_STATE(69)] = 2805,
  [SMALL_STATE(70)] = 2819,
  [SMALL_STATE(71)] = 2833,
  [SMALL_STATE(72)] = 2851,
  [SMALL_STATE(73)] = 2869,
  [SMALL_STATE(74)] = 2887,
  [SMALL_STATE(75)] = 2905,
  [SMALL_STATE(76)] = 2923,
  [SMALL_STATE(77)] = 2941,
  [SMALL_STATE(78)] = 2959,
  [SMALL_STATE(79)] = 2977,
  [SMALL_STATE(80)] = 2995,
  [SMALL_STATE(81)] = 3013,
  [SMALL_STATE(82)] = 3028,
  [SMALL_STATE(83)] = 3043,
  [SMALL_STATE(84)] = 3058,
  [SMALL_STATE(85)] = 3073,
  [SMALL_STATE(86)] = 3087,
  [SMALL_STATE(87)] = 3101,
  [SMALL_STATE(88)] = 3112,
  [SMALL_STATE(89)] = 3123,
  [SMALL_STATE(90)] = 3134,
  [SMALL_STATE(91)] = 3145,
  [SMALL_STATE(92)] = 3156,
  [SMALL_STATE(93)] = 3167,
  [SMALL_STATE(94)] = 3178,
  [SMALL_STATE(95)] = 3189,
  [SMALL_STATE(96)] = 3200,
  [SMALL_STATE(97)] = 3211,
  [SMALL_STATE(98)] = 3222,
  [SMALL_STATE(99)] = 3233,
  [SMALL_STATE(100)] = 3241,
  [SMALL_STATE(101)] = 3249,
  [SMALL_STATE(102)] = 3257,
  [SMALL_STATE(103)] = 3265,
  [SMALL_STATE(104)] = 3273,
  [SMALL_STATE(105)] = 3281,
  [SMALL_STATE(106)] = 3289,
  [SMALL_STATE(107)] = 3297,
  [SMALL_STATE(108)] = 3305,
  [SMALL_STATE(109)] = 3313,
  [SMALL_STATE(110)] = 3321,
  [SMALL_STATE(111)] = 3329,
  [SMALL_STATE(112)] = 3337,
  [SMALL_STATE(113)] = 3345,
  [SMALL_STATE(114)] = 3353,
  [SMALL_STATE(115)] = 3361,
  [SMALL_STATE(116)] = 3369,
  [SMALL_STATE(117)] = 3377,
  [SMALL_STATE(118)] = 3385,
  [SMALL_STATE(119)] = 3393,
  [SMALL_STATE(120)] = 3401,
  [SMALL_STATE(121)] = 3409,
  [SMALL_STATE(122)] = 3417,
  [SMALL_STATE(123)] = 3425,
  [SMALL_STATE(124)] = 3433,
  [SMALL_STATE(125)] = 3441,
  [SMALL_STATE(126)] = 3449,
  [SMALL_STATE(127)] = 3457,
  [SMALL_STATE(128)] = 3465,
  [SMALL_STATE(129)] = 3473,
  [SMALL_STATE(130)] = 3481,
  [SMALL_STATE(131)] = 3489,
  [SMALL_STATE(132)] = 3497,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(121),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(53),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(57),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(100),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(46),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(68),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(104),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(67),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(35),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 9),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 9),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addition, 2, .production_id = 4),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_addition, 2, .production_id = 4), SHIFT(53),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_addition, 2, .production_id = 4),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_addition, 2, .production_id = 4), SHIFT(80),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_addition, 2, .production_id = 4), SHIFT(66),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_addition, 2, .production_id = 4), SHIFT(35),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_list, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_list, 2),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(53),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(57),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(100),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(10),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statement_list_repeat1, 2),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(46),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(68),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(104),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(67),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(35),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_call_expression_repeat1, 1),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_call_expression_repeat1, 1),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_statement, 3, .production_id = 10),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_statement, 1),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_anchor_statement, 2, .production_id = 2),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2, .production_id = 1),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_positive_ident, 3, .production_id = 5),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_positive_ident, 3, .production_id = 5),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 3),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 3),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negative_literal, 4),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_negative_literal, 4),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negative_literal, 3),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_negative_literal, 3),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 4),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 4),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 1),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 1),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_positive_literal, 3),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_positive_literal, 3),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grilled_fysh, 3),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grilled_fysh, 3),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fysh_bowl, 3),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fysh_bowl, 3),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 5),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 5),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negative_ident, 3, .production_id = 5),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_negative_ident, 3, .production_id = 5),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_positive_literal, 4),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_positive_literal, 4),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_call_expression_repeat1, 2),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(53),
  [217] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(80),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(66),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(35),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3, .production_id = 8),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3, .production_id = 8),
  [238] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_if_statement, 3, .production_id = 8), SHIFT(102),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop_statement, 3, .production_id = 7),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop_statement, 3, .production_id = 7),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subroutine, 2, .production_id = 3),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subroutine, 2, .production_id = 3),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5, .production_id = 12),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 5, .production_id = 12),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_statement, 2),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_statement, 2),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subroutine, 3, .production_id = 6),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subroutine, 3, .production_id = 6),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_right_sub, 3, .production_id = 5),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_right_sub, 3, .production_id = 5),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_left_sub, 3, .production_id = 5),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_left_sub, 3, .production_id = 5),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_positive_literal_repeat1, 2),
  [301] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_positive_literal_repeat1, 2), SHIFT_REPEAT(73),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_positive_literal_repeat1, 2),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_scales_repeat1, 2),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_scales_repeat1, 2),
  [312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scales_repeat1, 2), SHIFT_REPEAT(75),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scales, 1),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scales, 1),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scales, 2),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scales, 2),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_subroutine_repeat1, 2),
  [331] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_subroutine_repeat1, 2), SHIFT_REPEAT(129),
  [334] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scales_repeat1, 2), SHIFT_REPEAT(82),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dead_fysh, 4),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dead_fysh, 4),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_break_statement, 1),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fysh_tank, 3),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [365] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inc_statement, 4, .production_id = 11),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dec_statement, 4, .production_id = 5),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loopy_fysh, 4),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_happy_fysh, 4),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token_multiline_comment = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_multiline_comment] = sym_multiline_comment,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_multiline_comment] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_fysh_external_scanner_create(void);
void tree_sitter_fysh_external_scanner_destroy(void *);
bool tree_sitter_fysh_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_fysh_external_scanner_serialize(void *, char *);
void tree_sitter_fysh_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_fysh() {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym__name,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_fysh_external_scanner_create,
      tree_sitter_fysh_external_scanner_destroy,
      tree_sitter_fysh_external_scanner_scan,
      tree_sitter_fysh_external_scanner_serialize,
      tree_sitter_fysh_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif

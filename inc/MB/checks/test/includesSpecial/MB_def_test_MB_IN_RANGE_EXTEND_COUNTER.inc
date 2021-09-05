
/*******************************************************************************
	Name:     MB Test Definition of MB_IN_RANGE_EXTEND_COUNTER
	File:     MB_def_test_MB_IN_RANGE_EXTEND_COUNTER.inc
	Version:  beta
	Date:     2021-06
	Author:   MB

	Description:
		Defines test arguments of MB_IN_RANGE_EXTEND_COUNTER
*******************************************************************************/


////////////////////////////////////////
// Exterior
////////////////////////////////////////

// ---- INCLUDES ----

// CHECKING INCLUDES LIBRARY
#include <..\..\MB_lib_checkIncludesSpecial.inc>

// TEST ARGUMENTS
#include <..\..\..\vars\MB_def_testArgsChecks.inc>


////////////////////////////////////////
// Variables
////////////////////////////////////////

// ---- CONSTANTS ----

#define PARAM_RANGE_COUNTER             [ 1, nil ]

#define TEST_MB_IN_RANGE_EXTEND_COUNTER [ \
	[ \
		"MB_IN_RANGE_EXTEND_COUNTER", \
		"MB_IN_RANGE_EXTEND_COUNTER( NUMBER, RANGE )", \
		'MB_lib_checkIncludesSpecial.inc', \
		'inc\MB\checks\' \
	], \
	[ \
		{ MB_IN_RANGE_EXTEND_COUNTER( (_this select 0), (_this select 1) ) }, \
		[ \
			/**** TYPES ****/ \
 \
			/* PRIMITIVES */ \
			/* Nils */ \
			/* [ [ TEST_ARG_NIL, PARAM_RANGE_COUNTER ], false ], */ \
			/* Booleans */ \
			[ [ TEST_ARG_BOOL_TRUE, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_BOOL_FALSE, PARAM_RANGE_COUNTER ], false ], \
			/* Scalars */ \
			[ [ TEST_ARG_SCLR_NEG_XS, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_SCLR_NEG_XL, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_SCLR_POS_XS, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_SCLR_POS_XL, PARAM_RANGE_COUNTER ], false ], \
			/* Strings */ \
			[ [ TEST_ARG_STR_EMPTY, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_STR_CONTENT, PARAM_RANGE_COUNTER ], false ], \
			/* Arrays */ \
			[ [ TEST_ARG_ARR_EMPTY, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_ARR_CONTENT, PARAM_RANGE_COUNTER ], false ], \
			/* Codes */ \
			[ [ TEST_ARG_CODE_EMPTY, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_CODE_CONTENT, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_CODE_RETURN, PARAM_RANGE_COUNTER ], false ], \
 \
			/* ABSTRACTS */ \
			/* Nulls */ \
			[ [ TEST_ARG_ABSTRACT_CFG_NULL, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_ABSTRACT_CTRL_NULL, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_ABSTRACT_DISP_NULL, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_ABSTRACT_GRP_NULL, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_ABSTRACT_LOC_NULL, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_ABSTRACT_OBJ_NULL, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_ABSTRACT_SCRIPT_NULL, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_ABSTRACT_TASK_NULL, PARAM_RANGE_COUNTER ], false ], \
			/* Contents */ \
			[ [ TEST_ARG_ABSTRACT_OBJ_VEHICLE, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_ABSTRACT_OBJ_SIMPLE, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_ABSTRACT_OBJ_SUPERSIMPLE, PARAM_RANGE_COUNTER ], false ], \
 \
			/* EXTEND */ \
			/* Binaries */ \
			[ [ TEST_ARG_BIN_OFF, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_BIN_ON, PARAM_RANGE_COUNTER ], true ], \
			/* Unit Intervals */ \
			[ [ TEST_ARG_UNIT_INTERVAL_POS, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_UNIT_INTERVAL_NEG, PARAM_RANGE_COUNTER ], false ], \
			/* Integers */ \
			[ [ TEST_ARG_INT_NEG_XS, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_INT_NEG_XL, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_INT_POS_XS, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_INT_POS_XL, PARAM_RANGE_COUNTER ], true ], \
 \
			/* COMPLEX */ \
			/* Vectors */ \
			[ [ TEST_ARG_UNIT_VECTOR_MIN, PARAM_RANGE_COUNTER ], false ], \
			/* [ [ TEST_ARG_UNIT_VECTOR_MID, PARAM_RANGE_COUNTER ], false ], */ \
			[ [ TEST_ARG_UNIT_VECTOR_MAX, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_UNIT_VECTOR_MIX, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_VECTOR_2D, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_VECTOR_3D, PARAM_RANGE_COUNTER ], false ], \
 \
			/* STRUCTURE */ \
			/* Pairs */ \
			[ [ TEST_ARG_PAIR_NIL, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_PAIR_MIX, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_PAIR_STR, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_PAIR_INDEX, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_PAIR_STR_STR, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_PAIR_INDEX_STR, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_PAIR_STR_SCLR, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_PAIR_INDEX_SCLR, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_PAIR_STR_ARR, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_PAIR_INDEX_ARR, PARAM_RANGE_COUNTER ], false ], \
			/* Hashmaps */ \
			[ [ TEST_ARG_HASHMAP_EMPTY, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_HASHMAP_NIL, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_HASHMAP_STR, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_HASHMAP_INDEX, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_HASHMAP_MIX, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_HASHMAP_STR_SCLR, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_HASHMAP_INDEX_SCLR, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_HASHMAP_STR_STR, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_HASHMAP_INDEX_STR, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_HASHMAP_STR_ARR, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_HASHMAP_INDEX_ARR, PARAM_RANGE_COUNTER ], false ], \
			/* Multidimenional hashmaps */ \
			[ [ TEST_ARG_MULTI_HASHMAP_NIL, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_MULTI_HASHMAP_STR, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_MULTI_HASHMAP_INDEX, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_MULTI_HASHMAP_MIX, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_MULTI_HASHMAP_STR_SCLR, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_MULTI_HASHMAP_INDEX_SCLR, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_MULTI_HASHMAP_STR_STR, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_MULTI_HASHMAP_INDEX_STR, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_MULTI_HASHMAP_STR_ARR, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_MULTI_HASHMAP_INDEX_ARR, PARAM_RANGE_COUNTER ], false ], \
 \
			/* SPECIALS */ \
			/* Range Common */ \
			[ [ TEST_ARG_RANGE_EMPTY, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_RANGE_INFIN, PARAM_RANGE_COUNTER ], false ], \
			/* Range Scalars */ \
			[ [ TEST_ARG_RANGE_SCLR_NEG_INFIN, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_RANGE_SCLR_POS_INFIN, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_RANGE_SCLR_NEG, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_RANGE_SCLR_POS, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_RANGE_SCLR_NEG_POS, PARAM_RANGE_COUNTER ], false ], \
			/* Range Integers */ \
			[ [ TEST_ARG_RANGE_EMPTY, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_RANGE_INFIN, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_RANGE_INT_NEG_INFIN, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_RANGE_INT_POS_INFIN, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_RANGE_INT_NEG, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_RANGE_INT_POS, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_RANGE_INT_NEG_POS, PARAM_RANGE_COUNTER ], false ], \
 \
			/**** ARRAY TYPES ****/ \
 \
			/* PRIMITIVES / ABSTRACTS */ \
			[ [ TEST_ARG_ARR_NIL, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_ARR_BOOL, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_ARR_SCALAR, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_ARR_STRING, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_ARR_CODE, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_ARR_MULTI_EMPTY, PARAM_RANGE_COUNTER ], false ], \
			/* [ [ TEST_ARG_ARR_PRIMITIV, PARAM_RANGE_COUNTER ], false ], */ \
			[ [ TEST_ARG_ARR_ABSTACT, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_ARR_MIX, PARAM_RANGE_COUNTER ], false ], \
 \
			/* EXTEND */ \
			[ [ TEST_ARG_ARR_BIN, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_ARR_UNIT_INTERVAL, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_ARR_INT, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_ARR_INDEX, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_ARR_CNT, PARAM_RANGE_COUNTER ], false ], \
 \
			/* COMPLEX */ \
			[ [ TEST_ARG_ARR_UNIT_VECTOR, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_ARR_VECTOR_2D, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_ARR_VECTOR_3D, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_ARR_VECTOR, PARAM_RANGE_COUNTER ], false ], \
 \
			/* STRUCTURE */ \
			[ [ TEST_ARG_ARR_HASHMAP, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_ARR_MULTI_HASHMAP, PARAM_RANGE_COUNTER ], false ], \
 \
			/* SPECIAL */ \
			[ [ TEST_ARG_ARR_RANGE_SCLR, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_ARR_RANGE_INT, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_ARR_RANGE_INDEX, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_ARR_RANGE_CNT, PARAM_RANGE_COUNTER ], false ], \
 \
			/**** CONTENTS ****/ \
 \
			/* EMPTY */ \
			/* [ [ TEST_ARG_ARR_EMPTY_NIL, PARAM_RANGE_COUNTER ], false ], */ \
			/* [ [ TEST_ARG_ARR_EMPTY_BOOL, PARAM_RANGE_COUNTER ], false ], */ \
			/* [ [ TEST_ARG_ARR_EMPTY_SCLR, PARAM_RANGE_COUNTER ], false ], */ \
			/* [ [ TEST_ARG_ARR_EMPTY_STR, PARAM_RANGE_COUNTER ], false ], */ \
			/* [ [ TEST_ARG_ARR_EMPTY_CODE, PARAM_RANGE_COUNTER ], false ], */ \
			/* [ [ TEST_ARG_ARR_EMPTY_ARR, PARAM_RANGE_COUNTER ], false ], */ \
			/* [ [ TEST_ARG_ARR_EMPTY_OBJ, PARAM_RANGE_COUNTER ], false ], */ \
 \
			/* CONTENTS */ \
			/* [ [ TEST_ARG_ARR_CONTENT_BOOL, PARAM_RANGE_COUNTER ], false ], */ \
			/* [ [ TEST_ARG_ARR_CONTENT_SCLR, PARAM_RANGE_COUNTER ], false ], */ \
			/* [ [ TEST_ARG_ARR_CONTENT_STR, PARAM_RANGE_COUNTER ], false ], */ \
			/* [ [ TEST_ARG_ARR_CONTENT_CODE, PARAM_RANGE_COUNTER ], false ], */ \
			/* [ [ TEST_ARG_ARR_CONTENT_ARR, PARAM_RANGE_COUNTER ], false ], */ \
			/* [ [ TEST_ARG_ARR_CONTENT_OBJ, PARAM_RANGE_COUNTER ], false ], */ \
 \
			/**** DATATYPES ****/ \
 \
			[ [ TEST_ARG_ARR_TYPES_PRIM, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_ARR_TYPES_ABSTR, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_ARR_TYPES_MIX, PARAM_RANGE_COUNTER ], false ], \
 \
			/**** TEXTS ****/ \
 \
			[ [ TEST_ARG_STR_WORD_LOWER, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_STR_WORD_UPPER, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_STR_WORD_MIX, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_STR_PHRASE, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_STR_SENTENCE, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_STR_PHARAGRAPH, PARAM_RANGE_COUNTER ], false ], \
 \
			/**** FILE SYSTEM ****/ \
 \
			/* DIRECTORIES */ \
			/* Roots */ \
			[ [ TEST_ARG_DIR_ROOT, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_DIR_ROOT_CURRENT, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_DIR_ROOT_SLASH, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_DIR_ROOT_CUR_SLASH, PARAM_RANGE_COUNTER ], false ], \
			/* Folders */ \
			[ [ TEST_ARG_DIR_FOLDER_LOWER, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_DIR_FOLDER_UPPER, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_DIR_FOLDER_MIX, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_DIR_FOLDER_LOWER_SLASH, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_DIR_FOLDER_UPPER_SLASH, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_DIR_FOLDER_MIX_SLASH, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_DIR_FOLDER_LOWER_SLASHDBL, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_DIR_FOLDER_UPPER_SLASHDBL, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_DIR_FOLDER_MIX_SLASHDBL, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_DIR_FOLDER_LOWER_SLASHLESS, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_DIR_FOLDER_UPPER_SLASHLESS, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_DIR_FOLDER_MIX_SLASHLESS, PARAM_RANGE_COUNTER ], false ], \
			/* Subfolders */ \
			[ [ TEST_ARG_DIR_SUBFOLDER_LOWER, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_DIR_SUBFOLDER_UPPER, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_DIR_SUBFOLDER_MIX, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_DIR_SUBFOLDER_LOWER_SLASH, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_DIR_SUBFOLDER_UPPER_SLASH, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_DIR_SUBFOLDER_MIX_SLASH, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_DIR_SUBFOLDER_LOWER_SLASHDBL, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_DIR_SUBFOLDER_UPPER_SLASHDBL, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_DIR_SUBFOLDER_MIX_SLASHDBL, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_DIR_SUBFOLDER_LOWER_SLASHLESS, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_DIR_SUBFOLDER_UPPER_SLASHLESS, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_DIR_SUBFOLDER_MIX_SLASHLESS, PARAM_RANGE_COUNTER ], false ], \
 \
			/* FILES */ \
			[ [ TEST_ARG_FILE_LOWER, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_FILE_UPPER, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_FILE_MIX, PARAM_RANGE_COUNTER ], false ], \
 \
			/* PATHS */ \
			/* Roots */ \
 			[ [ TEST_ARG_PATH_ROOT_LOWER, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_PATH_ROOT_UPPER, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_PATH_ROOT_MIX, PARAM_RANGE_COUNTER ], false ], \
			/* Folders */ \
 			[ [ TEST_ARG_PATH_FOLDER_LOWER, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_PATH_FOLDER_UPPER, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_PATH_FOLDER_MIX, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_PATH_FOLDER_LOWER_SLASHLESS, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_PATH_FOLDER_UPPER_SLASHLESS, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_PATH_FOLDER_MIX_SLASHLESS, PARAM_RANGE_COUNTER ], false ], \
			/* Subfolders */ \
 			[ [ TEST_ARG_PATH_SUBFOLDER_LOWER, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_PATH_SUBFOLDER_UPPER, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_PATH_SUBFOLDER_MIX, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_PATH_SUBFOLDER_LOWER_SLASHLESS, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_PATH_SUBFOLDER_UPPER_SLASHLESS, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_PATH_SUBFOLDER_MIX_SLASHLESS, PARAM_RANGE_COUNTER ], false ], \
 \
			/**** CHARACTERS ****/ \
 \
			/* STRINGS */ \
			[ [ TEST_ARG_STR_CHRS_SPECIALS, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_STR_CHRS_DIGIT, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_STR_CHRS_WORD_UPPER, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_STR_CHRS_WORD_LOWER, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_STR_CHRS_WORD, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_STR_CHRS_WORD_DIGIT, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_STR_CHRS_WHITESPACES, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_STR_CHRS_PRINTABLE, PARAM_RANGE_COUNTER ], false ], \
			/* [ [ TEST_ARG_STR_CHRS_TEXT, PARAM_RANGE_COUNTER ], false ], */ \
 \
			/* ARRAYS */ \
			[ [ TEST_ARG_ARR_CHRS_SPECIALS, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_ARR_CHRS_DIGIT, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_ARR_CHRS_WORD_LOWER, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_ARR_CHRS_WORD_UPPER, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_ARR_CHRS_WORD, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_ARR_CHRS_WORD_DIGIT, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_ARR_CHRS_WHITESPACES, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_ARR_CHRS_TEXT, PARAM_RANGE_COUNTER ], false ], \
			[ [ TEST_ARG_ARR_CHRS_PRINTABLE, PARAM_RANGE_COUNTER ], false ] \
		] \
	] \
]

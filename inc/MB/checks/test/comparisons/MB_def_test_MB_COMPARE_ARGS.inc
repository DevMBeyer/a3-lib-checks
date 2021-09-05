
/*******************************************************************************
	Name:     MB Test Definition of MB_COMPARE_ARGS
	File:     MB_def_test_MB_COMPARE_ARGS.inc
	Version:  beta
	Date:     2021-06
	Author:   MB

	Description:
		Defines test arguments of MB_COMPARE_ARGS
*******************************************************************************/


////////////////////////////////////////
// Exterior
////////////////////////////////////////

// ---- INCLUDES ----

// CHECKING COMPARISONS LIBRARY
#include <..\..\MB_lib_checkComparisons.inc>

// TEST ARGUMENTS
#include <..\..\..\vars\MB_def_testArgsChecks.inc>


////////////////////////////////////////
// Variables
////////////////////////////////////////

// ---- CONSTANTS ----

#define TEST_MB_COMPARE_ARGS            [ \
	[ \
		"MB_COMPARE_ARGS", \
		"MB_COMPARE_ARGS( ARG_1, ARG_2 )", \
		'MB_lib_checkComparisons.inc', \
		'inc\MB\checks\' \
	], \
	[ \
		{ MB_COMPARE_ARGS( (_this select 0), (_this select 1) ) }, \
		[ \
			/**** TYPES ****/ \
 \
			/* PRIMITIVES */ \
			/* Nils */ \
			/* [ [ TEST_ARG_NULL, TEST_ARG_CODE_RETURN ], false ], */ \
			/* Booleans */ \
			[ [ TEST_ARG_BOOL_TRUE, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_BOOL_FALSE, TEST_ARG_CODE_RETURN ], false ], \
			/* Scalars */ \
			[ [ TEST_ARG_SCLR_NEG_XS, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_SCLR_NEG_XL, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_SCLR_POS_XS, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_SCLR_POS_XL, TEST_ARG_CODE_RETURN ], false ], \
			/* Strings */ \
			[ [ TEST_ARG_STR_EMPTY, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_STR_CONTENT, TEST_ARG_CODE_RETURN ], false ], \
			/* Arrays */ \
			[ [ TEST_ARG_ARR_EMPTY, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_ARR_CONTENT, TEST_ARG_CODE_RETURN ], false ], \
			/* Codes */ \
			[ [ TEST_ARG_CODE_EMPTY, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_CODE_CONTENT, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_CODE_RETURN, TEST_ARG_CODE_RETURN ], true ], \
 \
			/* ABSTRACTS */ \
			/* Nulls */ \
			[ [ TEST_ARG_ABSTRACT_CFG_NULL, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_ABSTRACT_CTRL_NULL, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_ABSTRACT_DISP_NULL, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_ABSTRACT_GRP_NULL, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_ABSTRACT_LOC_NULL, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_ABSTRACT_OBJ_NULL, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_ABSTRACT_SCRIPT_NULL, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_ABSTRACT_TASK_NULL, TEST_ARG_CODE_RETURN ], false ], \
			/* Contents */ \
			[ [ TEST_ARG_ABSTRACT_OBJ_VEHICLE, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_ABSTRACT_OBJ_SIMPLE, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_ABSTRACT_OBJ_SUPERSIMPLE, TEST_ARG_CODE_RETURN ], false ], \
 \
			/* EXTEND */ \
			/* Binaries */ \
			[ [ TEST_ARG_BIN_OFF, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_BIN_ON, TEST_ARG_CODE_RETURN ], false ], \
			/* Unit Intervals */ \
			[ [ TEST_ARG_UNIT_INTERVAL_POS, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_UNIT_INTERVAL_NEG, TEST_ARG_CODE_RETURN ], false ], \
			/* Integers */ \
			[ [ TEST_ARG_INT_NEG_XS, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_INT_NEG_XL, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_INT_POS_XS, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_INT_POS_XL, TEST_ARG_CODE_RETURN ], false ], \
 \
			/* COMPLEX */ \
			/* Vectors */ \
			[ [ TEST_ARG_UNIT_VECTOR_MIN, TEST_ARG_CODE_RETURN ], false ], \
			/*[ [ TEST_ARG_UNIT_VECTOR_MID, TEST_ARG_CODE_RETURN ], false ],*/ \
			[ [ TEST_ARG_UNIT_VECTOR_MAX, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_UNIT_VECTOR_MIX, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_VECTOR_2D, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_VECTOR_3D, TEST_ARG_CODE_RETURN ], false ], \
 \
			/* STRUCTURE */ \
			/* Pairs */ \
			[ [ TEST_ARG_PAIR_NIL, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_PAIR_MIX, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_PAIR_STR, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_PAIR_INDEX, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_PAIR_STR_STR, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_PAIR_INDEX_STR, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_PAIR_STR_SCLR, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_PAIR_INDEX_SCLR, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_PAIR_STR_ARR, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_PAIR_INDEX_ARR, TEST_ARG_CODE_RETURN ], false ], \
			/* Hashmaps */ \
			[ [ TEST_ARG_HASHMAP_EMPTY, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_HASHMAP_NIL, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_HASHMAP_STR, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_HASHMAP_INDEX, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_HASHMAP_MIX, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_HASHMAP_STR_SCLR, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_HASHMAP_INDEX_SCLR, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_HASHMAP_STR_STR, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_HASHMAP_INDEX_STR, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_HASHMAP_STR_ARR, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_HASHMAP_INDEX_ARR, TEST_ARG_CODE_RETURN ], false ], \
			/* Multidimenional hashmaps */ \
			[ [ TEST_ARG_MULTI_HASHMAP_NIL, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_MULTI_HASHMAP_STR, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_MULTI_HASHMAP_INDEX, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_MULTI_HASHMAP_MIX, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_MULTI_HASHMAP_STR_SCLR, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_MULTI_HASHMAP_INDEX_SCLR, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_MULTI_HASHMAP_STR_STR, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_MULTI_HASHMAP_INDEX_STR, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_MULTI_HASHMAP_STR_ARR, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_MULTI_HASHMAP_INDEX_ARR, TEST_ARG_CODE_RETURN ], false ], \
 \
			/* SPECIALS */ \
			/* Range Common */ \
			[ [ TEST_ARG_RANGE_EMPTY, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_RANGE_INFIN, TEST_ARG_CODE_RETURN ], false ], \
			/* Range Scalars */ \
			[ [ TEST_ARG_RANGE_SCLR_NEG_INFIN, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_RANGE_SCLR_POS_INFIN, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_RANGE_SCLR_NEG, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_RANGE_SCLR_POS, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_RANGE_SCLR_NEG_POS, TEST_ARG_CODE_RETURN ], false ], \
			/* Range Integers */ \
			[ [ TEST_ARG_RANGE_EMPTY, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_RANGE_INFIN, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_RANGE_INT_NEG_INFIN, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_RANGE_INT_POS_INFIN, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_RANGE_INT_NEG, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_RANGE_INT_POS, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_RANGE_INT_NEG_POS, TEST_ARG_CODE_RETURN ], false ], \
 \
			/**** ARRAY TYPES ****/ \
 \
			/* PRIMITIVES / ABSTRACTS */ \
			/* [ [ TEST_ARG_ARR_NIL ], false ], */ \
			[ [ TEST_ARG_ARR_BOOL, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_ARR_SCALAR, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_ARR_STRING, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_ARR_CODE, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_ARR_MULTI_EMPTY, TEST_ARG_CODE_RETURN ], false ], \
			/* [ [ TEST_ARG_ARR_PRIMITIV, TEST_ARG_CODE_RETURN ], false ], */ \
			[ [ TEST_ARG_ARR_ABSTACT, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_ARR_MIX, TEST_ARG_CODE_RETURN ], false ], \
 \
			/* EXTEND */ \
			[ [ TEST_ARG_ARR_BIN, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_ARR_UNIT_INTERVAL, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_ARR_INT, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_ARR_INDEX, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_ARR_CNT, TEST_ARG_CODE_RETURN ], false ], \
 \
			/* COMPLEX */ \
			[ [ TEST_ARG_ARR_UNIT_VECTOR, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_ARR_VECTOR_2D, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_ARR_VECTOR_3D, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_ARR_VECTOR, TEST_ARG_CODE_RETURN ], false ], \
 \
			/* STRUCTURE */ \
			[ [ TEST_ARG_ARR_HASHMAP, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_ARR_MULTI_HASHMAP, TEST_ARG_CODE_RETURN ], false ], \
 \
			/* SPECIAL */ \
			[ [ TEST_ARG_ARR_RANGE_SCLR, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_ARR_RANGE_INT, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_ARR_RANGE_INDEX, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_ARR_RANGE_CNT, TEST_ARG_CODE_RETURN ], false ], \
 \
			/**** CONTENTS ****/ \
 \
			/* EMPTY */ \
			/* [ [ TEST_ARG_ARR_EMPTY_NIL, TEST_ARG_CODE_RETURN ], false ], */ \
			/* [ [ TEST_ARG_ARR_EMPTY_BOOL, TEST_ARG_CODE_RETURN ], false ], */ \
			/* [ [ TEST_ARG_ARR_EMPTY_SCLR, TEST_ARG_CODE_RETURN ], false ], */ \
			/* [ [ TEST_ARG_ARR_EMPTY_STR, TEST_ARG_CODE_RETURN ], false ], */ \
			/* [ [ TEST_ARG_ARR_EMPTY_CODE, TEST_ARG_CODE_RETURN ], false ], */ \
			/* [ [ TEST_ARG_ARR_EMPTY_ARR, TEST_ARG_CODE_RETURN ], false ], */ \
			/* [ [ TEST_ARG_ARR_EMPTY_OBJ, TEST_ARG_CODE_RETURN ], false ], */ \
 \
			/* CONTENTS */ \
			/* [ [ TEST_ARG_ARR_CONTENT_BOOL, TEST_ARG_CODE_RETURN ], false ], */ \
			/* [ [ TEST_ARG_ARR_CONTENT_SCLR, TEST_ARG_CODE_RETURN ], false ], */ \
			/* [ [ TEST_ARG_ARR_CONTENT_STR, TEST_ARG_CODE_RETURN ], false ], */ \
			/* [ [ TEST_ARG_ARR_CONTENT_CODE, TEST_ARG_CODE_RETURN ], false ], */ \
			/* [ [ TEST_ARG_ARR_CONTENT_ARR, TEST_ARG_CODE_RETURN ], false ], */ \
			/* [ [ TEST_ARG_ARR_CONTENT_OBJ, TEST_ARG_CODE_RETURN ], false ], */ \
 \
			/**** DATATYPES ****/ \
 \
			[ [ TEST_ARG_ARR_TYPES_PRIM, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_ARR_TYPES_ABSTR, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_ARR_TYPES_MIX, TEST_ARG_CODE_RETURN ], false ], \
 \
			/**** TEXTS ****/ \
 \
			[ [ TEST_ARG_STR_WORD_LOWER, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_STR_WORD_UPPER, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_STR_WORD_MIX, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_STR_PHRASE, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_STR_SENTENCE, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_STR_PHARAGRAPH, TEST_ARG_CODE_RETURN ], false ], \
 \
			/**** FILE SYSTEM ****/ \
 \
			/* DIRECTORIES */ \
			/* Roots */ \
			[ [ TEST_ARG_DIR_ROOT, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_DIR_ROOT_CURRENT, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_DIR_ROOT_SLASH, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_DIR_ROOT_CUR_SLASH, TEST_ARG_CODE_RETURN ], false ], \
			/* Folders */ \
			[ [ TEST_ARG_DIR_FOLDER_LOWER, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_DIR_FOLDER_UPPER, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_DIR_FOLDER_MIX, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_DIR_FOLDER_LOWER_SLASH, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_DIR_FOLDER_UPPER_SLASH, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_DIR_FOLDER_MIX_SLASH, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_DIR_FOLDER_LOWER_SLASHDBL, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_DIR_FOLDER_UPPER_SLASHDBL, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_DIR_FOLDER_MIX_SLASHDBL, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_DIR_FOLDER_LOWER_SLASHLESS, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_DIR_FOLDER_UPPER_SLASHLESS, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_DIR_FOLDER_MIX_SLASHLESS, TEST_ARG_CODE_RETURN ], false ], \
			/* Subfolders */ \
			[ [ TEST_ARG_DIR_SUBFOLDER_LOWER, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_DIR_SUBFOLDER_UPPER, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_DIR_SUBFOLDER_MIX, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_DIR_SUBFOLDER_LOWER_SLASH, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_DIR_SUBFOLDER_UPPER_SLASH, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_DIR_SUBFOLDER_MIX_SLASH, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_DIR_SUBFOLDER_LOWER_SLASHDBL, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_DIR_SUBFOLDER_UPPER_SLASHDBL, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_DIR_SUBFOLDER_MIX_SLASHDBL, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_DIR_SUBFOLDER_LOWER_SLASHLESS, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_DIR_SUBFOLDER_UPPER_SLASHLESS, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_DIR_SUBFOLDER_MIX_SLASHLESS, TEST_ARG_CODE_RETURN ], false ], \
 \
			/* FILES */ \
			[ [ TEST_ARG_FILE_LOWER, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_FILE_UPPER, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_FILE_MIX, TEST_ARG_CODE_RETURN ], false ], \
 \
			/* PATHS */ \
			/* Roots */ \
 			[ [ TEST_ARG_PATH_ROOT_LOWER ], true ], \
			[ [ TEST_ARG_PATH_ROOT_UPPER ], true ], \
			[ [ TEST_ARG_PATH_ROOT_MIX ], true ], \
			/* Folders */ \
 			[ [ TEST_ARG_PATH_FOLDER_LOWER, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_PATH_FOLDER_UPPER, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_PATH_FOLDER_MIX, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_PATH_FOLDER_LOWER_SLASHLESS, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_PATH_FOLDER_UPPER_SLASHLESS, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_PATH_FOLDER_MIX_SLASHLESS, TEST_ARG_CODE_RETURN ], false ], \
			/* Subfolders */ \
 			[ [ TEST_ARG_PATH_SUBFOLDER_LOWER, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_PATH_SUBFOLDER_UPPER, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_PATH_SUBFOLDER_MIX, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_PATH_SUBFOLDER_LOWER_SLASHLESS, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_PATH_SUBFOLDER_UPPER_SLASHLESS, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_PATH_SUBFOLDER_MIX_SLASHLESS, TEST_ARG_CODE_RETURN ], false ], \
 \
			/**** CHARACTERS ****/ \
 \
			/* STRINGS */ \
			[ [ TEST_ARG_STR_CHRS_SPECIALS, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_STR_CHRS_DIGIT, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_STR_CHRS_WORD_UPPER, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_STR_CHRS_WORD_LOWER, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_STR_CHRS_WORD, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_STR_CHRS_WORD_DIGIT, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_STR_CHRS_WHITESPACES, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_STR_CHRS_PRINTABLE, TEST_ARG_CODE_RETURN ], false ], \
			/* [ [ TEST_ARG_STR_CHRS_TEXT ], false ], */ \
 \
			/* ARRAYS */ \
			[ [ TEST_ARG_ARR_CHRS_SPECIALS, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_ARR_CHRS_DIGIT, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_ARR_CHRS_WORD_LOWER, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_ARR_CHRS_WORD_UPPER, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_ARR_CHRS_WORD, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_ARR_CHRS_WORD_DIGIT, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_ARR_CHRS_WHITESPACES, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_ARR_CHRS_TEXT, TEST_ARG_CODE_RETURN ], false ], \
			[ [ TEST_ARG_ARR_CHRS_PRINTABLE, TEST_ARG_CODE_RETURN ], false ] \
		] \
	] \
]

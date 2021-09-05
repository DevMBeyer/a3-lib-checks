
/*******************************************************************************
	Name:     MB Test Definition of MB_IS_RANGE_INTEGER
	File:     MB_def_test_MB_IS_INTEGER_RANGE.inc
	Version:  beta
	Date:     2021-06
	Author:   MB

	Description:
		Defines test arguments of MB_IS_RANGE_INTEGER
*******************************************************************************/


////////////////////////////////////////
// Exterior
////////////////////////////////////////

// ---- INCLUDES ----

// CHECKING TYPES SPECIAL LIBRARY
#include <..\..\MB_lib_checkTypesSpecial.inc>

// TEST ARGUMENTS
#include <..\..\..\vars\MB_def_testArgsChecks.inc>


////////////////////////////////////////
// Variables
////////////////////////////////////////

// ---- CONSTANTS ----

#define PARAM_INT_MAXI                  -999

#define TEST_MB_IS_INTEGER_RANGE        [ \
	[ \
		"MB_IS_RANGE_INTEGER", \
		"MB_IS_RANGE_INTEGER( MINI, MAXI )", \
		'MB_lib_checkTypesSpecial.inc', \
		'inc\MB\checks\' \
	], \
	[ \
		{ MB_IS_RANGE_INTEGER( (_this select 0), (_this select 1) ) }, \
		[ \
			/**** TYPES ****/ \
 \
			/* PRIMITIVES */ \
			/* Nils */ \
			/* [ [ TEST_ARG_NULL, PARAM_INT_MAXI ], false ], */ \
			/* Booleans */ \
			[ [ TEST_ARG_BOOL_TRUE, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_BOOL_FALSE, PARAM_INT_MAXI ], false ], \
			/* Scalars */ \
			[ [ TEST_ARG_SCLR_NEG_XS, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_SCLR_NEG_XL, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_SCLR_POS_XS, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_SCLR_POS_XL, PARAM_INT_MAXI ], false ], \
			/* Strings */ \
			[ [ TEST_ARG_STR_EMPTY, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_STR_CONTENT, PARAM_INT_MAXI ], false ], \
			/* Arrays */ \
			[ [ TEST_ARG_ARR_EMPTY, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_ARR_CONTENT, PARAM_INT_MAXI ], false ], \
			/* Codes */ \
			[ [ TEST_ARG_CODE_EMPTY, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_CODE_CONTENT, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_CODE_RETURN, PARAM_INT_MAXI ], false ], \
 \
			/* ABSTRACTS */ \
			/* Nulls */ \
			[ [ TEST_ARG_ABSTRACT_CFG_NULL, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_ABSTRACT_CTRL_NULL, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_ABSTRACT_DISP_NULL, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_ABSTRACT_GRP_NULL, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_ABSTRACT_LOC_NULL, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_ABSTRACT_OBJ_NULL, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_ABSTRACT_SCRIPT_NULL, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_ABSTRACT_TASK_NULL, PARAM_INT_MAXI ], false ], \
			/* Contents */ \
			[ [ TEST_ARG_ABSTRACT_OBJ_VEHICLE, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_ABSTRACT_OBJ_SIMPLE, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_ABSTRACT_OBJ_SUPERSIMPLE, PARAM_INT_MAXI ], false ], \
 \
			/* EXTEND */ \
			/* Binaries */ \
			[ [ TEST_ARG_BIN_OFF, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_BIN_ON, PARAM_INT_MAXI ], false ], \
			/* Unit Intervals */ \
			[ [ TEST_ARG_UNIT_INTERVAL_POS, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_UNIT_INTERVAL_NEG, PARAM_INT_MAXI ], false ], \
			/* Integers */ \
			[ [ TEST_ARG_INT_NEG_XS, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_INT_NEG_XL, PARAM_INT_MAXI ], true ], \
			[ [ TEST_ARG_INT_POS_XS, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_INT_POS_XL, PARAM_INT_MAXI ], false ], \
 \
			/* COMPLEX */ \
			/* Vectors */ \
			[ [ TEST_ARG_UNIT_VECTOR_MIN, PARAM_INT_MAXI ], false ], \
			/* [ [ TEST_ARG_UNIT_VECTOR_MID, PARAM_INT_MAXI ], false ], */ \
			[ [ TEST_ARG_UNIT_VECTOR_MAX, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_UNIT_VECTOR_MIX, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_VECTOR_2D, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_VECTOR_3D, PARAM_INT_MAXI ], false ], \
 \
			/* STRUCTURE */ \
			/* Pairs */ \
			[ [ TEST_ARG_PAIR_NIL, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_PAIR_MIX, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_PAIR_STR, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_PAIR_INDEX, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_PAIR_STR_STR, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_PAIR_INDEX_STR, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_PAIR_STR_SCLR, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_PAIR_INDEX_SCLR, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_PAIR_STR_ARR, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_PAIR_INDEX_ARR, PARAM_INT_MAXI ], false ], \
			/* Hashmaps */ \
			[ [ TEST_ARG_HASHMAP_EMPTY, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_HASHMAP_NIL, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_HASHMAP_STR, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_HASHMAP_INDEX, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_HASHMAP_MIX, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_HASHMAP_STR_SCLR, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_HASHMAP_INDEX_SCLR, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_HASHMAP_STR_STR, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_HASHMAP_INDEX_STR, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_HASHMAP_STR_ARR, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_HASHMAP_INDEX_ARR, PARAM_INT_MAXI ], false ], \
			/* Multidimenional hashmaps */ \
			[ [ TEST_ARG_MULTI_HASHMAP_NIL, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_MULTI_HASHMAP_STR, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_MULTI_HASHMAP_INDEX, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_MULTI_HASHMAP_MIX, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_MULTI_HASHMAP_STR_SCLR, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_MULTI_HASHMAP_INDEX_SCLR, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_MULTI_HASHMAP_STR_STR, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_MULTI_HASHMAP_INDEX_STR, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_MULTI_HASHMAP_STR_ARR, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_MULTI_HASHMAP_INDEX_ARR, PARAM_INT_MAXI ], false ], \
 \
			/* SPECIALS */ \
			/* Range Common */ \
			[ [ TEST_ARG_RANGE_EMPTY, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_RANGE_INFIN, PARAM_INT_MAXI ], false ], \
			/* Range Scalars */ \
			[ [ TEST_ARG_RANGE_SCLR_NEG_INFIN, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_RANGE_SCLR_POS_INFIN, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_RANGE_SCLR_NEG, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_RANGE_SCLR_POS, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_RANGE_SCLR_NEG_POS, PARAM_INT_MAXI ], false ], \
			/* Range Integers */ \
			[ [ TEST_ARG_RANGE_EMPTY, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_RANGE_INFIN, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_RANGE_INT_NEG_INFIN, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_RANGE_INT_POS_INFIN, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_RANGE_INT_NEG, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_RANGE_INT_POS, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_RANGE_INT_NEG_POS, PARAM_INT_MAXI ], false ], \
 \
			/**** ARRAY TYPES ****/ \
 \
			/* PRIMITIVES / ABSTRACTS */ \
			/* [ [ TEST_ARG_ARR_NIL, PARAM_INT_MAXI ], false ], */ \
			[ [ TEST_ARG_ARR_BOOL, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_ARR_SCALAR, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_ARR_STRING, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_ARR_CODE, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_ARR_MULTI_EMPTY, PARAM_INT_MAXI ], false ], \
			/* [ [ TEST_ARG_ARR_PRIMITIV ], false ], */ \
			[ [ TEST_ARG_ARR_ABSTACT, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_ARR_MIX, PARAM_INT_MAXI ], false ], \
 \
			/* EXTEND */ \
			[ [ TEST_ARG_ARR_BIN, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_ARR_UNIT_INTERVAL, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_ARR_INT, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_ARR_INDEX, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_ARR_CNT, PARAM_INT_MAXI ], false ], \
 \
			/* COMPLEX */ \
			[ [ TEST_ARG_ARR_UNIT_VECTOR, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_ARR_VECTOR_2D, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_ARR_VECTOR_3D, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_ARR_VECTOR, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_ARR_HASHMAP, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_ARR_MULTI_HASHMAP, PARAM_INT_MAXI ], false ], \
 \
			/* SPECIAL */ \
			[ [ TEST_ARG_ARR_RANGE_SCLR, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_ARR_RANGE_INT, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_ARR_RANGE_INDEX, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_ARR_RANGE_CNT, PARAM_INT_MAXI ], false ], \
 \
			/**** CONTENTS ****/ \
 \
			/* EMPTY */ \
			/* [ [ TEST_ARG_ARR_EMPTY_NIL, PARAM_INT_MAXI ], false ], */ \
			/* [ [ TEST_ARG_ARR_EMPTY_BOOL, PARAM_INT_MAXI ], false ], */ \
			/* [ [ TEST_ARG_ARR_EMPTY_SCLR, PARAM_INT_MAXI ], false ], */ \
			/* [ [ TEST_ARG_ARR_EMPTY_STR, PARAM_INT_MAXI ], false ], */ \
			/* [ [ TEST_ARG_ARR_EMPTY_CODE, PARAM_INT_MAXI ], false ], */ \
			/* [ [ TEST_ARG_ARR_EMPTY_ARR, PARAM_INT_MAXI ], false ], */ \
			/* [ [ TEST_ARG_ARR_EMPTY_OBJ, PARAM_INT_MAXI ], false ], */ \
 \
			/* CONTENTS */ \
			/* [ [ TEST_ARG_ARR_CONTENT_BOOL, PARAM_INT_MAXI ], false ], */ \
			/* [ [ TEST_ARG_ARR_CONTENT_SCLR, PARAM_INT_MAXI ], false ], */ \
			/* [ [ TEST_ARG_ARR_CONTENT_STR, PARAM_INT_MAXI ], false ], */ \
			/* [ [ TEST_ARG_ARR_CONTENT_CODE, PARAM_INT_MAXI ], false ], */ \
			/* [ [ TEST_ARG_ARR_CONTENT_ARR, PARAM_INT_MAXI ], false ], */ \
			/* [ [ TEST_ARG_ARR_CONTENT_OBJ, PARAM_INT_MAXI ], false ], */ \
 \
			/**** DATATYPES ****/ \
 \
			[ [ TEST_ARG_ARR_TYPES_PRIM, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_ARR_TYPES_ABSTR, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_ARR_TYPES_MIX, PARAM_INT_MAXI ], false ], \
 \
			/**** TEXTS ****/ \
 \
			[ [ TEST_ARG_STR_WORD_LOWER, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_STR_WORD_UPPER, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_STR_WORD_MIX, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_STR_PHRASE, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_STR_SENTENCE, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_STR_PHARAGRAPH, PARAM_INT_MAXI ], false ], \
 \
			/**** FILE SYSTEM ****/ \
 \
			/* DIRECTORIES */ \
			/* Roots */ \
			[ [ TEST_ARG_DIR_ROOT, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_DIR_ROOT_CURRENT, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_DIR_ROOT_SLASH, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_DIR_ROOT_CUR_SLASH, PARAM_INT_MAXI ], false ], \
			/* Folders */ \
			[ [ TEST_ARG_DIR_FOLDER_LOWER, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_DIR_FOLDER_UPPER, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_DIR_FOLDER_MIX, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_DIR_FOLDER_LOWER_SLASH, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_DIR_FOLDER_UPPER_SLASH, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_DIR_FOLDER_MIX_SLASH, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_DIR_FOLDER_LOWER_SLASHDBL, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_DIR_FOLDER_UPPER_SLASHDBL, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_DIR_FOLDER_MIX_SLASHDBL, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_DIR_FOLDER_LOWER_SLASHLESS, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_DIR_FOLDER_UPPER_SLASHLESS, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_DIR_FOLDER_MIX_SLASHLESS, PARAM_INT_MAXI ], false ], \
			/* Subfolders */ \
			[ [ TEST_ARG_DIR_SUBFOLDER_LOWER, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_DIR_SUBFOLDER_UPPER, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_DIR_SUBFOLDER_MIX, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_DIR_SUBFOLDER_LOWER_SLASH, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_DIR_SUBFOLDER_UPPER_SLASH, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_DIR_SUBFOLDER_MIX_SLASH, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_DIR_SUBFOLDER_LOWER_SLASHDBL, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_DIR_SUBFOLDER_UPPER_SLASHDBL, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_DIR_SUBFOLDER_MIX_SLASHDBL, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_DIR_SUBFOLDER_LOWER_SLASHLESS, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_DIR_SUBFOLDER_UPPER_SLASHLESS, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_DIR_SUBFOLDER_MIX_SLASHLESS, PARAM_INT_MAXI ], false ], \
 \
			/* FILES */ \
			[ [ TEST_ARG_FILE_LOWER, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_FILE_UPPER, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_FILE_MIX, PARAM_INT_MAXI ], false ], \
 \
			/* PATHS */ \
			/* Roots */ \
 			/* [ [ TEST_ARG_PATH_ROOT_LOWER, PARAM_INT_MAXI ], false ], */ \
			/* [ [ TEST_ARG_PATH_ROOT_UPPER, PARAM_INT_MAXI ], false ], */ \
			/* [ [ TEST_ARG_PATH_ROOT_MIX, PARAM_INT_MAXI ], false ], */ \
			/* Folders */ \
 			[ [ TEST_ARG_PATH_FOLDER_LOWER, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_PATH_FOLDER_UPPER, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_PATH_FOLDER_MIX, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_PATH_FOLDER_LOWER_SLASHLESS, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_PATH_FOLDER_UPPER_SLASHLESS, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_PATH_FOLDER_MIX_SLASHLESS, PARAM_INT_MAXI ], false ], \
			/* Subfolders */ \
 			[ [ TEST_ARG_PATH_SUBFOLDER_LOWER, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_PATH_SUBFOLDER_UPPER, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_PATH_SUBFOLDER_MIX, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_PATH_SUBFOLDER_LOWER_SLASHLESS, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_PATH_SUBFOLDER_UPPER_SLASHLESS, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_PATH_SUBFOLDER_MIX_SLASHLESS, PARAM_INT_MAXI ], false ], \
 \
			/**** CHARACTERS ****/ \
 \
			/* STRINGS */ \
			[ [ TEST_ARG_STR_CHRS_SPECIALS, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_STR_CHRS_DIGIT, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_STR_CHRS_WORD_UPPER, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_STR_CHRS_WORD_LOWER, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_STR_CHRS_WORD, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_STR_CHRS_WORD_DIGIT, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_STR_CHRS_WHITESPACES, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_STR_CHRS_PRINTABLE, PARAM_INT_MAXI ], false ], \
			/* [ [ TEST_ARG_STR_CHRS_TEXT, PARAM_INT_MAXI ], false ], */ \
 \
			/* ARRAYS */ \
			[ [ TEST_ARG_ARR_CHRS_SPECIALS, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_ARR_CHRS_DIGIT, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_ARR_CHRS_WORD_LOWER, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_ARR_CHRS_WORD_UPPER, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_ARR_CHRS_WORD, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_ARR_CHRS_WORD_DIGIT, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_ARR_CHRS_WHITESPACES, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_ARR_CHRS_TEXT, PARAM_INT_MAXI ], false ], \
			[ [ TEST_ARG_ARR_CHRS_PRINTABLE, PARAM_INT_MAXI ], false ] \
		] \
	] \
]
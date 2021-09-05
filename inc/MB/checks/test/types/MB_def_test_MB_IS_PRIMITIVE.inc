
/*******************************************************************************
	Name:     MB Test Definition of MB_IS_PRIMITIVE
	File:     MB_def_test_MB_IS_PRIMITIVE.inc
	Version:  beta
	Date:     2021-06
	Author:   MB

	Description:
		Defines test arguments of MB_IS_PRIMITIVE
*******************************************************************************/


////////////////////////////////////////
// Exterior
////////////////////////////////////////

// ---- INCLUDES ----

// CHECKING TYPES LIBRARY
#include <..\..\MB_lib_checkTypes.inc>

// TEST ARGUMENTS
#include <..\..\..\vars\MB_def_testArgsChecks.inc>


////////////////////////////////////////
// Variables
////////////////////////////////////////

// ---- CONSTANTS ----

#define TEST_MB_IS_PRIMITIVE            [ \
	[ \
		"MB_IS_PRIMITIVE", \
		"MB_IS_PRIMITIVE( ARG )", \
		'MB_lib_checkTypes.inc', \
		'inc\MB\checks\' \
	], \
	[ \
		{ MB_IS_PRIMITIVE( (_this select 0) ) }, \
		[ \
			/**** TYPES ****/ \
 \
			/* PRIMITIVES */ \
			/* Nils */ \
			/* [ [ TEST_ARG_NULL ], false ], */ \
			/* Booleans */ \
			[ [ TEST_ARG_BOOL_TRUE ], true ], \
			[ [ TEST_ARG_BOOL_FALSE ], true ], \
			/* Scalars */ \
			[ [ TEST_ARG_SCLR_NEG_XS ], true ], \
			[ [ TEST_ARG_SCLR_NEG_XL ], true ], \
			[ [ TEST_ARG_SCLR_POS_XS ], true ], \
			[ [ TEST_ARG_SCLR_POS_XL ], true ], \
			/* Strings */ \
			[ [ TEST_ARG_STR_EMPTY ], true ], \
			[ [ TEST_ARG_STR_CONTENT ], true ], \
			/* Arrays */ \
			[ [ TEST_ARG_ARR_EMPTY ], true ], \
			[ [ TEST_ARG_ARR_CONTENT ], true ], \
			/* Codes */ \
			[ [ TEST_ARG_CODE_EMPTY ], true ], \
			[ [ TEST_ARG_CODE_CONTENT ], true ], \
			[ [ TEST_ARG_CODE_RETURN ], true ], \
 \
			/* ABSTRACTS */ \
			/* Nulls */ \
			[ [ TEST_ARG_ABSTRACT_CFG_NULL ], false ], \
			[ [ TEST_ARG_ABSTRACT_CTRL_NULL ], false ], \
			[ [ TEST_ARG_ABSTRACT_DISP_NULL ], false ], \
			[ [ TEST_ARG_ABSTRACT_GRP_NULL ], false ], \
			[ [ TEST_ARG_ABSTRACT_LOC_NULL ], false ], \
			[ [ TEST_ARG_ABSTRACT_OBJ_NULL ], false ], \
			[ [ TEST_ARG_ABSTRACT_SCRIPT_NULL ], false ], \
			[ [ TEST_ARG_ABSTRACT_TASK_NULL ], false ], \
			/* Contents */ \
			[ [ TEST_ARG_ABSTRACT_OBJ_VEHICLE ], false ], \
			[ [ TEST_ARG_ABSTRACT_OBJ_SIMPLE ], false ], \
			[ [ TEST_ARG_ABSTRACT_OBJ_SUPERSIMPLE ], false ], \
 \
			/* EXTEND */ \
			/* Binaries */ \
			[ [ TEST_ARG_BIN_OFF ], true ], \
			[ [ TEST_ARG_BIN_ON ], true ], \
			/* Unit Intervals */ \
			[ [ TEST_ARG_UNIT_INTERVAL_POS ], true ], \
			[ [ TEST_ARG_UNIT_INTERVAL_NEG ], true ], \
			/* Integers */ \
			[ [ TEST_ARG_INT_NEG_XS ], true ], \
			[ [ TEST_ARG_INT_NEG_XL ], true ], \
			[ [ TEST_ARG_INT_POS_XS ], true ], \
			[ [ TEST_ARG_INT_POS_XL ], true ], \
 \
			/* COMPLEX */ \
			/* Vectors */ \
			[ [ TEST_ARG_UNIT_VECTOR_MIN ], true ], \
			/* [ [ TEST_ARG_UNIT_VECTOR_MID ], false ], */ \
			[ [ TEST_ARG_UNIT_VECTOR_MAX ], true ], \
			[ [ TEST_ARG_UNIT_VECTOR_MIX ], true ], \
			[ [ TEST_ARG_VECTOR_2D ], true ], \
			[ [ TEST_ARG_VECTOR_3D ], true ], \
 \
			/* STRUCTURE */ \
			/* Pairs */ \
			[ [ TEST_ARG_PAIR_NIL ], true ], \
			[ [ TEST_ARG_PAIR_MIX ], true ], \
			[ [ TEST_ARG_PAIR_STR ], true ], \
			[ [ TEST_ARG_PAIR_INDEX ], true ], \
			[ [ TEST_ARG_PAIR_STR_STR ], true ], \
			[ [ TEST_ARG_PAIR_INDEX_STR ], true ], \
			[ [ TEST_ARG_PAIR_STR_SCLR ], true ], \
			[ [ TEST_ARG_PAIR_INDEX_SCLR ], true ], \
			[ [ TEST_ARG_PAIR_STR_ARR ], true ], \
			[ [ TEST_ARG_PAIR_INDEX_ARR ], true ], \
			/* Hashmaps */ \
			[ [ TEST_ARG_HASHMAP_EMPTY ], true ], \
			[ [ TEST_ARG_HASHMAP_NIL ], true ], \
			[ [ TEST_ARG_HASHMAP_STR ], true ], \
			[ [ TEST_ARG_HASHMAP_INDEX ], true ], \
			[ [ TEST_ARG_HASHMAP_MIX ], true ], \
			[ [ TEST_ARG_HASHMAP_STR_SCLR ], true ], \
			[ [ TEST_ARG_HASHMAP_INDEX_SCLR ], true ], \
			[ [ TEST_ARG_HASHMAP_STR_STR ], true ], \
			[ [ TEST_ARG_HASHMAP_INDEX_STR ], true ], \
			[ [ TEST_ARG_HASHMAP_STR_ARR ], true ], \
			[ [ TEST_ARG_HASHMAP_INDEX_ARR ], true ], \
			/* Multidimenional hashmaps */ \
			[ [ TEST_ARG_MULTI_HASHMAP_NIL ], true ], \
			[ [ TEST_ARG_MULTI_HASHMAP_STR ], true ], \
			[ [ TEST_ARG_MULTI_HASHMAP_INDEX ], true ], \
			[ [ TEST_ARG_MULTI_HASHMAP_MIX ], true ], \
			[ [ TEST_ARG_MULTI_HASHMAP_STR_SCLR ], true ], \
			[ [ TEST_ARG_MULTI_HASHMAP_INDEX_SCLR ], true ], \
			[ [ TEST_ARG_MULTI_HASHMAP_STR_STR ], true ], \
			[ [ TEST_ARG_MULTI_HASHMAP_INDEX_STR ], true ], \
			[ [ TEST_ARG_MULTI_HASHMAP_STR_ARR ], true ], \
			[ [ TEST_ARG_MULTI_HASHMAP_INDEX_ARR ], true ], \
 \
			/* SPECIALS */ \
			/* Range Common */ \
			[ [ TEST_ARG_RANGE_EMPTY ], true ], \
			[ [ TEST_ARG_RANGE_INFIN ], true ], \
			/* Range Scalars */ \
			[ [ TEST_ARG_RANGE_SCLR_NEG_INFIN ], true ], \
			[ [ TEST_ARG_RANGE_SCLR_POS_INFIN ], true ], \
			[ [ TEST_ARG_RANGE_SCLR_NEG ], true ], \
			[ [ TEST_ARG_RANGE_SCLR_POS ], true ], \
			[ [ TEST_ARG_RANGE_SCLR_NEG_POS ], true ], \
			/* Range Integers */ \
			[ [ TEST_ARG_RANGE_EMPTY ], true ], \
			[ [ TEST_ARG_RANGE_INFIN ], true ], \
			[ [ TEST_ARG_RANGE_INT_NEG_INFIN ], true ], \
			[ [ TEST_ARG_RANGE_INT_POS_INFIN ], true ], \
			[ [ TEST_ARG_RANGE_INT_NEG ], true ], \
			[ [ TEST_ARG_RANGE_INT_POS ], true ], \
			[ [ TEST_ARG_RANGE_INT_NEG_POS ], true ], \
 \
			/**** ARRAY TYPES ****/ \
 \
			/* PRIMITIVES / ABSTRACTS */ \
			/* [ [ TEST_ARG_ARR_NIL ], false ], */ \
			[ [ TEST_ARG_ARR_BOOL ], true ], \
			[ [ TEST_ARG_ARR_SCALAR ], true ], \
			[ [ TEST_ARG_ARR_STRING ], true ], \
			[ [ TEST_ARG_ARR_CODE ], true ], \
			[ [ TEST_ARG_ARR_MULTI_EMPTY ], true ], \
			/* [ [ TEST_ARG_ARR_PRIMITIV ], false ], */ \
			[ [ TEST_ARG_ARR_ABSTACT ], true ], \
			[ [ TEST_ARG_ARR_MIX ], true ], \
 \
			/* EXTEND */ \
			[ [ TEST_ARG_ARR_BIN ], true ], \
			[ [ TEST_ARG_ARR_UNIT_INTERVAL ], true ], \
			[ [ TEST_ARG_ARR_INT ], true ], \
			[ [ TEST_ARG_ARR_INDEX ], true ], \
			[ [ TEST_ARG_ARR_CNT ], true ], \
 \
			/* COMPLEX */ \
			[ [ TEST_ARG_ARR_UNIT_VECTOR ], true ], \
			[ [ TEST_ARG_ARR_VECTOR_2D ], true ], \
			[ [ TEST_ARG_ARR_VECTOR_3D ], true ], \
			[ [ TEST_ARG_ARR_VECTOR ], true ], \
 \
			/* STRUCTURE */ \
			[ [ TEST_ARG_ARR_HASHMAP ], true ], \
			[ [ TEST_ARG_ARR_MULTI_HASHMAP ], true ], \
 \
			/* SPECIAL */ \
			[ [ TEST_ARG_ARR_RANGE_SCLR ], true ], \
			[ [ TEST_ARG_ARR_RANGE_INT ], true ], \
			[ [ TEST_ARG_ARR_RANGE_INDEX ], true ], \
			[ [ TEST_ARG_ARR_RANGE_CNT ], true ], \
 \
			/**** CONTENTS ****/ \
 \
			/* EMPTY */ \
			/* [ [ TEST_ARG_ARR_EMPTY_NIL ], false ], */ \
			/* [ [ TEST_ARG_ARR_EMPTY_BOOL ], false ], */ \
			/* [ [ TEST_ARG_ARR_EMPTY_SCLR ], false ], */ \
			/* [ [ TEST_ARG_ARR_EMPTY_STR ], false ], */ \
			/* [ [ TEST_ARG_ARR_EMPTY_CODE ], false ], */ \
			/* [ [ TEST_ARG_ARR_EMPTY_ARR ], false ], */ \
			/* [ [ TEST_ARG_ARR_EMPTY_OBJ ], false ], */ \
			/* Content */ \
			/* [ [ TEST_ARG_ARR_CONTENT_BOOL ], false ], */ \
			/* [ [ TEST_ARG_ARR_CONTENT_SCLR ], false ], */ \
			/* [ [ TEST_ARG_ARR_CONTENT_STR ], false ], */ \
			/* [ [ TEST_ARG_ARR_CONTENT_CODE ], false ], */ \
			/* [ [ TEST_ARG_ARR_CONTENT_ARR ], false ], */ \
			/* [ [ TEST_ARG_ARR_CONTENT_OBJ ], false ], */ \
 \
			/**** DATATYPES ****/ \
 \
			[ [ TEST_ARG_ARR_TYPES_PRIM ], true ], \
			[ [ TEST_ARG_ARR_TYPES_ABSTR ], true ], \
			[ [ TEST_ARG_ARR_TYPES_MIX ], true ], \
 \
			/**** TEXTS ****/ \
 \
			[ [ TEST_ARG_STR_WORD_LOWER ], true ], \
			[ [ TEST_ARG_STR_WORD_UPPER ], true ], \
			[ [ TEST_ARG_STR_WORD_MIX ], true ], \
			[ [ TEST_ARG_STR_PHRASE ], true ], \
			[ [ TEST_ARG_STR_SENTENCE ], true ], \
			[ [ TEST_ARG_STR_PHARAGRAPH ], true ], \
 \
			/**** FILE SYSTEM ****/ \
 \
			/* DIRECTORIES */ \
			/* Roots */ \
			[ [ TEST_ARG_DIR_ROOT ], true ], \
			[ [ TEST_ARG_DIR_ROOT_CURRENT ], true ], \
			[ [ TEST_ARG_DIR_ROOT_SLASH ], true ], \
			[ [ TEST_ARG_DIR_ROOT_CUR_SLASH ], true ], \
			/* Folders */ \
			[ [ TEST_ARG_DIR_FOLDER_LOWER ], true ], \
			[ [ TEST_ARG_DIR_FOLDER_UPPER ], true ], \
			[ [ TEST_ARG_DIR_FOLDER_MIX ], true ], \
			[ [ TEST_ARG_DIR_FOLDER_LOWER_SLASH ], true ], \
			[ [ TEST_ARG_DIR_FOLDER_UPPER_SLASH ], true ], \
			[ [ TEST_ARG_DIR_FOLDER_MIX_SLASH ], true ], \
			[ [ TEST_ARG_DIR_FOLDER_LOWER_SLASHDBL ], true ], \
			[ [ TEST_ARG_DIR_FOLDER_UPPER_SLASHDBL ], true ], \
			[ [ TEST_ARG_DIR_FOLDER_MIX_SLASHDBL ], true ], \
			[ [ TEST_ARG_DIR_FOLDER_LOWER_SLASHLESS ], true ], \
			[ [ TEST_ARG_DIR_FOLDER_UPPER_SLASHLESS ], true ], \
			[ [ TEST_ARG_DIR_FOLDER_MIX_SLASHLESS ], true ], \
			/* Subfolders */ \
			[ [ TEST_ARG_DIR_SUBFOLDER_LOWER ], true ], \
			[ [ TEST_ARG_DIR_SUBFOLDER_UPPER ], true ], \
			[ [ TEST_ARG_DIR_SUBFOLDER_MIX ], true ], \
			[ [ TEST_ARG_DIR_SUBFOLDER_LOWER_SLASH ], true ], \
			[ [ TEST_ARG_DIR_SUBFOLDER_UPPER_SLASH ], true ], \
			[ [ TEST_ARG_DIR_SUBFOLDER_MIX_SLASH ], true ], \
			[ [ TEST_ARG_DIR_SUBFOLDER_LOWER_SLASHDBL ], true ], \
			[ [ TEST_ARG_DIR_SUBFOLDER_UPPER_SLASHDBL ], true ], \
			[ [ TEST_ARG_DIR_SUBFOLDER_MIX_SLASHDBL ], true ], \
			[ [ TEST_ARG_DIR_SUBFOLDER_LOWER_SLASHLESS ], true ], \
			[ [ TEST_ARG_DIR_SUBFOLDER_UPPER_SLASHLESS ], true ], \
			[ [ TEST_ARG_DIR_SUBFOLDER_MIX_SLASHLESS ], true ], \
 \
			/* FILES */ \
			[ [ TEST_ARG_FILE_LOWER ], true ], \
			[ [ TEST_ARG_FILE_UPPER ], true ], \
			[ [ TEST_ARG_FILE_MIX ], true ], \
 \
			/* PATHS */ \
			/* Roots */ \
 			/* [ [ TEST_ARG_PATH_ROOT_LOWER ], false ], */ \
			/* [ [ TEST_ARG_PATH_ROOT_UPPER ], false ], */ \
			/* [ [ TEST_ARG_PATH_ROOT_MIX ], false ], */ \
			/* Folders */ \
 			[ [ TEST_ARG_PATH_FOLDER_LOWER ], true ], \
			[ [ TEST_ARG_PATH_FOLDER_UPPER ], true ], \
			[ [ TEST_ARG_PATH_FOLDER_MIX ], true ], \
			[ [ TEST_ARG_PATH_FOLDER_LOWER_SLASHLESS ], true ], \
			[ [ TEST_ARG_PATH_FOLDER_UPPER_SLASHLESS ], true ], \
			[ [ TEST_ARG_PATH_FOLDER_MIX_SLASHLESS ], true ], \
			/* Subfolders */ \
 			[ [ TEST_ARG_PATH_SUBFOLDER_LOWER ], true ], \
			[ [ TEST_ARG_PATH_SUBFOLDER_UPPER ], true ], \
			[ [ TEST_ARG_PATH_SUBFOLDER_MIX ], true ], \
			[ [ TEST_ARG_PATH_SUBFOLDER_LOWER_SLASHLESS ], true ], \
			[ [ TEST_ARG_PATH_SUBFOLDER_UPPER_SLASHLESS ], true ], \
			[ [ TEST_ARG_PATH_SUBFOLDER_MIX_SLASHLESS ], true ], \
 \
			/**** CHARACTERS ****/ \
 \
			/* STRINGS */ \
			[ [ TEST_ARG_STR_CHRS_SPECIALS ], true ], \
			[ [ TEST_ARG_STR_CHRS_DIGIT ], true ], \
			[ [ TEST_ARG_STR_CHRS_WORD_UPPER ], true ], \
			[ [ TEST_ARG_STR_CHRS_WORD_LOWER ], true ], \
			[ [ TEST_ARG_STR_CHRS_WORD ], true ], \
			[ [ TEST_ARG_STR_CHRS_WORD_DIGIT ], true ], \
			[ [ TEST_ARG_STR_CHRS_WHITESPACES ], true ], \
			[ [ TEST_ARG_STR_CHRS_PRINTABLE ], true ], \
			/* [ [ TEST_ARG_STR_CHRS_TEXT ], false ], */ \
 \
			/* ARRAYS */ \
			[ [ TEST_ARG_ARR_CHRS_SPECIALS ], true ], \
			[ [ TEST_ARG_ARR_CHRS_DIGIT ], true ], \
			[ [ TEST_ARG_ARR_CHRS_WORD_LOWER ], true ], \
			[ [ TEST_ARG_ARR_CHRS_WORD_UPPER ], true ], \
			[ [ TEST_ARG_ARR_CHRS_WORD ], true ], \
			[ [ TEST_ARG_ARR_CHRS_WORD_DIGIT ], true ], \
			[ [ TEST_ARG_ARR_CHRS_WHITESPACES ], true ], \
			[ [ TEST_ARG_ARR_CHRS_TEXT ], true ], \
			[ [ TEST_ARG_ARR_CHRS_PRINTABLE ], true ] \
		] \
	] \
]

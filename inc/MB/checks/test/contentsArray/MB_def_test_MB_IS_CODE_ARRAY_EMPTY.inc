
/*******************************************************************************
	Name:     MB Test Definition of MB_IS_CODE_ARRAY_EMPTY
	File:     MB_def_test_MB_IS_CODE_ARRAY_EMPTY.inc
	Version:  beta
	Date:     2021-06
	Author:   MB

	Description:
		Defines test arguments of MB_IS_CODE_ARRAY_EMPTY
*******************************************************************************/


////////////////////////////////////////
// Exterior
////////////////////////////////////////

// ---- INCLUDES ----

// CHECKING CONTENTS ARRAY LIBRARY
#include <..\..\MB_lib_checkContentsArray.inc>

// TEST ARGUMENTS
#include <..\..\..\vars\MB_def_testArgsChecks.inc>


////////////////////////////////////////
// Variables
////////////////////////////////////////

// ---- CONSTANTS ----

#define TEST_MB_IS_CODE_ARRAY_EMPTY     [ \
	[ \
		"MB_IS_CODE_ARRAY_EMPTY", \
		"MB_IS_CODE_ARRAY_EMPTY( ARG )", \
		'MB_lib_checkContentsArray.inc', \
		'inc\MB\checks\' \
	], \
	[ \
		{ MB_IS_CODE_ARRAY_EMPTY( (_this select 0) ) }, \
		[ \
			/**** TYPES ****/ \
 \
			/* PRIMITIVES */ \
			/* Nils */ \
			[ [ TEST_ARG_NIL ], false ], \
			/* Booleans */ \
			[ [ TEST_ARG_BOOL_TRUE ], false ], \
			[ [ TEST_ARG_BOOL_FALSE ], false ], \
			/* Scalars */ \
			[ [ TEST_ARG_SCLR_NEG_XS ], false ], \
			[ [ TEST_ARG_SCLR_NEG_XL ], false ], \
			[ [ TEST_ARG_SCLR_POS_XS ], false ], \
			[ [ TEST_ARG_SCLR_POS_XL ], false ], \
			/* Strings */ \
			[ [ TEST_ARG_STR_EMPTY ], false ], \
			[ [ TEST_ARG_STR_CONTENT ], false ], \
			/* Arrays */ \
			[ [ TEST_ARG_ARR_EMPTY ], false ], \
			[ [ TEST_ARG_ARR_CONTENT ], false ], \
			/* Codes */ \
			[ [ TEST_ARG_CODE_EMPTY ], false ], \
			[ [ TEST_ARG_CODE_CONTENT ], false ], \
			[ [ TEST_ARG_CODE_RETURN ], false ], \
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
			[ [ TEST_ARG_BIN_OFF ], false ], \
			[ [ TEST_ARG_BIN_ON ], false ], \
			/* Unit Intervals */ \
			[ [ TEST_ARG_UNIT_INTERVAL_POS ], false ], \
			[ [ TEST_ARG_UNIT_INTERVAL_NEG ], false ], \
			/* Integers */ \
			[ [ TEST_ARG_INT_NEG_XS ], false ], \
			[ [ TEST_ARG_INT_NEG_XL ], false ], \
			[ [ TEST_ARG_INT_POS_XS ], false ], \
			[ [ TEST_ARG_INT_POS_XL ], false ], \
 \
			/* COMPLEX */ \
			/* Vectors */ \
			[ [ TEST_ARG_UNIT_VECTOR_MIN ], false ], \
			[ [ TEST_ARG_UNIT_VECTOR_MID ], false ], \
			[ [ TEST_ARG_UNIT_VECTOR_MAX ], false ], \
			[ [ TEST_ARG_UNIT_VECTOR_MIX ], false ], \
			[ [ TEST_ARG_VECTOR_2D ], false ], \
			[ [ TEST_ARG_VECTOR_3D ], false ], \
 \
			/* STRUCTURE */ \
			/* Pairs */ \
			[ [ TEST_ARG_PAIR_NIL ], false ], \
			[ [ TEST_ARG_PAIR_MIX ], false ], \
			[ [ TEST_ARG_PAIR_STR ], false ], \
			[ [ TEST_ARG_PAIR_INDEX ], false ], \
			[ [ TEST_ARG_PAIR_STR_STR ], false ], \
			[ [ TEST_ARG_PAIR_INDEX_STR ], false ], \
			[ [ TEST_ARG_PAIR_STR_SCLR ], false ], \
			[ [ TEST_ARG_PAIR_INDEX_SCLR ], false ], \
			[ [ TEST_ARG_PAIR_STR_ARR ], false ], \
			[ [ TEST_ARG_PAIR_INDEX_ARR ], false ], \
			/* Hashmaps */ \
			[ [ TEST_ARG_HASHMAP_EMPTY ], false ], \
			[ [ TEST_ARG_HASHMAP_NIL ], false ], \
			[ [ TEST_ARG_HASHMAP_STR ], false ], \
			[ [ TEST_ARG_HASHMAP_INDEX ], false ], \
			[ [ TEST_ARG_HASHMAP_MIX ], false ], \
			[ [ TEST_ARG_HASHMAP_STR_SCLR ], false ], \
			[ [ TEST_ARG_HASHMAP_INDEX_SCLR ], false ], \
			[ [ TEST_ARG_HASHMAP_STR_STR ], false ], \
			[ [ TEST_ARG_HASHMAP_INDEX_STR ], false ], \
			[ [ TEST_ARG_HASHMAP_STR_ARR ], false ], \
			[ [ TEST_ARG_HASHMAP_INDEX_ARR ], false ], \
			/* Multidimenional hashmaps */ \
			[ [ TEST_ARG_MULTI_HASHMAP_NIL ], false ], \
			[ [ TEST_ARG_MULTI_HASHMAP_STR ], false ], \
			[ [ TEST_ARG_MULTI_HASHMAP_INDEX ], false ], \
			[ [ TEST_ARG_MULTI_HASHMAP_MIX ], false ], \
			[ [ TEST_ARG_MULTI_HASHMAP_STR_SCLR ], false ], \
			[ [ TEST_ARG_MULTI_HASHMAP_INDEX_SCLR ], false ], \
			[ [ TEST_ARG_MULTI_HASHMAP_STR_STR ], false ], \
			[ [ TEST_ARG_MULTI_HASHMAP_INDEX_STR ], false ], \
			[ [ TEST_ARG_MULTI_HASHMAP_STR_ARR ], false ], \
			[ [ TEST_ARG_MULTI_HASHMAP_INDEX_ARR ], false ], \
 \
			/* SPECIALS */ \
			/* Range Common */ \
			[ [ TEST_ARG_RANGE_EMPTY ], false ], \
			[ [ TEST_ARG_RANGE_INFIN ], false ], \
			/* Range Scalars */ \
			[ [ TEST_ARG_RANGE_SCLR_NEG_INFIN ], false ], \
			[ [ TEST_ARG_RANGE_SCLR_POS_INFIN ], false ], \
			[ [ TEST_ARG_RANGE_SCLR_NEG ], false ], \
			[ [ TEST_ARG_RANGE_SCLR_POS ], false ], \
			[ [ TEST_ARG_RANGE_SCLR_NEG_POS ], false ], \
			/* Range Integers */ \
			[ [ TEST_ARG_RANGE_EMPTY ], false ], \
			[ [ TEST_ARG_RANGE_INFIN ], false ], \
			[ [ TEST_ARG_RANGE_INT_NEG_INFIN ], false ], \
			[ [ TEST_ARG_RANGE_INT_POS_INFIN ], false ], \
			[ [ TEST_ARG_RANGE_INT_NEG ], false ], \
			[ [ TEST_ARG_RANGE_INT_POS ], false ], \
			[ [ TEST_ARG_RANGE_INT_NEG_POS ], false ], \
 \
			/**** ARRAY TYPES ****/ \
 \
			/* PRIMITIVES / ABSTRACTS */ \
			[ [ TEST_ARG_ARR_NIL ], false ], \
			[ [ TEST_ARG_ARR_BOOL ], false ], \
			[ [ TEST_ARG_ARR_SCALAR ], false ], \
			[ [ TEST_ARG_ARR_STRING ], false ], \
			[ [ TEST_ARG_ARR_CODE ], false ], \
			[ [ TEST_ARG_ARR_MULTI_EMPTY ], false ], \
			[ [ TEST_ARG_ARR_PRIMITIV ], false ], \
			[ [ TEST_ARG_ARR_ABSTACT ], false ], \
			[ [ TEST_ARG_ARR_MIX ], false ], \
 \
			/* EXTEND */ \
			[ [ TEST_ARG_ARR_BIN ], false ], \
			[ [ TEST_ARG_ARR_UNIT_INTERVAL ], false ], \
			[ [ TEST_ARG_ARR_INT ], false ], \
			[ [ TEST_ARG_ARR_INDEX ], false ], \
			[ [ TEST_ARG_ARR_CNT ], false ], \
 \
			/* COMPLEX */ \
			[ [ TEST_ARG_ARR_UNIT_VECTOR ], false ], \
			[ [ TEST_ARG_ARR_VECTOR_2D ], false ], \
			[ [ TEST_ARG_ARR_VECTOR_3D ], false ], \
			[ [ TEST_ARG_ARR_VECTOR ], false ], \
 \
			/* STRUCTURE */ \
			[ [ TEST_ARG_ARR_HASHMAP ], false ], \
			[ [ TEST_ARG_ARR_MULTI_HASHMAP ], false ], \
 \
			/* SPECIAL */ \
			[ [ TEST_ARG_ARR_RANGE_SCLR ], false ], \
			[ [ TEST_ARG_ARR_RANGE_INT ], false ], \
			[ [ TEST_ARG_ARR_RANGE_INDEX ], false ], \
			[ [ TEST_ARG_ARR_RANGE_CNT ], false ], \
 \
			/**** CONTENTS ****/ \
 \
			/* EMPTY */ \
			[ [ TEST_ARG_ARR_EMPTY_NIL ], false ], \
			[ [ TEST_ARG_ARR_EMPTY_BOOL ], false ], \
			[ [ TEST_ARG_ARR_EMPTY_SCLR ], false ], \
			[ [ TEST_ARG_ARR_EMPTY_STR ], false ], \
			[ [ TEST_ARG_ARR_EMPTY_CODE ], true ], \
			[ [ TEST_ARG_ARR_EMPTY_ARR ], false ], \
			[ [ TEST_ARG_ARR_EMPTY_OBJ ], false ], \
 \
			/* CONTENTS */ \
			[ [ TEST_ARG_ARR_CONTENT_BOOL ], false ], \
			[ [ TEST_ARG_ARR_CONTENT_SCLR ], false ], \
			[ [ TEST_ARG_ARR_CONTENT_STR ], false ], \
			[ [ TEST_ARG_ARR_CONTENT_CODE ], false ], \
			[ [ TEST_ARG_ARR_CONTENT_ARR ], false ], \
			[ [ TEST_ARG_ARR_CONTENT_OBJ ], false ], \
 \
			/**** DATATYPES ****/ \
 \
			[ [ TEST_ARG_ARR_TYPES_PRIM ], false ], \
			[ [ TEST_ARG_ARR_TYPES_ABSTR ], false ], \
			[ [ TEST_ARG_ARR_TYPES_MIX ], false ], \
 \
			/**** TEXTS ****/ \
 \
			[ [ TEST_ARG_STR_WORD_LOWER ], false ], \
			[ [ TEST_ARG_STR_WORD_UPPER ], false ], \
			[ [ TEST_ARG_STR_WORD_MIX ], false ], \
			[ [ TEST_ARG_STR_PHRASE ], false ], \
			[ [ TEST_ARG_STR_SENTENCE ], false ], \
			[ [ TEST_ARG_STR_PHARAGRAPH ], false ], \
 \
			/**** FILE SYSTEM ****/ \
 \
			/* DIRECTORIES */ \
			/* Roots */ \
			[ [ TEST_ARG_DIR_ROOT ], false ], \
			[ [ TEST_ARG_DIR_ROOT_CURRENT ], false ], \
			[ [ TEST_ARG_DIR_ROOT_SLASH ], false ], \
			[ [ TEST_ARG_DIR_ROOT_CUR_SLASH ], false ], \
			/* Folders */ \
			[ [ TEST_ARG_DIR_FOLDER_LOWER ], false ], \
			[ [ TEST_ARG_DIR_FOLDER_UPPER ], false ], \
			[ [ TEST_ARG_DIR_FOLDER_MIX ], false ], \
			[ [ TEST_ARG_DIR_FOLDER_LOWER_SLASH ], false ], \
			[ [ TEST_ARG_DIR_FOLDER_UPPER_SLASH ], false ], \
			[ [ TEST_ARG_DIR_FOLDER_MIX_SLASH ], false ], \
			[ [ TEST_ARG_DIR_FOLDER_LOWER_SLASHDBL ], false ], \
			[ [ TEST_ARG_DIR_FOLDER_UPPER_SLASHDBL ], false ], \
			[ [ TEST_ARG_DIR_FOLDER_MIX_SLASHDBL ], false ], \
			[ [ TEST_ARG_DIR_FOLDER_LOWER_SLASHLESS ], false ], \
			[ [ TEST_ARG_DIR_FOLDER_UPPER_SLASHLESS ], false ], \
			[ [ TEST_ARG_DIR_FOLDER_MIX_SLASHLESS ], false ], \
			/* Subfolders */ \
			[ [ TEST_ARG_DIR_SUBFOLDER_LOWER ], false ], \
			[ [ TEST_ARG_DIR_SUBFOLDER_UPPER ], false ], \
			[ [ TEST_ARG_DIR_SUBFOLDER_MIX ], false ], \
			[ [ TEST_ARG_DIR_SUBFOLDER_LOWER_SLASH ], false ], \
			[ [ TEST_ARG_DIR_SUBFOLDER_UPPER_SLASH ], false ], \
			[ [ TEST_ARG_DIR_SUBFOLDER_MIX_SLASH ], false ], \
			[ [ TEST_ARG_DIR_SUBFOLDER_LOWER_SLASHDBL ], false ], \
			[ [ TEST_ARG_DIR_SUBFOLDER_UPPER_SLASHDBL ], false ], \
			[ [ TEST_ARG_DIR_SUBFOLDER_MIX_SLASHDBL ], false ], \
			[ [ TEST_ARG_DIR_SUBFOLDER_LOWER_SLASHLESS ], false ], \
			[ [ TEST_ARG_DIR_SUBFOLDER_UPPER_SLASHLESS ], false ], \
			[ [ TEST_ARG_DIR_SUBFOLDER_MIX_SLASHLESS ], false ], \
 \
			/* FILES */ \
			[ [ TEST_ARG_FILE_LOWER ], false ], \
			[ [ TEST_ARG_FILE_UPPER ], false ], \
			[ [ TEST_ARG_FILE_MIX ], false ], \
 \
			/* PATHS */ \
			/* Roots */ \
 			[ [ TEST_ARG_PATH_ROOT_LOWER ], false ], \
			[ [ TEST_ARG_PATH_ROOT_UPPER ], false ], \
			[ [ TEST_ARG_PATH_ROOT_MIX ], false ], \
			/* Folders */ \
 			[ [ TEST_ARG_PATH_FOLDER_LOWER ], false ], \
			[ [ TEST_ARG_PATH_FOLDER_UPPER ], false ], \
			[ [ TEST_ARG_PATH_FOLDER_MIX ], false ], \
			[ [ TEST_ARG_PATH_FOLDER_LOWER_SLASHLESS ], false ], \
			[ [ TEST_ARG_PATH_FOLDER_UPPER_SLASHLESS ], false ], \
			[ [ TEST_ARG_PATH_FOLDER_MIX_SLASHLESS ], false ], \
			/* Subfolders */ \
 			[ [ TEST_ARG_PATH_SUBFOLDER_LOWER ], false ], \
			[ [ TEST_ARG_PATH_SUBFOLDER_UPPER ], false ], \
			[ [ TEST_ARG_PATH_SUBFOLDER_MIX ], false ], \
			[ [ TEST_ARG_PATH_SUBFOLDER_LOWER_SLASHLESS ], false ], \
			[ [ TEST_ARG_PATH_SUBFOLDER_UPPER_SLASHLESS ], false ], \
			[ [ TEST_ARG_PATH_SUBFOLDER_MIX_SLASHLESS ], false ], \
 \
			/**** CHARACTERS ****/ \
 \
			/* STRINGS */ \
			[ [ TEST_ARG_STR_CHRS_SPECIALS ], false ], \
			[ [ TEST_ARG_STR_CHRS_DIGIT ], false ], \
			[ [ TEST_ARG_STR_CHRS_WORD_UPPER ], false ], \
			[ [ TEST_ARG_STR_CHRS_WORD_LOWER ], false ], \
			[ [ TEST_ARG_STR_CHRS_WORD ], false ], \
			[ [ TEST_ARG_STR_CHRS_WORD_DIGIT ], false ], \
			[ [ TEST_ARG_STR_CHRS_WHITESPACES ], false ], \
			[ [ TEST_ARG_STR_CHRS_PRINTABLE ], false ], \
			/* [ [ TEST_ARG_STR_CHRS_TEXT ], false ], */ \
 \
			/* ARRAYS */ \
			[ [ TEST_ARG_ARR_CHRS_SPECIALS ], false ], \
			[ [ TEST_ARG_ARR_CHRS_DIGIT ], false ], \
			[ [ TEST_ARG_ARR_CHRS_WORD_LOWER ], false ], \
			[ [ TEST_ARG_ARR_CHRS_WORD_UPPER ], false ], \
			[ [ TEST_ARG_ARR_CHRS_WORD ], false ], \
			[ [ TEST_ARG_ARR_CHRS_WORD_DIGIT ], false ], \
			[ [ TEST_ARG_ARR_CHRS_WHITESPACES ], false ], \
			[ [ TEST_ARG_ARR_CHRS_TEXT ], false ], \
			[ [ TEST_ARG_ARR_CHRS_PRINTABLE ], false ] \
		] \
	] \
]

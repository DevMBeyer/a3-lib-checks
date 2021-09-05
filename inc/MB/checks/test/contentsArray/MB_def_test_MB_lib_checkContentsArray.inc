
/*******************************************************************************
	Name:     MB Hash Array Definition of Check Contents Array Tests
	File:     MB_def_test_MB_lib_checkContentsArray.inc
	Version:  beta
	Date:     2021-06
	Author:   MB

	Description:
		Defines hash array of tests ckecking contents array
*******************************************************************************/


////////////////////////////////////////
// Exterior
////////////////////////////////////////

// ---- INCLUDES ----

// CHECKINGS ENUMERATION
#include <..\..\..\vars\MB_def_enTest_MB_lib_checks.inc>

// CONTENTS ARRAY CHECKINGS
#include <MB_def_test_MB_IS_ANYTHING_ARRAY_EMPTY.inc>
#include <MB_def_test_MB_IS_BOOL_ARRAY_EMPTY.inc>
#include <MB_def_test_MB_IS_SCALAR_ARRAY_EMPTY.inc>
#include <MB_def_test_MB_IS_STRING_ARRAY_EMPTY.inc>
#include <MB_def_test_MB_IS_CODE_ARRAY_EMPTY.inc>
#include <MB_def_test_MB_IS_MULTI_ARRAY_EMPTY.inc>
#include <MB_def_test_MB_IS_PRIMITIVE_ARRAY_EMPTY.inc>
#include <MB_def_test_MB_IS_ABSTRACT_ARRAY_EMPTY.inc>

#include <MB_def_test_MB_HAS_ANYTHING_ARRAY_CONTENT.inc>
#include <MB_def_test_MB_HAS_BOOL_ARRAY_CONTENT.inc>
#include <MB_def_test_MB_HAS_SCALAR_ARRAY_CONTENT.inc>
#include <MB_def_test_MB_HAS_STRING_ARRAY_CONTENT.inc>
#include <MB_def_test_MB_HAS_CODE_ARRAY_CONTENT.inc>
#include <MB_def_test_MB_HAS_MULTI_ARRAY_CONTENT.inc>
#include <MB_def_test_MB_HAS_PRIMITIVE_ARRAY_CONTENT.inc>
#include <MB_def_test_MB_HAS_ABSTRACT_ARRAY_CONTENT.inc>


////////////////////////////////////////
// Variables
////////////////////////////////////////

// ---- CONSTANTS ----

#define TEST_MB_LIB_CHECK_CONTENTS_ARRAY \
                                        [ \
	[ EN_IS_ANYTHING_ARRAY_EMPTY, TEST_MB_IS_ANYTHING_ARRAY_EMPTY ], \
	[ EN_IS_BOOL_ARRAY_EMPTY, TEST_MB_IS_BOOL_ARRAY_EMPTY ], \
	[ EN_IS_SCALAR_ARRAY_EMPTY, TEST_MB_IS_SCALAR_ARRAY_EMPTY ], \
	[ EN_IS_STRING_ARRAY_EMPTY, TEST_MB_IS_STRING_ARRAY_EMPTY ], \
	[ EN_IS_CODE_ARRAY_EMPTY, TEST_MB_IS_CODE_ARRAY_EMPTY ], \
	[ EN_IS_MULTI_ARRAY_EMPTY, TEST_MB_IS_MULTI_ARRAY_EMPTY ], \
	[ EN_IS_PRIMITIVE_ARRAY_EMPTY, TEST_MB_IS_PRIMITIVE_ARRAY_EMPTY ], \
	[ EN_IS_ABSTRACT_ARRAY_EMPTY, TEST_MB_IS_ABSTRACT_ARRAY_EMPTY ], \
 \
	[ EN_HAS_ANYTHING_ARRAY_CONTENT, TEST_MB_HAS_ANYTHING_ARRAY_CONTENT ], \
	[ EN_HAS_BOOL_ARRAY_CONTENT, TEST_MB_HAS_BOOL_ARRAY_CONTENT ], \
	[ EN_HAS_SCALAR_ARRAY_CONTENT, TEST_MB_HAS_SCALAR_ARRAY_CONTENT ], \
	[ EN_HAS_STRING_ARRAY_CONTENT, TEST_MB_HAS_STRING_ARRAY_CONTENT ], \
	[ EN_HAS_CODE_ARRAY_CONTENT, TEST_MB_HAS_CODE_ARRAY_CONTENT ], \
	[ EN_HAS_MULTI_ARRAY_CONTENT, TEST_MB_HAS_MULTI_ARRAY_CONTENT ], \
	[ EN_HAS_PRIMITIVE_ARRAY_CONTENT, TEST_MB_HAS_PRIMITIVE_ARRAY_CONTENT ], \
	[ EN_HAS_ABSTRACT_ARRAY_CONTENT, TEST_MB_HAS_ABSTRACT_ARRAY_CONTENT ] \
]

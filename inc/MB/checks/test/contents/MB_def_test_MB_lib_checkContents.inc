
/*******************************************************************************
	Name:     MB Hash Array Definition of Check Contents Tests
	File:     MB_def_test_MB_lib_checkContents.inc
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

// CONTENTS CHECKINGS
#include <MB_def_test_MB_IS_EMPTY.inc>
#include <MB_def_test_MB_IS_EMPTY_BOOL.inc>
#include <MB_def_test_MB_IS_EMPTY_SCALAR.inc>
#include <MB_def_test_MB_IS_EMPTY_STRING.inc>
#include <MB_def_test_MB_IS_EMPTY_CODE.inc>
#include <MB_def_test_MB_IS_EMPTY_ARRAY.inc>
#include <MB_def_test_MB_IS_EMPTY_PRIMITIVE.inc>
#include <MB_def_test_MB_IS_EMPTY_ABSTRACT.inc>

#include <MB_def_test_MB_HAS_CONTENT.inc>
#include <MB_def_test_MB_HAS_BOOL_CONTENT.inc>
#include <MB_def_test_MB_HAS_SCALAR_CONTENT.inc>
#include <MB_def_test_MB_HAS_STRING_CONTENT.inc>
#include <MB_def_test_MB_HAS_CODE_CONTENT.inc>
#include <MB_def_test_MB_HAS_ARRAY_CONTENT.inc>
#include <MB_def_test_MB_HAS_PRIMITIVE_CONTENT.inc>
#include <MB_def_test_MB_HAS_ABSTRACT_CONTENT.inc>


////////////////////////////////////////
// Variables
////////////////////////////////////////

// ---- CONSTANTS ----

#define TEST_MB_LIB_CHECK_CONTENTS      [ \
	[ EN_IS_EMPTY, TEST_MB_IS_EMPTY ], \
	[ EN_IS_EMPTY_BOOL, TEST_MB_IS_EMPTY_BOOL ], \
	[ EN_IS_EMPTY_SCALAR, TEST_MB_IS_EMPTY_SCALAR ], \
	[ EN_IS_EMPTY_STRING, TEST_MB_IS_EMPTY_STRING ], \
	[ EN_IS_EMPTY_CODE, TEST_MB_IS_EMPTY_CODE ], \
	[ EN_IS_EMPTY_ARRAY, TEST_MB_IS_EMPTY_ARRAY ], \
	[ EN_IS_EMPTY_PRIMITIVE, TEST_MB_IS_EMPTY_PRIMITIVE ], \
	[ EN_IS_EMPTY_ABSTRACT, TEST_MB_IS_EMPTY_ABSTRACT ], \
 \
	[ EN_HAS_CONTENT, TEST_MB_HAS_CONTENT ], \
	[ EN_HAS_BOOL_CONTENT, TEST_MB_HAS_BOOL_CONTENT ], \
	[ EN_HAS_SCALAR_CONTENT, TEST_MB_HAS_SCALAR_CONTENT ], \
	[ EN_HAS_STRING_CONTENT, TEST_MB_HAS_STRING_CONTENT ], \
	[ EN_HAS_CODE_CONTENT, TEST_MB_HAS_CODE_CONTENT ], \
	[ EN_HAS_ARRAY_CONTENT, TEST_MB_HAS_ARRAY_CONTENT ], \
	[ EN_HAS_PRIMITIVE_CONTENT, TEST_MB_HAS_PRIMITIVE_CONTENT ], \
	[ EN_HAS_ABSTRACT_CONTENT, TEST_MB_HAS_ABSTRACT_CONTENT ] \
]

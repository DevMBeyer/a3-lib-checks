
/*******************************************************************************
	Name:     MB Hash Array Definition of Check Types Tests
	File:     MB_def_test_MB_lib_checkTypes.inc
	Version:  beta
	Date:     2021-06
	Author:   MB

	Description:
		Defines hash array of tests ckecking types
*******************************************************************************/


////////////////////////////////////////
// Exterior
////////////////////////////////////////

// ---- INCLUDES ----

// CHECKINGS ENUMERATION
#include <..\..\..\vars\MB_def_enTest_MB_lib_checks.inc>

// TYPES CHECKINGS
#include <MB_def_test_MB_IS_NIL.inc>
#include <MB_def_test_MB_IS_BOOL.inc>
#include <MB_def_test_MB_IS_SCALAR.inc>
#include <MB_def_test_MB_IS_STRING.inc>
#include <MB_def_test_MB_IS_ARRAY.inc>
#include <MB_def_test_MB_IS_CODE.inc>
#include <MB_def_test_MB_IS_PRIMITIVE.inc>
#include <MB_def_test_MB_IS_ABSTRACT.inc>


////////////////////////////////////////
// Variables
////////////////////////////////////////

// ---- CONSTANTS ----

#define TEST_MB_LIB_CHECK_TYPES         [ \
	[ EN_IS_NIL, TEST_MB_IS_NIL ], \
	[ EN_IS_BOOL, TEST_MB_IS_BOOL ], \
	[ EN_IS_SCALAR, TEST_MB_IS_SCALAR ], \
	[ EN_IS_STRING, TEST_MB_IS_STRING ], \
	[ EN_IS_ARRAY, TEST_MB_IS_ARRAY ], \
	[ EN_IS_CODE, TEST_MB_IS_CODE ], \
	[ EN_IS_PRMITIVE, TEST_MB_IS_PRIMITIVE ], \
	[ EN_IS_ABSTRACT, TEST_MB_IS_ABSTRACT ] \
]

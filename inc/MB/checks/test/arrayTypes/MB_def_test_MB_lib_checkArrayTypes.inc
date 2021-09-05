
/*******************************************************************************
	Name:     MB Hash Array Definition of Check Array Types Tests
	File:     MB_def_test_MB_lib_checkArrayTypes.inc
	Version:  beta
	Date:     2021-06
	Author:   MB

	Description:
		Defines hash array of tests ckecking array types
*******************************************************************************/


////////////////////////////////////////
// Exterior
////////////////////////////////////////

// ---- INCLUDES ----

// CHECKINGS ENUMERATION
#include <..\..\..\vars\MB_def_enTest_MB_lib_checks.inc>

// TYPES CHECKINGS
#include <MB_def_test_MB_IS_NIL_ARRAY.inc>
#include <MB_def_test_MB_IS_BOOL_ARRAY.inc>
#include <MB_def_test_MB_IS_SCALAR_ARRAY.inc>
#include <MB_def_test_MB_IS_STRING_ARRAY.inc>
#include <MB_def_test_MB_IS_MULTI_ARRAY.inc>
#include <MB_def_test_MB_IS_CODE_ARRAY.inc>
#include <MB_def_test_MB_IS_PRIMITIVE_ARRAY.inc>
#include <MB_def_test_MB_IS_ABSTRACT_ARRAY.inc>


////////////////////////////////////////
// Variables
////////////////////////////////////////

// ---- CONSTANTS ----

#define TEST_MB_LIB_CHECK_ARRAY_TYPES   [ \
	[ EN_IS_NIL_ARRAY, TEST_MB_IS_NIL_ARRAY ], \
	[ EN_IS_BOOL_ARRAY, TEST_MB_IS_BOOL_ARRAY ], \
	[ EN_IS_SCALAR_ARRAY, TEST_MB_IS_SCALAR_ARRAY ], \
	[ EN_IS_STRING_ARRAY, TEST_MB_IS_STRING_ARRAY ], \
	[ EN_IS_MULTI_ARRAY, TEST_MB_IS_MULTI_ARRAY ], \
	[ EN_IS_CODE_ARRAY, TEST_MB_IS_CODE_ARRAY ], \
	[ EN_IS_PRMITIVE_ARRAY, TEST_MB_IS_PRIMITIVE_ARRAY ], \
	[ EN_IS_ABSTRACT_ARRAY, TEST_MB_IS_ABSTRACT_ARRAY ] \
]

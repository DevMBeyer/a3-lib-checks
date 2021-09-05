
/*******************************************************************************
	Name:     MB Hash Array Definition of Check Array Types Extend Tests
	File:     MB_def_test_MB_lib_checkTypesExtend.inc
	Version:  beta
	Date:     2021-06
	Author:   MB

	Description:
		Defines hash array of tests ckecking array types extend
*******************************************************************************/


////////////////////////////////////////
// Exterior
////////////////////////////////////////

// ---- INCLUDES ----

// CHECKINGS ENUMERATION
#include <..\..\..\vars\MB_def_enTest_MB_lib_checks.inc>

// EXTEND ARRAY TYPES CHECKINGS
#include <MB_def_test_MB_IS_BINARY_ARRAY.inc>
#include <MB_def_test_MB_IS_UNIT_INTERVAL_ARRAY.inc>
#include <MB_def_test_MB_IS_INTEGER_ARRAY.inc>
#include <MB_def_test_MB_IS_INDEX_ARRAY.inc>
#include <MB_def_test_MB_IS_COUNTER_ARRAY.inc>


////////////////////////////////////////
// Variables
////////////////////////////////////////

// ---- CONSTANTS ----

#define TEST_MB_LIB_CHECK_ARRAY_TYPES_EXTEND \
                                        [ \
	[ EN_IS_BINARY_ARRAY, TEST_MB_IS_BINARY_ARRAY ], \
	[ EN_IS_UNIT_INTERVAL_ARRAY, TEST_MB_IS_UNIT_INTERVAL_ARRAY ], \
	[ EN_IS_INTEGER_ARRAY, TEST_MB_IS_INTEGER_ARRAY ], \
	[ EN_IS_INDEX_ARRAY, TEST_MB_IS_INDEX_ARRAY ], \
	[ EN_IS_COUNTER_ARRAY, TEST_MB_IS_COUNTER_ARRAY ] \
]

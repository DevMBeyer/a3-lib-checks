
/*******************************************************************************
	Name:     MB Hash Array Definition of Check Types Special Tests
	File:     MB_def_test_MB_lib_checkTypesSpecial.inc
	Version:  beta
	Date:     2021-06
	Author:   MB

	Description:
		Defines hash array of tests ckecking array types special
*******************************************************************************/


////////////////////////////////////////
// Exterior
////////////////////////////////////////

// ---- INCLUDES ----

// CHECKINGS ENUMERATION
#include <..\..\..\vars\MB_def_enTest_MB_lib_checks.inc>

// SPECIAL ARRAY TYPES CHECKINGS
#include <MB_def_test_MB_IS_SCALAR_RANGE_ARRAY.inc>
#include <MB_def_test_MB_IS_INTEGER_RANGE_ARRAY.inc>
#include <MB_def_test_MB_IS_INDEX_RANGE_ARRAY.inc>
#include <MB_def_test_MB_IS_COUNTER_RANGE_ARRAY.inc>


////////////////////////////////////////
// Variables
////////////////////////////////////////

// ---- CONSTANTS ----

#define TEST_MB_LIB_CHECK_ARRAY_TYPES_SPECIAL \
                                        [ \
	[ EN_IS_SCALAR_RANGE_ARRAY, TEST_MB_IS_SCALAR_RANGE_ARRAY ], \
	[ EN_IS_INTEGER_RANGE_ARRAY, TEST_MB_IS_INTEGER_RANGE_ARRAY ], \
	[ EN_IS_INDEX_RANGE_ARRAY, TEST_MB_IS_INDEX_RANGE_ARRAY ], \
	[ EN_IS_COUNTER_RANGE_ARRAY, TEST_MB_IS_COUNTER_RANGE_ARRAY ] \
]

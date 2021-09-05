
/*******************************************************************************
	Name:     MB Hash Array Definition of Check Types Special Tests
	File:     MB_def_test_MB_lib_checkTypesSpecial.inc
	Version:  beta
	Date:     2021-06
	Author:   MB

	Description:
		Defines hash array of tests ckecking types special
*******************************************************************************/


////////////////////////////////////////
// Exterior
////////////////////////////////////////

// ---- INCLUDES ----

// CHECKINGS ENUMERATION
#include <..\..\..\vars\MB_def_enTest_MB_lib_checks.inc>

// SPECIAL TYPES CHECKINGS
#include <MB_def_test_MB_IS_SCALAR_RANGE.inc>
#include <MB_def_test_MB_IS_INTEGER_RANGE.inc>
#include <MB_def_test_MB_IS_INDEX_RANGE.inc>
#include <MB_def_test_MB_IS_COUNTER_RANGE.inc>

#include <MB_def_test_MB_IS_SCALAR_RANGE_EXTEND.inc>
#include <MB_def_test_MB_IS_INTEGER_RANGE_EXTEND.inc>
#include <MB_def_test_MB_IS_INDEX_RANGE_EXTEND.inc>
#include <MB_def_test_MB_IS_COUNTER_RANGE_EXTEND.inc>


////////////////////////////////////////
// Variables
////////////////////////////////////////

// ---- CONSTANTS ----

#define TEST_MB_LIB_CHECK_TYPES_SPECIAL [ \
	[ EN_IS_SCALAR_RANGE, TEST_MB_IS_SCALAR_RANGE ], \
	[ EN_IS_INTEGER_RANGE, TEST_MB_IS_INTEGER_RANGE ], \
	[ EN_IS_INDEX_RANGE, TEST_MB_IS_INDEX_RANGE ], \
	[ EN_IS_COUNTER_RANGE, TEST_MB_IS_COUNTER_RANGE ], \
	[ EN_IS_SCALAR_RANGE_EXTEND, TEST_MB_IS_SCALAR_RANGE_EXTEND ], \
	[ EN_IS_INTEGER_RANGE_EXTEND, TEST_MB_IS_INTEGER_RANGE_EXTEND ], \
	[ EN_IS_INDEX_RANGE_EXTEND, TEST_MB_IS_INDEX_RANGE_EXTEND ], \
	[ EN_IS_COUNTER_RANGE_EXTEND, TEST_MB_IS_COUNTER_RANGE_EXTEND ] \
]

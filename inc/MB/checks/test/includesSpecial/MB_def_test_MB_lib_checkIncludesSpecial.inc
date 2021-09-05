
/*******************************************************************************
	Name:     MB Hash Array Definition of Check Includes Special Tests
	File:     MB_def_test_MB_lib_checkIncludesSpecial.inc
	Version:  beta
	Date:     2021-06
	Author:   MB

	Description:
		Defines hash array of tests ckecking includes
*******************************************************************************/


////////////////////////////////////////
// Exterior
////////////////////////////////////////

// ---- INCLUDES ----

// CHECKINGS ENUMERATION
#include <..\..\..\vars\MB_def_enTest_MB_lib_checks.inc>

// INCLUDES CHECKINGS
#include <MB_def_test_MB_IN_RANGE_SCALAR.inc>
#include <MB_def_test_MB_IN_RANGE_INTEGER.inc>
#include <MB_def_test_MB_IN_RANGE_INDEX.inc>
#include <MB_def_test_MB_IN_RANGE_COUNTER.inc>

#include <MB_def_test_MB_IN_RANGE_EXTEND_SCALAR.inc>
#include <MB_def_test_MB_IN_RANGE_EXTEND_INTEGER.inc>
#include <MB_def_test_MB_IN_RANGE_EXTEND_INDEX.inc>
#include <MB_def_test_MB_IN_RANGE_EXTEND_COUNTER.inc>


////////////////////////////////////////
// Variables
////////////////////////////////////////

// ---- CONSTANTS ----

#define TEST_MB_LIB_CHECK_INCLUDES_SPECIAL \
                                        [ \
	[ EN_IN_RANGE_SCALAR, TEST_MB_IN_RANGE_SCALAR ], \
	[ EN_IN_RANGE_INTEGER, TEST_MB_IN_RANGE_INTEGER ], \
	[ EN_IN_RANGE_INDEX, TEST_MB_IN_RANGE_INDEX ], \
	[ EN_IN_RANGE_COUNTER, TEST_MB_IN_RANGE_COUNTER ], \
 \
	[ EN_IN_RANGE_EXTEND_SCALAR, TEST_MB_IN_RANGE_EXTEND_SCALAR ], \
	[ EN_IN_RANGE_EXTEND_INTEGER, TEST_MB_IN_RANGE_EXTEND_INTEGER ], \
	[ EN_IN_RANGE_EXTEND_INDEX, TEST_MB_IN_RANGE_EXTEND_INDEX ], \
	[ EN_IN_RANGE_EXTEND_COUNTER, TEST_MB_IN_RANGE_EXTEND_COUNTER ] \
]

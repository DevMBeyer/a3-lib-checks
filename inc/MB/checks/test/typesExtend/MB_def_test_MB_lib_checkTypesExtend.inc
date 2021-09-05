
/*******************************************************************************
	Name:     MB Hash Array Definition of Check Types Extend Tests
	File:     MB_def_test_MB_lib_checkTypesExtend.inc
	Version:  beta
	Date:     2021-06
	Author:   MB

	Description:
		Defines hash array of tests ckecking types extend
*******************************************************************************/


////////////////////////////////////////
// Exterior
////////////////////////////////////////

// ---- INCLUDES ----

// CHECKINGS ENUMERATION
#include <..\..\..\vars\MB_def_enTest_MB_lib_checks.inc>

// EXTEND TYPES CHECKINGS
#include <MB_def_test_MB_IS_BINARY.inc>
#include <MB_def_test_MB_IS_COUNTER.inc>
#include <MB_def_test_MB_IS_INDEX.inc>
#include <MB_def_test_MB_IS_INTEGER.inc>
#include <MB_def_test_MB_IS_UNIT_INTERVAL.inc>


////////////////////////////////////////
// Variables
////////////////////////////////////////

// ---- CONSTANTS ----

#define TEST_MB_LIB_CHECK_TYPES_EXTEND  [ \
	[ EN_IS_BINARY, TEST_MB_IS_BINARY ], \
	[ EN_IS_UNIT_INTERVAL, TEST_MB_IS_UNIT_INTERVAL ], \
	[ EN_IS_INTEGER, TEST_MB_IS_INTEGER ], \
	[ EN_IS_INDEX, TEST_MB_IS_INDEX ], \
	[ EN_IS_COUNTER, TEST_MB_IS_COUNTER ] \
]

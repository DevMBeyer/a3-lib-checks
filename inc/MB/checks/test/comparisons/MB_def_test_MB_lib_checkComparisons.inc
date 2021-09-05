
/*******************************************************************************
	Name:     MB Hash Array Definition of Check Comparisons Tests
	File:     MB_def_test_MB_lib_checkTypesSpecial.inc
	Version:  beta
	Date:     2021-06
	Author:   MB

	Description:
		Defines hash array of tests ckecking comparisons
*******************************************************************************/


////////////////////////////////////////
// Exterior
////////////////////////////////////////

// ---- INCLUDES ----

// CHECKINGS ENUMERATION
#include <..\..\..\vars\MB_def_enTest_MB_lib_checks.inc>

// COMPARISONS CHECKINGS
#include <MB_def_test_MB_COMPARE_ARGS.inc>
#include <MB_def_test_MB_COMPARE_ARRAY_SIZE.inc>
#include <MB_def_test_MB_COMPARE_ARRAY_SIZES.inc>
#include <MB_def_test_MB_COMPARE_TYPE.inc>


////////////////////////////////////////
// Variables
////////////////////////////////////////

// ---- CONSTANTS ----

#define TEST_MB_LIB_CHECK_COMPARISONS   [ \
	[ EN_COMPARE_TYPE, TEST_MB_COMPARE_TYPE ], \
	[ EN_COMPARE_ARGS, TEST_MB_COMPARE_ARGS ], \
	[ EN_COMPARE_ARRAY_SIZE, TEST_MB_COMPARE_ARRAY_SIZE ], \
	[ EN_COMPARE_ARRAY_SIZES, TEST_MB_COMPARE_ARRAY_SIZES ] \
]

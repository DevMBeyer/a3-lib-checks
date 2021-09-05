
/*******************************************************************************
	Name:     MB Hash Array Definition of Check Includes Tests
	File:     MB_def_test_MB_lib_checkIncludes.inc
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
#include <MB_def_test_MB_IN_CHARSET.inc>
#include <MB_def_test_MB_IN_ARR_CHARSET.inc>


////////////////////////////////////////
// Variables
////////////////////////////////////////

// ---- CONSTANTS ----

#define TEST_MB_LIB_CHECK_INCLUDES      [ \
	[ EN_IN_CHARSET, TEST_MB_IN_CHARSET ], \
	[ EN_IN_ARR_CHARSET, TEST_MB_IN_ARR_CHARSET ] \
]

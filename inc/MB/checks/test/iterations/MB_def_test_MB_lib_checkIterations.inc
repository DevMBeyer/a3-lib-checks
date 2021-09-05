
/*******************************************************************************
	Name:     MB Hash Array Definition of Check Iterations Tests
	File:     MB_def_test_MB_lib_checkIterations.inc
	Version:  beta
	Date:     2021-06
	Author:   MB

	Description:
		Defines hash array of tests ckecking iterations
*******************************************************************************/


////////////////////////////////////////
// Exterior
////////////////////////////////////////

// ---- INCLUDES ----

// CHECKINGS ENUMERATION
#include <..\..\..\vars\MB_def_enTest_MB_lib_checks.inc>

// ITERATIONS CHECKINGS
#include <MB_def_test_MB_EACH_TYPE_EQUAL.inc>
#include <MB_def_test_MB_EACH_TYPE_UNIQUE.inc>
#include <MB_def_test_MB_EACH_CHAR_UNIQUE.inc>
#include <MB_def_test_MB_EACH_CHAR_ELEM_UNIQUE.inc>
#include <MB_def_test_MB_EACH_INDEX_UNIQUE.inc>


////////////////////////////////////////
// Variables
////////////////////////////////////////

// ---- CONSTANTS ----

#define TEST_MB_LIB_CHECK_ITERATIONS    [ \
	[ EN_EACH_TYPE_EQUAL, TEST_MB_EACH_TYPE_EQUAL ], \
	[ EN_EACH_TYPE_UNIQUE, TEST_MB_EACH_TYPE_UNIQUE ], \
	[ EN_EACH_CHAR_UNIQUE, TEST_MB_EACH_CHAR_UNIQUE ], \
	[ EN_EACH_CHAR_ELEM_UNIQUE, TEST_MB_EACH_CHAR_ELEM_UNIQUE ], \
	[ EN_EACH_INDEX_UNIQUE, TEST_MB_EACH_INDEX_UNIQUE ] \
]

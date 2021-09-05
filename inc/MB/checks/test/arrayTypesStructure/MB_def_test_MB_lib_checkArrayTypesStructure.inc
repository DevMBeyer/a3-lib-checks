
/*******************************************************************************
	Name:     MB Hash Array Definition of Check Types Structure Tests
	File:     MB_def_test_MB_lib_checkArrayTypesStructure.inc
	Version:  beta
	Date:     2021-06
	Author:   MB

	Description:
		Defines hash array of tests ckecking array types structure
*******************************************************************************/


////////////////////////////////////////
// Exterior
////////////////////////////////////////

// ---- INCLUDES ----

// CHECKINGS ENUMERATION
#include <..\..\..\vars\MB_def_enTest_MB_lib_checks.inc>

// STRUCTURE ARRAY TYPES CHECKINGS
#include <MB_def_test_MB_IS_HASHMAP_ARRAY.inc>
#include <MB_def_test_MB_IS_MULTI_HASHMAP_ARRAY.inc>


////////////////////////////////////////
// Variables
////////////////////////////////////////

// ---- CONSTANTS ----

#define TEST_MB_LIB_CHECK_ARRAY_TYPES_STRUCTURE \
                                        [ \
	[ EN_IS_HASHMAP_ARRAY, TEST_MB_IS_HASHMAP_ARRAY ], \
	[ EN_IS_MULTI_HASHMAP_ARRAY, TEST_MB_IS_MULTI_HASHMAP_ARRAY ] \
]

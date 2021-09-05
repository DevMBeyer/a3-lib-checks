
/*******************************************************************************
	Name:     MB Hash Array Definition of Check Types Complex Tests
	File:     MB_def_test_MB_lib_checkArrayTypesComplex.inc
	Version:  beta
	Date:     2021-06
	Author:   MB

	Description:
		Defines hash array of tests ckecking array types complex
*******************************************************************************/


////////////////////////////////////////
// Exterior
////////////////////////////////////////

// ---- INCLUDES ----

// CHECKINGS ENUMERATION
#include <..\..\..\vars\MB_def_enTest_MB_lib_checks.inc>

// COMPLEX ARRAY TYPES CHECKINGS
#include <MB_def_test_MB_IS_UNIT_VECTOR_ARRAY.inc>
#include <MB_def_test_MB_IS_VECTOR_ARRAY.inc>
#include <MB_def_test_MB_IS_VECTOR_2D_ARRAY.inc>
#include <MB_def_test_MB_IS_VECTOR_3D_ARRAY.inc>


////////////////////////////////////////
// Variables
////////////////////////////////////////

// ---- CONSTANTS ----

#define TEST_MB_LIB_CHECK_ARRAY_TYPES_COMPLEX \
                                        [ \
	[ EN_IS_UNIT_VECTOR_ARRAY, TEST_MB_IS_UNIT_VECTOR_ARRAY ], \
	[ EN_IS_VECTOR_ARRAY, TEST_MB_IS_VECTOR_ARRAY ], \
	[ EN_IS_VECTOR_2D_ARRAY, TEST_MB_IS_VECTOR_2D_ARRAY ], \
	[ EN_IS_VECTOR_3D_ARRAY, TEST_MB_IS_VECTOR_3D_ARRAY ] \
]

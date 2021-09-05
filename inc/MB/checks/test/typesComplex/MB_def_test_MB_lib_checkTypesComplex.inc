
/*******************************************************************************
	Name:     MB Hash Array Definition of Check Types Complex Tests
	File:     MB_def_test_MB_lib_checkTypesComplex.inc
	Version:  beta
	Date:     2021-06
	Author:   MB

	Description:
		Defines hash array of tests ckecking types complex
*******************************************************************************/


////////////////////////////////////////
// Exterior
////////////////////////////////////////

// ---- INCLUDES ----

// CHECKINGS ENUMERATION
#include <..\..\..\vars\MB_def_enTest_MB_lib_checks.inc>

// COMPLEX TYPES CHECKINGS
#include <MB_def_test_MB_IS_UNIT_VECTOR.inc>
#include <MB_def_test_MB_IS_VECTOR_2D.inc>
#include <MB_def_test_MB_IS_VECTOR_3D.inc>
#include <MB_def_test_MB_IS_VECTOR.inc>


////////////////////////////////////////
// Variables
////////////////////////////////////////

// ---- CONSTANTS ----

#define TEST_MB_LIB_CHECK_TYPES_COMPLEX [ \
	[ EN_IS_VECTOR, TEST_MB_IS_VECTOR ], \
	[ EN_IS_VECTOR_2D, TEST_MB_IS_VECTOR_2D ], \
	[ EN_IS_VECTOR_3D, TEST_MB_IS_VECTOR_3D ], \
	[ EN_IS_UNIT_VECTOR, TEST_MB_IS_UNIT_VECTOR ] \
]

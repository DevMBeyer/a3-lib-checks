
/*******************************************************************************
	Name:     MB Hash Array Definition of Data Checkings
	File:     MB_def_test_MB_IS_STRING.inc
	Version:  beta
	Date:     2021-06
	Author:   MB

	Description:
		Defines hash array of tests ckeckings datas
*******************************************************************************/


////////////////////////////////////////
// Exterior
////////////////////////////////////////

// ---- INCLUDES ----

// TEST CASE TYPES
#include <types\MB_def_test_MB_lib_checkTypes.inc>
#include <typesExtend\MB_def_test_MB_lib_checkTypesExtend.inc>
#include <typesComplex\MB_def_test_MB_lib_checkTypesComplex.inc>
#include <typesSpecial\MB_def_test_MB_lib_checkTypesSpecial.inc>
#include <typesStructure\MB_def_test_MB_lib_checkTypesStructure.inc>

// TEST CASE ARRAY TYPES
#include <arrayTypes\MB_def_test_MB_lib_checkArrayTypes.inc>
#include <arrayTypesExtend\MB_def_test_MB_lib_checkArrayTypesExtend.inc>
#include <arrayTypesComplex\MB_def_test_MB_lib_checkArrayTypesComplex.inc>
#include <arrayTypesSpecial\MB_def_test_MB_lib_checkArrayTypesSpecial.inc>
#include <arrayTypesStructure\MB_def_test_MB_lib_checkArrayTypesStructure.inc>

// TEST CASE COMPARISONS
#include <comparisons\MB_def_test_MB_lib_checkComparisons.inc>

// TEST CASE CONTENTS
#include <contents\MB_def_test_MB_lib_checkContents.inc>
#include <contentsArray\MB_def_test_MB_lib_checkContentsArray.inc>

// TEST CASE CONTENT ARRAYS
#include <includes\MB_def_test_MB_lib_checkIncludes.inc>
#include <includesSpecial\MB_def_test_MB_lib_checkIncludesSpecial.inc>

// TEST CASE ITERATIONS
#include <iterations\MB_def_test_MB_lib_checkIterations.inc>

// TEST CASE SYSTEM
#include <fs\MB_def_test_MB_lib_checkFS.inc>


////////////////////////////////////////
// Variables
////////////////////////////////////////

// ---- CONSTANTS ----

#define TEST_MB_LIB_CHECKS              [ \
	/* TYPES */ \
	[ EN_TYPES, TEST_MB_LIB_CHECK_TYPES ], \
	[ EN_TYPES_EXTEND, TEST_MB_LIB_CHECK_TYPES_EXTEND ], \
	[ EN_TYPES_COMPLEX, TEST_MB_LIB_CHECK_TYPES_COMPLEX ], \
	[ EN_TYPES_SPECIAL, TEST_MB_LIB_CHECK_TYPES_SPECIAL ], \
	[ EN_TYPES_STRUCTURE, TEST_MB_LIB_CHECK_TYPES_STRUCTURE ], \
	/* ARRAY TYPES */ \
	[ EN_ARRAY_TYPES, TEST_MB_LIB_CHECK_ARRAY_TYPES ], \
	[ EN_ARRAY_TYPES_EXTEND, TEST_MB_LIB_CHECK_ARRAY_TYPES_EXTEND ], \
	[ EN_ARRAY_TYPES_COMPLEX, TEST_MB_LIB_CHECK_ARRAY_TYPES_COMPLEX ], \
	[ EN_ARRAY_TYPES_SPECIAL, TEST_MB_LIB_CHECK_ARRAY_TYPES_SPECIAL ], \
	[ EN_ARRAY_TYPES_STRUCTURE, TEST_MB_LIB_CHECK_ARRAY_TYPES_STRUCTURE ], \
	/* COMPARISONS */ \
	[ EN_COMPARISONS, TEST_MB_LIB_CHECK_COMPARISONS ], \
	/* CONTENTS */ \
	[ EN_CONTENTS, TEST_MB_LIB_CHECK_CONTENTS ], \
	[ EN_CONTENTS_ARRAY, TEST_MB_LIB_CHECK_CONTENTS_ARRAY ], \
	/* INCLUDES */ \
	[ EN_INCLUDES, TEST_MB_LIB_CHECK_INCLUDES ], \
	[ EN_INCLUDES_SPECIAL, TEST_MB_LIB_CHECK_INCLUDES_SPECIAL ], \
	/* ITERATIONS */ \
	[ EN_ITERATIONS, TEST_MB_LIB_CHECK_ITERATIONS ], \
	/* SYSTEMS */ \
	[ EN_FS, TEST_MB_LIB_CHECK_FS ] \
/**/]

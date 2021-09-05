
/*******************************************************************************
	Name:     MB Hash Array Definition of Check Types Structure Tests
	File:     MB_def_test_MB_lib_checkTypesStructure.inc
	Version:  beta
	Date:     2021-06
	Author:   MB

	Description:
		Defines hash array of tests ckecking types structure
*******************************************************************************/


////////////////////////////////////////
// Exterior
////////////////////////////////////////

// ---- INCLUDES ----

// CHECKINGS ENUMERATION
#include <..\..\..\vars\MB_def_enTest_MB_lib_checks.inc>

// COMPLEX TYPES CHECKINGS
#include <MB_def_test_MB_IS_PAIR.inc>
#include <MB_def_test_MB_IS_STR_PAIR.inc>
#include <MB_def_test_MB_IS_INDEX_PAIR.inc>
#include <MB_def_test_MB_IS_STR_PAIR_TYPE.inc>
#include <MB_def_test_MB_IS_INDEX_PAIR_TYPE.inc>
#include <MB_def_test_MB_IS_HASHMAP.inc>
#include <MB_def_test_MB_IS_STR_HASHMAP.inc>
#include <MB_def_test_MB_IS_INDEX_HASHMAP.inc>
#include <MB_def_test_MB_IS_STR_HASHMAP_TYPE.inc>
#include <MB_def_test_MB_IS_INDEX_HASHMAP_TYPE.inc>
#include <MB_def_test_MB_IS_MULTI_HASHMAP.inc>
#include <MB_def_test_MB_IS_STR_MULTI_HASHMAP.inc>
#include <MB_def_test_MB_IS_INDEX_MULTI_HASHMAP.inc>
#include <MB_def_test_MB_IS_STR_MULTI_HASHMAP_TYPE.inc>
#include <MB_def_test_MB_IS_INDEX_MULTI_HASHMAP_TYPE.inc>


////////////////////////////////////////
// Variables
////////////////////////////////////////

// ---- CONSTANTS ----

#define TEST_MB_LIB_CHECK_TYPES_STRUCTURE [ \
	[ EN_IS_PAIR, TEST_MB_IS_PAIR ], \
	[ EN_IS_STR_PAIR, TEST_MB_IS_STR_PAIR ], \
	[ EN_IS_INDEX_PAIR, TEST_MB_IS_INDEX_PAIR ], \
	[ EN_IS_STR_PAIR_TYPE, TEST_MB_IS_STR_PAIR_TYPE ], \
	[ EN_IS_INDEX_PAIR_TYPE, TEST_MB_IS_INDEX_PAIR_TYPE ], \
	[ EN_IS_HASHMAP, TEST_MB_IS_HASHMAP ], \
	[ EN_IS_STR_HASHMAP, TEST_MB_IS_STR_HASHMAP ], \
	[ EN_IS_INDEX_HASHMAP, TEST_MB_IS_INDEX_HASHMAP ], \
	[ EN_IS_STR_HASHMAP_TYPE, TEST_MB_IS_STR_HASHMAP_TYPE ], \
	[ EN_IS_INDEX_HASHMAP_TYPE, TEST_MB_IS_INDEX_HASHMAP_TYPE ], \
	[ EN_IS_MULTI_HASHMAP, TEST_MB_IS_MULTI_HASHMAP ], \
	[ EN_IS_STR_MULTI_HASHMAP, TEST_MB_IS_STR_MULTI_HASHMAP ], \
	[ EN_IS_INDEX_MULTI_HASHMAP, TEST_MB_IS_INDEX_MULTI_HASHMAP ], \
	[ EN_IS_STR_MULTI_HASHMAP_TYPE, TEST_MB_IS_STR_MULTI_HASHMAP_TYPE ], \
	[ EN_IS_INDEX_MULTI_HASHMAP_TYPE, TEST_MB_IS_INDEX_MULTI_HASHMAP_TYPE ] \
]

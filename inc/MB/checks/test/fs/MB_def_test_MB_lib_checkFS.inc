
/*******************************************************************************
	Name:     MB Hash Array Definition of Check System Tests
	File:     MB_def_test_MB_lib_checkSystem.inc
	Version:  beta
	Date:     2021-06
	Author:   MB

	Description:
		Defines hash array of tests ckecking System
*******************************************************************************/


////////////////////////////////////////
// Exterior
////////////////////////////////////////

// ---- INCLUDES ----

// CHECKING FILE SYSTEM LIBRARY
#include <..\..\MB_lib_checkFS.inc>

// FILE SYSTEM CHECKINGS
#include <MB_def_test_MB_IS_DIR.inc>
#include <MB_def_test_MB_IS_FILE.inc>
#include <MB_def_test_MB_IS_PATH.inc>


////////////////////////////////////////
// Variables
////////////////////////////////////////

// ---- CONSTANTS ----

#define TEST_MB_LIB_CHECK_FS            [ \
	[ EN_IS_DIR, TEST_MB_IS_DIR ], \
	[ EN_IS_FILE, TEST_MB_IS_FILE ], \
	[ EN_IS_PATH, TEST_MB_IS_PATH ] \
]

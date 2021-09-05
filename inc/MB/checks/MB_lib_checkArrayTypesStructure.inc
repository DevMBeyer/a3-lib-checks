
/*******************************************************************************
	Name:     Macro Function Library - Structure Array Data Type Checks
	File:     MB_lib_checkArrayTypesStructure.inc
	Version:  beta
	Date:     2021-05
	Author:   MB

	Description:
		Any macro function checks certain extend data type each array element
		The return value of any macro function is always a boolean value.

	Contains:
		* MB_IS_HASHMAP_ARRAY
		* MB_IS_MULTI_HASHMAP_ARRAY
*******************************************************************************/


////////////////////////////////////////
// Exterior
////////////////////////////////////////

// ---- INCLUDES ----

#include <MB_lib_checkTypes.inc>
#include <MB_lib_checkTypesStructure.inc>


////////////////////////////////////////
// Functions
////////////////////////////////////////

// ---- CHECKINGS ----

// HASHMAPS

/*
	Description:
		checks if passed function argument is a hashmap array.

	Parameters:
		0: ARR <ANY>                        - anything, expects a HASHMAP array
		1: TYPES <ANY>                      - anything, expects key-value-pair

	Returns:
		<BOOL>                              - is a HASHMAP array

	Dependency:
		MB_IS_ARRAY                         - MB_lib_checkTypes.inc
		MB_IS_HASHMAP                       - MB_lib_checkTypesStructure.inc
*/
#define MB_IS_HASHMAP_ARRAY( ARR ) ( \
	MB_IS_ARRAY( ARR ) \
	and { ARR isEqualTo [] \
		or { \
			( ARR findIf { \
				!MB_IS_HASHMAP( _x ) \
			} ) isEqualTo -1 \
		} \
	} \
)

/*
	Description:
		checks if passed function argument is a multi dimensionic hashmap array.

	Remarks:
		* If there ist an array as value content, it must be a hashmap element

	Parameters:
		0: ARR <ANY>                        - anything, expects a MULTI HASHMAP array
		1: TYPES <ANY>                      - anything, expects key-value-pair

	Returns:
		<BOOL>                              - is a MULTI HASHMAP array

	Dependency:
		MB_IS_ARRAY                         - MB_lib_checkTypes.inc
		MB_IS_MULTI_HASHMAP                 - MB_lib_checkTypesStructure.inc
*/
#define MB_IS_MULTI_HASHMAP_ARRAY( ARR ) ( \
	MB_IS_ARRAY( ARR ) \
	and { ARR isEqualTo [] \
		or { \
			( ARR findIf { \
				!MB_IS_MULTI_HASHMAP( _x ) \
			} ) isEqualTo -1 \
		} \
	} \
)

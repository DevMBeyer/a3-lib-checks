
/*******************************************************************************
	Name:     Macro Function Library - Extended Array Data Type Checks
	File:     MB_lib_checkArrayTypesExtend.inc
	Version:  beta
	Date:     2021-05
	Author:   MB

	Description:
		Any macro function checks certain extend data type each array element
		The return value of any macro function is always a boolean value.

	Contains:
		* MB_IS_BINARY_ARRAY
		* MB_IS_UNIT_INTERVAL_ARRAY
		* MB_IS_INTEGER_ARRAY
		* MB_IS_INDEX_ARRAY
		* MB_IS_COUNTER_ARRAY
*******************************************************************************/


////////////////////////////////////////
// Exterior
////////////////////////////////////////

// ---- INCLUDES ----

#include <MB_lib_checkTypes.inc>
#include <MB_lib_checkTypesExtend.inc>


////////////////////////////////////////
// Functions
////////////////////////////////////////

// ---- CHECKINGS ----

// ARRAY DATA TYPES

/*
	Description:
		checks if passed function argument is a binary array.

	Parameters:
		0: ARR <ANY>                        - anything, expects a binary array

	Returns:
		<BOOL>                              - is a binary array

	Dependency:
		MB_IS_ARRAY                         - MB_lib_checkTypes.inc
		MB_IS_BINARY                        - MB_lib_checkTypesExtend.inc
*/
#define MB_IS_BINARY_ARRAY( ARR ) ( \
	MB_IS_ARRAY( ARR ) \
	and { \
		( ARR findIf { \
			!MB_IS_BINARY( _x ) \
		} ) isEqualTo -1 \
	} \
)

/*
	Description:
		checks if passed function argument is aa unit interval array.

	Parameters:
		0: ARR <ANY>                        - anything, expects an unit interval array

	Returns:
		<BOOL>                              - is an unitr interval array

	Dependency:
		MB_IS_ARRAY                         - MB_lib_checkTypes.inc
		MB_IS_UNIT_INTERVAL                 - MB_lib_checkTypesExtend.inc
*/
#define MB_IS_UNIT_INTERVAL_ARRAY( ARR ) ( \
	MB_IS_ARRAY( ARR ) \
	and { \
		( ARR findIf { \
			!MB_IS_UNIT_INTERVAL( _x ) \
		} ) isEqualTo -1 \
	} \
)

/*
	Description:
		checks if passed function argument is an integer array.

	Parameters:
		0: ARR <ANY>                        - anything, expects an integer array

	Returns:
		<BOOL>                              - is an integer array

	Dependency:
		MB_IS_ARRAY                         - MB_lib_checkTypes.inc
		MB_IS_INTEGER                       - MB_lib_checkTypesExtend.inc
*/
#define MB_IS_INTEGER_ARRAY( ARR ) ( \
	MB_IS_ARRAY( ARR ) \
	and { \
		( ARR findIf { \
			!MB_IS_INTEGER( _x ) \
		} ) isEqualTo -1 \
	} \
)

/*
	Description:
		checks if passed function argument is an index array.

	Parameters:
		0: ARR <ANY>                        - anything, expects an index array

	Returns:
		<BOOL>                              - is an index array

	Dependency:
		MB_IS_ARRAY                         - MB_lib_checkTypes.inc
		MB_IS_INDEX                         - MB_lib_checkTypesExtend.inc
*/
#define MB_IS_INDEX_ARRAY( ARR ) ( \
	MB_IS_ARRAY( ARR ) \
	and { \
		( ARR findIf { \
			!MB_IS_INDEX( _x ) \
		} ) isEqualTo -1 \
	} \
)

/*
	Description:
		checks if passed function argument is a counter array.

	Parameters:
		0: ARR <ANY>                        - anything, expects a counter array

	Returns:
		<BOOL>                              - is a counter array

	Dependency:
		MB_IS_ARRAY                         - MB_lib_checkTypes.inc
		MB_IS_COUNTER                       - MB_lib_checkTypesExtend.inc
*/
#define MB_IS_COUNTER_ARRAY( ARR ) ( \
	MB_IS_ARRAY( ARR ) \
	and { \
		( ARR findIf { \
			!MB_IS_COUNTER( _x ) \
		} ) isEqualTo -1 \
	} \
)

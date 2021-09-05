
/*******************************************************************************
	Name:     Macro Function Library - Extended Data Type Checks
	File:     MB_lib_checkTypesExtend.inc
	Version:  beta
	Date:     2021-05
	Author:   MB

	Description:
		Any macro function checks certain extended data type
		The return value of any macro function is always a boolean value.

	Contains:
		* MB_IS_BINARY
		* MB_IS_UNIT_INTERVAL
		* MB_IS_INTEGER
		* MB_IS_INDEX
		* MB_IS_COUNTER
*******************************************************************************/


/////////////////////////////////
// Exterior
////////////////////////////////////////

// ---- INCLUDES ----

#include <MB_lib_checkTypes.inc>


/////////////////////////////////
// Functions
////////////////////////////////////////

// ---- CHECKINGS ----

// EXTEND DATA TYPES

/*
	Description:
		checks if passed function argument is a binary.

	Parameters:
		0: NUMBER <ANY>                        - anything, expects a binary

	Returns:
		<BOOL>                              - is a binary
*/
#define MB_IS_BINARY( NUMBER ) ( \
	!isNil { NUMBER } \
	and { NUMBER isEqualTo 0 \
		or { NUMBER isEqualTo 1 } \
	} \
)

/*
	Description:
		checks if passed function argument is an unit interval.

	Parameters:
		0: NUMBER <ANY>                     - anything, expects an unit interval

	Returns:
		<BOOL>                              - is an unit interval

	Dependency:
		MB_IS_SCALAR                        - MB_lib_checkTypes.inc
*/
#define MB_IS_UNIT_INTERVAL( NUMBER ) ( \
	MB_IS_SCALAR( NUMBER ) \
	and { NUMBER >= -1 \
		and { NUMBER <= 1 } \
	} \
)

/*
	Description:
		checks if passed function argument is an integer

	Parameters:
		0: NUMBER <ANY>                     - anything, expects an integer

	Returns:
		<BOOL>                              - is an integer

	Dependency:
		MB_IS_SCALAR                        - MB_lib_checkTypes.inc
*/
#define MB_IS_INTEGER( NUMBER ) ( \
	MB_IS_SCALAR( NUMBER ) \
	and { NUMBER isEqualTo round ( NUMBER ) } \
)

/*
	Description:
		checks if passed function argument is an index

	Parameters:
		0: NUMBER <ANY>                     - anything, expects an index

	Returns:
		<BOOL>                              - is an index

	Dependency:
		MB_IS_INTEGER                       - included
*/
#define MB_IS_INDEX( NUMBER ) ( \
	MB_IS_INTEGER( NUMBER ) \
	and { NUMBER >= 0 } \
)

/*
	Description:
		checks if passed function argument is a counter.

	Parameters:
		0: NUMBER <ANY>                     - anything, expects an counter

	Returns:
		<BOOL>                              - is a counter

	Dependency:
		MB_IS_INTEGER                       - included
*/
#define MB_IS_COUNTER( NUMBER ) ( \
	MB_IS_INTEGER( NUMBER ) \
	and { NUMBER >= 1 } \
)


/*******************************************************************************
	Name:     Macro Function Library - Comparison Checks
	File:     MB_lib_checkComparisons.inc
	Version:  beta
	Date:     2021-05
	Author:   MB

	Description:
		Any macro function compares its arguments.
		The return value of any macro function is always a boolean value.

	Contains:
		* MB_COMPARE_TYPE
		* MB_COMPARE_ARGS
		* MB_COMPARE_ARRAY_SIZE
		* MB_COMPARE_ARRAY_SIZES
*******************************************************************************/


////////////////////////////////////////
// Exterior
////////////////////////////////////////

// ---- INCLUDES ----

#include <MB_lib_checkTypes.inc>
#include <MB_lib_checkTypesExtend.inc>
#include <MB_lib_checkArrayTypes.inc>
#include <MB_lib_checkArrayTypesExtend.inc>


////////////////////////////////////////
// Functions
////////////////////////////////////////

// ---- CHECKINGS ----

// COMPARISONS

/*
	Description:
		checks if passed function arguments are from the same data type

	Parameters:
		0: ARG_1 <ANY>                      - anything
		1: ARG_2 <ANY>                      - anything

	Returns:
		<BOOL>                              - are from the same data type
*/
#define MB_COMPARE_TYPE( ARG_1, ARG_2 ) ( \
	( !( isNil { ARG_1 } ) \
	and { !( isNil { ARG_2 } ) \
		and { ARG_1 isEqualType ARG_2 } \
	} ) \
	or { isNil { ARG_1 } and { isNil { ARG_2 } } } \
)

/*
	Description:
		checks if passed function arguments are totally equal

	Parameters:
		0: ARG_1 <ANY>                      - anything
		1: ARG_2 <ANY>                      - anything

	Returns:
		<BOOL>                              - are equal
*/
#define MB_COMPARE_ARGS( ARG_1, ARG_2 ) ( \
	( !( isNil { ARG_1 } ) \
	and { !( isNil { ARG_2 } ) \
		and { ARG_1 isEqualTo ARG_2 } \
	} ) \
	or { isNil { ARG_1 } and { isNil { ARG_2 } } } \
)

/*
	Description:
		checks if passed function arguments are an array and an index.
		checks if the array has the size of index.

	Parameters:
		0: ARR <ANY>                        - anything, expects array
		1: SIZE <ANY>                       - anything, expects scalar

	Returns:
		<BOOL>                              - is size

	Dependency:
		MB_IS_ARRAY                         - MB_lib_checkTypes.inc
		MB_IS_INDEX                         - MB_lib_checkTypesExtend.inc
*/
#define MB_COMPARE_ARRAY_SIZE( ARR, SIZE ) ( \
	MB_IS_ARRAY( ARR ) \
	and { MB_IS_INDEX( SIZE ) \
		and { ( count ARR ) isEqualTo SIZE } \
	} \
)

/*
	Description:
		checks if passed function arguments are an array and an index array.
		checks if the array has one of the size in index array.

	Parameters:
		0: ARR <ANY>                        - anything, expects array
		1: SIZES <ANY>                      - anything, expects indices

	Returns:
		<BOOL>                              - is one of sizes

	Dependency:
		MB_IS_ARRAY                         - MB_lib_checkTypes.inc
		MB_IS_INDEX_ARRAY                   - MB_lib_checkArrayTypes.inc
*/
#define MB_COMPARE_ARRAY_SIZES( ARR, SIZES ) ( \
	MB_IS_ARRAY( ARR ) \
	and { MB_IS_ARRAY( ARR ) \
		and { MB_IS_INDEX_ARRAY( SIZES ) \
			and { !( SIZES findIf { \
				( count ARR ) isEqualTo _x \
			} isEqualTo -1 ) } \
		} \
	} \
)

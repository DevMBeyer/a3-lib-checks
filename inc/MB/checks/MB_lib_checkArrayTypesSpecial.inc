
/*******************************************************************************
	Name:     Macro Function Library - Special Array Data Type Checks
	File:     MB_lib_checkArrayTypesSpecial.inc
	Version:  beta
	Date:     2021-05
	Author:   MB

	Description:
		Any macro function checks certain special data type each array element
		The return value of any macro function is always a boolean value.

	Contains:
		* MB_IS_SCALAR_RANGE_ARRAY
		* MB_IS_INTEGER_RANGE_ARRAY
		* MB_IS_INDEX_RANGE_ARRAY
		* MB_IS_COUNTER_RANGE_ARRAY
*******************************************************************************/


////////////////////////////////////////
// Exterior
////////////////////////////////////////

// ---- INCLUDES ----

#include <MB_lib_checkTypes.inc>
#include <MB_lib_checkTypesSpecial.inc>


////////////////////////////////////////
// Functions
////////////////////////////////////////

// ---- CHECKINGS ----

// RANGES

/*
	Description:
		checks if passed function argument is a VECTOR_2D array.

	Parameters:
		0: ARR <ANY>                        - anything, expects a scalar range array

	Returns:
		<BOOL>                              - is a scalar range array

	Dependency:
		MB_IS_ARRAY                         - MB_lib_checkTypes.inc
		MB_IS_RANGE_EXTEND_SCALAR           - MB_lib_checkTypesSpecial.inc
*/
#define MB_IS_SCALAR_RANGE_ARRAY( ARR ) ( \
	MB_IS_ARRAY( ARR ) \
	and { \
		( ARR findIf { \
			!MB_IS_RANGE_EXTEND_SCALAR( _x ) \
		} ) isEqualTo -1 \
	} \
)

/*
	Description:
		checks if passed function argument is a VECTOR_3D array.

	Parameters:
		0: ARR <ANY>                        - anything, expects an integer range array

	Returns:
		<BOOL>                              - is an integer range array

	Dependency:
		MB_IS_ARRAY                         - MB_lib_checkTypes.inc
		MB_IS_RANGE_EXTEND_INTEGER          - MB_lib_checkTypesSpecial.inc
*/
#define MB_IS_INTEGER_RANGE_ARRAY( ARR ) ( \
	MB_IS_ARRAY( ARR ) \
	and { \
		( ARR findIf { \
			!MB_IS_RANGE_EXTEND_INTEGER( _x ) \
		} ) isEqualTo -1 \
	} \
)

/*
	Description:
		checks if passed function argument is a UNIT_VECTOR array.

	Parameters:
		0: ARR <ANY>                        - anything, expects an index range array

	Returns:
		<BOOL>                              - is an index range array

	Dependency:
		MB_IS_ARRAY                         - MB_lib_checkTypes.inc
		MB_IS_RANGE_EXTEND_INDEX            - MB_lib_checkTypesSpecial.inc
*/
#define MB_IS_INDEX_RANGE_ARRAY( ARR ) ( \
	MB_IS_ARRAY( ARR ) \
	and { \
		( ARR findIf { \
			!MB_IS_RANGE_EXTEND_INDEX( _x ) \
		} ) isEqualTo -1 \
	} \
)

/*
	Description:
		checks if passed function argument is a UNIT_VECTOR array.

	Parameters:
		0: ARR <ANY>                        - anything, expects a counter range array

	Returns:
		<BOOL>                              - is a counter range array

	Dependency:
		MB_IS_ARRAY                         - MB_lib_checkTypes.inc
		MB_IS_RANGE_EXTEND_COUNTER          - MB_lib_checkTypesSpecial.inc
*/
#define MB_IS_COUNTER_RANGE_ARRAY( ARR ) ( \
	MB_IS_ARRAY( ARR ) \
	and { \
		( ARR findIf { \
			!MB_IS_RANGE_EXTEND_COUNTER( _x ) \
		} ) isEqualTo -1 \
	} \
)

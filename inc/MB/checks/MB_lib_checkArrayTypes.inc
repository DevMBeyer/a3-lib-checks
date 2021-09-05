
/*******************************************************************************
	Name:     Macro Function Library - Array Data Type Checks
	File:     MB_lib_checkArrayTypes.inc
	Version:  beta
	Date:     2021-05
	Author:   MB

	Description:
		Any macro function checks certain data type each array element
		The return value of any macro function is always a boolean value.

	Contains:
		* MB_IS_NIL_ARRAY
		* MB_IS_BOOL_ARRAY
		* MB_IS_SCALAR_ARRAY
		* MB_IS_STRING_ARRAY
		* MB_IS_MULTI_ARRAY
		* MB_IS_CODE_ARRAY
		* MB_IS_PRIMITIVE_ARRAY
		* MB_IS_ABSTRACT_ARRAY
*******************************************************************************/


////////////////////////////////////////
// Exterior
////////////////////////////////////////

// ---- INCLUDES ----

#include <MB_lib_checkTypes.inc>


////////////////////////////////////////
// Functions
////////////////////////////////////////

// ---- CHECKINGS ----

// ARRAY DATA TYPES

/*
	Description:
		checks if passed function argument is a nil array.

	Parameters:
		0: ARR <ANY>                        - anything, expects nil array

	Returns:
		<BOOL>                              - is a nil array

	Dependency:
		MB_IS_ARRAY                         - MB_lib_checkTypes.inc
		MB_IS_NIL                           - MB_lib_checkTypes.inc
*/
#define MB_IS_NIL_ARRAY( ARR ) ( \
	MB_IS_ARRAY( ARR ) \
	and { \
		( ARR findIf { \
			!MB_IS_NIL( _x ) \
		} ) isEqualTo -1 \
	} \
)

/*
	Description:
		checks if passed function argument is a boolean array.

	Parameters:
		0: ARR <ANY>                        - anything, expects boolean array

	Returns:
		<BOOL>                              - is a boolean array

	Dependency:
		MB_IS_ARRAY                         - MB_lib_checkTypes.inc
		MB_IS_BOOL                          - MB_lib_checkTypes.inc
*/
#define MB_IS_BOOL_ARRAY( ARR ) ( \
	MB_IS_ARRAY( ARR ) \
	and { \
		( ARR findIf { \
			!MB_IS_BOOL( _x ) \
		} ) isEqualTo -1 \
	} \
)

/*
	Description:
		checks if passed function argument is a scalar array.

	Parameters:
		0: ARR <ANY>                        - anything, expects scalar array

	Returns:
		<BOOL>                              - is a scalar array

	Dependency:
		MB_IS_ARRAY                         - MB_lib_checkTypes.inc
		MB_IS_SCALAR                        - MB_lib_checkTypes.inc
*/
#define MB_IS_SCALAR_ARRAY( ARR ) ( \
	MB_IS_ARRAY( ARR ) \
	and { \
		( ARR findIf { \
			!MB_IS_SCALAR( _x ) \
		} ) isEqualTo -1 \
	} \
)

/*
	Description:
		checks if passed function argument is a string array.

	Parameters:
		0: ARR <ANY>                        - anything, expects string array

	Returns:
		<BOOL>                              - is a string array

	Dependency:
		MB_IS_ARRAY                         - MB_lib_checkTypes.inc
		MB_IS_STRING                        - MB_lib_checkTypes.inc
*/
#define MB_IS_STRING_ARRAY( ARR ) ( \
	MB_IS_ARRAY( ARR ) \
	and { \
		( ARR findIf { \
			!MB_IS_STRING( _x ) \
		} ) isEqualTo -1 \
	} \
)

/*
	Description:
		checks if passed function argument is a multi dimensional array.

	Parameters:
		0: ARR <ANY>                        - anything, expects multi dimensional array

	Returns:
		<BOOL>                              - is a multi dimensional array

	Dependency:
		MB_IS_ARRAY                         - MB_lib_checkTypes.inc
*/
#define MB_IS_MULTI_ARRAY( ARR ) ( \
	MB_IS_ARRAY( ARR ) \
	and { \
		( ARR findIf { \
			!MB_IS_ARRAY( _x ) \
		} ) isEqualTo -1 \
	} \
)

/*
	Description:
		checks if passed function argument is a code array.

	Parameters:
		0: ARR <ANY>                        - anything, expects a code array

	Returns:
		<BOOL>                              - is a code array

	Dependency:
		MB_IS_ARRAY                         - MB_lib_checkTypes.inc
		MB_IS_CODE                          - MB_lib_checkTypes.inc
*/
#define MB_IS_CODE_ARRAY( ARR ) ( \
	MB_IS_ARRAY( ARR ) \
	and { \
		( ARR findIf { \
			!MB_IS_CODE( _x ) \
		} ) isEqualTo -1 \
	} \
)

/*
	Description:
		checks if passed function argument is a primitiv data type array.

	Parameters:
		0: ARR <ANY>                        - anything, expects a primitiv data type array

	Returns:
		<BOOL>                              - is an a primitiv data type array

	Dependency:
		MB_IS_ARRAY                         - MB_lib_checkTypes.inc
		MB_IS_PRIMITIV                      - MB_lib_checkTypes.inc
*/
#define MB_IS_PRIMITIVE_ARRAY( ARR ) ( \
	MB_IS_ARRAY( ARR ) \
	and { \
		( ARR findIf { \
			!MB_IS_PRIMITIVE( _x ) \
		} ) isEqualTo -1 \
	} \
)

/*
	Description:
		checks if passed function argument is an abstract data type array.

	Parameters:
		0: ARR <ANY>                        - anything, expects an abstract data type array

	Returns:
		<BOOL>                              - is an abstract data type array

	Dependency:
		MB_IS_ARRAY                         - MB_lib_checkTypes.inc
		MB_IS_ABSTRACT                      - MB_lib_checkTypes.inc
*/
#define MB_IS_ABSTRACT_ARRAY( ARR ) ( \
	MB_IS_ARRAY( ARR ) \
	and { \
		( ARR findIf { \
			!MB_IS_ABSTRACT( _x ) \
		} ) isEqualTo -1 \
	} \
)

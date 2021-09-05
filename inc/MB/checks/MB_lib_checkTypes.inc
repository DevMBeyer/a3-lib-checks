
/*******************************************************************************
	Name:     Macro Function Library - Data Type Checks
	File:     MB_lib_checkTypes.inc
	Version:  beta
	Date:     2021-05
	Author:   MB

	Description:
		Any macro function checks certain data type.
		The return value of any macro function is always a boolean value.

	Contains:
		* MB_IS_NIL
		* MB_IS_BOOL
		* MB_IS_SCALAR
		* MB_IS_STRING
		* MB_IS_ARRAY
		* MB_IS_CODE
		* MB_IS_PRIMITIVE
		* MB_IS_ABSTRACT
*******************************************************************************/


/////////////////////////////////
// Functions
////////////////////////////////////////

// ---- CHECKINGS ----

// DATA TYPES

/*
	Description:
		checks if passed function argument is nil.

	Parameters:
		0: ARG <ANY>                        - anything, expects nil

	Returns:
		<BOOL>                              - is nil
*/
#define MB_IS_NIL( ARG ) ( \
	isNil { ARG } \
)

/*
	Description:
		checks if passed function argument is boolean.

	Parameters:
		0: ARG <ANY>                        - anything, expects boolean

	Returns:
		<BOOL>                              - is boolean
*/
#define MB_IS_BOOL( ARG ) ( \
	!( isNil { ARG } ) \
	and { ARG isEqualType false } \
)

/*
	Description:
		checks if passed function argument is scalar.

	Parameters:
		0: ARG <ANY>                        - anything, expects scalar

	Returns:
		<BOOL>                              - is scalar
*/
#define MB_IS_SCALAR( ARG ) ( \
	!( isNil { ARG } ) \
	and { ARG isEqualType 0 } \
)

/*
	Description:
		checks if passed function argument is string.

	Parameters:
		0: ARG <ANY>                        - anything, expects string

	Returns:
		<BOOL>                              - is string
*/
#define MB_IS_STRING( ARG ) ( \
	!( isNil { ARG } ) \
	and { ARG isEqualType "" } \
)

/*
	Description:
		checks if passed function argument is array.

	Parameters:
		0: ARG <ANY>                        - anything, expects array

	Returns:
		<BOOL>                              - is array
*/
#define MB_IS_ARRAY( ARG ) ( \
	!( isNil { ARG } ) \
	and { ARG isEqualType [] } \
)

/*
	Description:
		checks if passed function argument is code.

	Parameters:
		0: ARG <ANY>                        - anything, expects code

	Returns:
		<BOOL>                              - is code
*/
#define MB_IS_CODE( ARG ) ( \
	!( isNil { ARG } ) \
	and { ARG isEqualType {} } \
)

/*
	Description:
		checks if passed function argument is a primitiv data type.

	Parameters:
		0: ARG <ANY>                        - anything, expects a primitiv datat type

	Returns:
		<BOOL>                              - is a primitiv datat type
*/
#define MB_IS_PRIMITIVE( ARG ) ( \
	!isNil { ARG } \
	and { ARG isEqualTypeAny [ false, 0, "", {}, [] ] } \
)

/*
	Description:
		checks if passed function argument is abstract data type.

	Parameters:
		0: ARG <ANY>                        - anything, expects abstract data type

	Returns:
		<BOOL>                              - is abstract data type
*/
#define MB_IS_ABSTRACT( ARG ) ( \
	!( isNil { ARG } ) \
	and { ARG isEqualTypeAny [ \
		objNull, \
		grpNull, \
		controlNull, \
		displayNull, \
		locationNull, \
		taskNull, \
		scriptNull, \
		configNull \
	] } \
)

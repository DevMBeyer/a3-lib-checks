
/*******************************************************************************
	Name:     Macro Function Library - Content Checks
	File:     MB_lib_checkContents.inc
	Version:  beta
	Date:     2021-05
	Author:   MB

	Description:
		Any macro function checks its argument for a specific data type.
		The return value of any macro function is always a boolean value.

	Contains:
		* MB_IS_EMPTY
		* MB_IS_EMPTY_BOOL
		* MB_IS_EMPTY_SCALAR
		* MB_IS_EMPTY_STRING
		* MB_IS_EMPTY_ARRAY
		* MB_IS_EMPTY_CODE
		* MB_IS_EMPTY_PRIMITIVE
		* MB_IS_EMPTY_ABSTRACT

		* MB_HAS_CONTENT
		* MB_HAS_BOOL_CONTENT
		* MB_HAS_SCALAR_CONTENT
		* MB_HAS_STRING_CONTENT
		* MB_HAS_ARRAY_CONTENT
		* MB_HAS_CODE_CONTENT
		* MB_HAS_PRIMITIV_CONTENT
		* MB_HAS_ABSTRACT_CONTENT
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

// --- CHECKINGS ----

// EMPTY

/*
	Description:
		checks if passed function argument is any empty argument
		empty means: nil, false, 0, "", {}, [], <Null>

	Parameters:
		0: ARG <ANY>                        - anything

	Returns:
		<BOOL>                              - is empty
*/
#define MB_IS_EMPTY( ARG ) ( \
	isNil { ARG } \
	or { ( ARG isEqualType false ) and { ARG isEqualTo false } \
		or { ( ARG isEqualType 0 ) and { ARG isEqualTo 0 } \
			or { ( ARG isEqualType "" ) and { ARG isEqualTo "" } \
				or { ( ARG isEqualType [] ) and { ARG isEqualTo [] } \
					or { ( ARG isEqualType {} ) and { ARG isEqualTo {} } \
						or { ARG isEqualTypeAny [ objNull, grpNull, controlNull, displayNull, locationNull, taskNull, scriptNull, configNull ] \
							and { isNull ARG } \
						} \
					} \
				} \
			} \
		} \
	} \
)

/*
	Description:
		checks if passed function argument is an empty bool
		empty means false

	Parameters:
		0: ARG <ANY>                        - anything

	Returns:
		<BOOL>                              - is bool empty
*/
#define MB_IS_EMPTY_BOOL( ARG ) ( \
	MB_IS_BOOL( ARG ) \
	and { ARG isEqualTo false } \
)

/*
	Description:
		checks if passed function argument is an empty scalar
		empty means 0

	Parameters:
		0: ARG <ANY>                        - anything

	Returns:
		<BOOL>                              - is bool empty
*/
#define MB_IS_EMPTY_SCALAR( ARG ) ( \
	MB_IS_SCALAR( ARG ) \
	and { ARG isEqualTo 0 } \
)

/*
	Description:
		checks if passed function argument is an empty string

	Parameters:
		0: ARG <ANY>                        - anything

	Returns:
		<BOOL>                              - is string empty

	Dependency:
		MB_IS_STRING                        - MB_lib_checkTypes.inc
*/
#define MB_IS_EMPTY_STRING( ARG ) ( \
	MB_IS_STRING( ARG ) \
	and { ARG isEqualTo "" } \
)

/*
	Description:
		checks if passed function argument is an empty array

	Parameters:
		0: ARG <ANY>                        - anything

	Returns:
		<BOOL>                              - is array empty

	Dependency:
		MB_IS_ARRAY                         - MB_lib_checkTypes.inc
*/
#define MB_IS_EMPTY_ARRAY( ARG ) ( \
	MB_IS_ARRAY( ARG ) \
	and { ARG isEqualTo [] } \
)

/*
	Description:
		checks if passed function argument is an empty code

	Parameters:
		0: ARG <ANY>                        - anything

	Returns:
		<BOOL>                              - is code empty

	Dependency:
		MB_IS_CODE                          - MB_lib_checkTypes.inc
*/
#define MB_IS_EMPTY_CODE( ARG ) ( \
	MB_IS_CODE( ARG ) \
	and { ARG isEqualTo {} } \
)

/*
	Description:
		checks if passed function argument is an empty primitive data type
		empty means: nil, false, 0, "", {}, []

	Parameters:
		0: ARG <ANY>                        - anything

	Returns:
		<BOOL>                              - is primitive data type empty

	Dependency:
		MB_IS_PRIMITIVE                     - MB_lib_checkTypes.inc
*/
#define MB_IS_EMPTY_PRIMITIVE( ARG ) ( \
	isNil { ARG } \
	or { ( ARG isEqualType false ) and { ARG isEqualTo false } \
		or { ( ARG isEqualType 0 ) and { ARG isEqualTo 0 } \
			or { ( ARG isEqualType "" ) and { ARG isEqualTo "" } \
				or { ( ARG isEqualType [] ) and { ARG isEqualTo [] } \
					or { ( ARG isEqualType {} ) and { ARG isEqualTo {} } } \
				} \
			} \
		} \
	} \
)

/*
	Description:
		checks if passed function argument is an empty abstract data type

	Parameters:
		0: ARG <ANY>                        - anything

	Returns:
		<BOOL>                              - is abstract data type empty

	Dependency:
		MB_IS_ABSTRACT                      - MB_lib_checkTypes.inc
*/
#define MB_IS_EMPTY_ABSTRACT( ARG ) ( \
	MB_IS_ABSTRACT( ARG ) \
	and { isNull ARG } \
)


// CONTENT

/*
	Description:
		checks if passed function argument is any content
		content means: not nil, false, 0, "", {}, [], <Null>

	Parameters:
		0: ARG <ANY>                        - anything

	Returns:
		<BOOL>                              - has content
*/
#define MB_HAS_CONTENT( ARG ) ( \
	!( isNil { ARG } ) \
	and { ( ARG isEqualType false ) and { !( ARG isEqualTo false ) } \
		or { ( ARG isEqualType 0 ) and { !( ARG isEqualTo 0 ) } \
			or { ( ARG isEqualType "" ) and { !( ARG isEqualTo "" ) } \
				or { ( ARG isEqualType [] ) and { !( ARG isEqualTo [] ) } \
					or { ( ARG isEqualType {} ) and { !( ARG isEqualTo {} ) } \
						or { ARG isEqualTypeAny [ objNull, grpNull, controlNull, displayNull, locationNull, taskNull, scriptNull, configNull ] \
							and { !( isNull ARG ) } \
						} \
					} \
				} \
			} \
		} \
	} \
)

/*
	Description:
		checks if passed function argument is an empty bool
		content means: true

	Parameters:
		0: ARG <ANY>                        - anything

	Returns:
		<BOOL>                              - is bool content
*/
#define MB_HAS_BOOL_CONTENT( ARG ) ( \
	MB_IS_BOOL( ARG ) \
	and { ARG isEqualTo true } \
)

/*
	Description:
		checks if passed function argument is a scalar with content
		content means: not 0

	Parameters:
		0: ARG <ANY>                        - anything

	Returns:
		<BOOL>                              - is scalar content
*/
#define MB_HAS_SCALAR_CONTENT( ARG ) ( \
	MB_IS_SCALAR( ARG ) \
	and { !(ARG isEqualTo 0) } \
)

/*
	Description:
		checks if passed function argument is a string with content

	Parameters:
		0: ARG <ANY>                        - anything

	Returns:
		<BOOL>                              - is string with content

	Dependency:
		MB_IS_STRING                        - MB_lib_checkTypes.inc
*/
#define MB_HAS_STRING_CONTENT( ARG ) ( \
	MB_IS_STRING( ARG ) \
	and { !( ARG isEqualTo "" ) } \
)

/*
	Description:
		checks if passed function argument is an array with content

	Parameters:
		0: ARG <ANY>                        - anything

	Returns:
		<BOOL>                              - is array with content

	Dependency:
		MB_IS_ARRAY                         - MB_lib_checkTypes.inc
*/
#define MB_HAS_ARRAY_CONTENT( ARG ) ( \
	MB_IS_ARRAY( ARG ) \
	and { !( ARG isEqualTo [] ) } \
)

/*
	Description:
		checks if passed function argument is a code with content

	Parameters:
		0: ARG <ANY>                        - anything

	Returns:
		<BOOL>                              - is code with content

	Dependency:
		MB_IS_CODE                          - MB_lib_checkTypes.inc
*/
#define MB_HAS_CODE_CONTENT( ARG ) ( \
	MB_IS_CODE( ARG ) \
	and { !( ARG isEqualTo {} ) } \
)

/*
	Description:
		checks if passed function argument is a primitive data type with content
		content means: not nil, false, 0, "", {}, []

	Parameters:
		0: ARG <ANY>                        - anything

	Returns:
		<BOOL>                              - is primitive data type with content

	Dependency:
		MB_IS_PRIMITIVE                     - MB_lib_checkTypes.inc
*/
#define MB_HAS_PRIMITIVE_CONTENT( ARG ) ( \
	!( isNil { ARG } ) \
	and { ( ARG isEqualType false ) and { ARG isEqualTo true } \
		or { ( ARG isEqualType 0 ) and { !(ARG isEqualTo 0) } \
			or { ( ARG isEqualType "" ) and { !(ARG isEqualTo "") } \
				or { ( ARG isEqualType [] ) and { !(ARG isEqualTo []) } \
					or { ( ARG isEqualType {} ) and { !(ARG isEqualTo {}) } } \
				} \
			} \
		} \
	} \
)

/*
	Description:
		checks if passed function argument is a abstract data type with content

	Parameters:
		0: ARG <ANY>                        - anything

	Returns:
		<BOOL>                              - is abstract data type with content

	Dependency:
		MB_IS_ABSTRACT                      - MB_lib_checkTypes.inc
*/
#define MB_HAS_ABSTRACT_CONTENT( ARG ) ( \
	MB_IS_ABSTRACT( ARG ) \
	and { !( isNull ARG ) } \
)

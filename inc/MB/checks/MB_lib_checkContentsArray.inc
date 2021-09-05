
/*******************************************************************************
	Name:     Macro Function Library - Content Array Checks
	File:     MB_lib_checkContentsArray.inc
	Version:  beta
	Date:     2021-05
	Author:   MB

	Description:
		Any macro function checks its argument for a specific array data type.
		The return value of any macro function is always a boolean value.

	Contains:
		* MB_IS_ANYTHING_ARRAY_EMPTY
		* MB_IS_BOOL_ARRAY_EMPTY
		* MB_IS_SCALAR_ARRAY_EMPTY
		* MB_IS_STRING_ARRAY_EMPTY
		* MB_IS_MULTI_ARRAY_EMPTY
		* MB_IS_CODE_ARRAY_EMPTY
		* MB_IS_PRIMITIVE_ARRAY_EMPTY
		* MB_IS_ABSTRACT_ARRAY_EMPTY

		* MB_HAS_ANYTHING_ARRAY_CONTENT
		* MB_HAS_BOOL_ARRAY_CONTENT
		* MB_HAS_SCALAR_ARRAY_CONTENT
		* MB_HAS_STRING_ARRAY_CONTENT
		* MB_HAS_MULTI_ARRAY_CONTENT
		* MB_HAS_CODE_ARRAY_CONTENT
		* MB_HAS_PRIMITIVE_ARRAY_CONTENT
		* MB_HAS_ABSTRACT_ARRAY_CONTENT
*******************************************************************************/


////////////////////////////////////////
// Exterior
////////////////////////////////////////

// ---- INCLUDES ----

#include <MB_lib_checkTypes.inc>
#include <MB_lib_checkTypesExtend.inc>
#include <MB_lib_checkContents.inc>


////////////////////////////////////////
// Functions
////////////////////////////////////////

// ---- CHECKINGS ----

// EMPTY

/*
	Description:
		checks if passed function argument is an anything array without a content

	Parameters:
		0: ARR <ANY>                        - anything

	Returns:
		<BOOL>                              - is anything array without content

	Dependency:
		MB_IS_ARRAY                         - MB_lib_checkTypes.inc
		MB_IS_EMPTY                         - MB_lib_checkContents.inc
*/
#define MB_IS_ANYTHING_ARRAY_EMPTY( ARR ) ( \
	MB_IS_ARRAY( ARR ) \
	and { !( ARR isEqualTo [] ) \
		and {  \
			( ARR findIf { \
				!MB_IS_EMPTY( _x ) \
			} isEqualTo -1 ) \
		} \
	} \
)

/*
	Description:
		checks if passed function argument is empty scalar array

	Parameters:
		0: ARR <ANY>                        - anything

	Returns:
		<BOOL>                              - is empty bool array

	Dependency:
		MB_IS_ARRAY                         - MB_lib_checkTypes.inc
		MB_IS_EMPTY_BOOL                    - MB_lib_checkContents.inc
*/
#define MB_IS_BOOL_ARRAY_EMPTY( ARR ) ( \
	MB_IS_ARRAY( ARR ) \
	and { !( ARR isEqualTo [] ) \
		and {  \
			( ARR findIf { \
				!MB_IS_EMPTY_BOOL( _x ) \
			} isEqualTo -1 ) \
		} \
	} \
)

/*
	Description:
		checks if passed function argument is empty boolean array

	Parameters:
		0: ARR <ANY>                        - anything

	Returns:
		<BOOL>                              - is empty scalar array

	Dependency:
		MB_IS_ARRAY                         - MB_lib_checkTypes.inc
		MB_IS_EMPTY_SCALAR                  - MB_lib_checkContents.inc
*/
#define MB_IS_SCALAR_ARRAY_EMPTY( ARR ) ( \
	MB_IS_ARRAY( ARR ) \
	and { !( ARR isEqualTo [] ) \
		and {  \
			( ARR findIf { \
				!MB_IS_EMPTY_SCALAR( _x ) \
			} isEqualTo -1 ) \
		} \
	} \
)

/*
	Description:
		checks if passed function argument is a string array without content

	Parameters:
		0: ARR <ANY>                        - anything

	Returns:
		<BOOL>                              - is string array without content

	Dependency:
		MB_IS_ARRAY                         - MB_lib_checkTypes.inc
		MB_IS_EMPTY_STRING                  - MB_lib_checkContents.inc
*/
#define MB_IS_STRING_ARRAY_EMPTY( ARR ) ( \
	MB_IS_ARRAY( ARR ) \
	and { !( ARR isEqualTo [] ) \
		and {  \
			( ARR findIf { \
				!MB_IS_EMPTY_STRING( _x ) \
			} isEqualTo -1 ) \
		} \
	} \
)

/*
	Description:
		checks if passed function argument is multi dimensional array without content

	Parameters:
		0: ARR <ANY>                        - anything

	Returns:
		<BOOL>                              - is multi dimensional array without content

	Dependency:
		MB_IS_ARRAY                         - MB_lib_checkTypes.inc
		MB_IS_EMPTY_ARRAY                   - MB_lib_checkContents.inc
*/
#define MB_IS_MULTI_ARRAY_EMPTY( ARR ) ( \
	MB_IS_ARRAY( ARR ) \
	and { !( ARR isEqualTo [] ) \
		and {  \
			( ARR findIf { \
				!MB_IS_EMPTY_ARRAY( _x ) \
			} isEqualTo -1 ) \
		} \
	} \
)

/*
	Description:
		checks if passed function argument is a code array without content

	Parameters:
		0: ARR <ANY>                        - anything

	Returns:
		<BOOL>                              - is code array without content

	Dependency:
		MB_IS_ARRAY                         - MB_lib_checkTypes.inc
		MB_IS_EMPTY_CODE                    - MB_lib_checkContents.inc
*/
#define MB_IS_CODE_ARRAY_EMPTY( ARR ) ( \
	MB_IS_ARRAY( ARR ) \
	and { !( ARR isEqualTo [] ) \
		and {  \
			( ARR findIf { \
				!MB_IS_EMPTY_CODE( _x ) \
			} isEqualTo -1 ) \
		} \
	} \
)

/*
	Description:
		checks if passed function argument is a primitive data type array without content

	Parameters:
		0: ARR <ANY>                        - anything

	Returns:
		<BOOL>                              - is primitive data type array without content

	Dependency:
		MB_IS_ARRAY                         - MB_lib_checkTypes.inc
		MB_IS_EMPTY_PRIMITIVE                - MB_lib_checkContents.inc
*/
#define MB_IS_PRIMITIVE_ARRAY_EMPTY( ARR ) ( \
	MB_IS_ARRAY( ARR ) \
	and { !( ARR isEqualTo [] ) \
		and { \
			( ARR findIf { \
				!MB_IS_EMPTY_PRIMITIVE( _x ) \
			} isEqualTo -1 ) \
		} \
	} \
)

/*
	Description:
		checks if passed function argument is a abstract data type array without content

	Parameters:
		0: ARR <ANY>                        - anything

	Returns:
		<BOOL>                              - is abstract data type array without content

	Dependency:
		MB_IS_ARRAY                         - MB_lib_checkTypes.inc
		MB_IS_EMPTY_ABSTRACT                - MB_lib_checkContents.inc
*/
#define MB_IS_ABSTRACT_ARRAY_EMPTY( ARR ) ( \
	MB_IS_ARRAY( ARR ) \
	and { !( ARR isEqualTo [] ) \
		and { \
			( ARR findIf { \
				!MB_IS_EMPTY_ABSTRACT( _x ) \
			} isEqualTo -1 ) \
		} \
	} \
)


// CONTENT

/*
	Description:
		checks if passed function argument is an array with a content

	Parameters:
		0: ARR <ANY>                        - anything

	Returns:
		<BOOL>                              - is array with a content

	Dependency:
		MB_IS_ARRAY                         - MB_lib_checkTypes.inc
		MB_HAS_CONTENT                      - MB_lib_checkContents.inc
*/
#define MB_HAS_ANYTHING_ARRAY_CONTENT( ARR ) ( \
	MB_IS_ARRAY( ARR ) \
	and { !( ARR isEqualTo [] ) \
		and {  \
			( ARR findIf { \
				!MB_HAS_CONTENT( _x ) \
			} isEqualTo -1 ) \
		} \
	} \
)

/*
	Description:
		checks if passed function argument is a boolean array with a content

	Parameters:
		0: ARR <ANY>                        - anything

	Returns:
		<BOOL>                              - is boolean array with a content

	Dependency:
		MB_IS_ARRAY                         - MB_lib_checkTypes.inc
		MB_HAS_BOOL_CONTENT                 - MB_lib_checkContents.inc
*/
#define MB_HAS_BOOL_ARRAY_CONTENT( ARR ) ( \
	MB_IS_ARRAY( ARR ) \
	and { !( ARR isEqualTo [] ) \
		and {  \
			( ARR findIf { \
				!MB_HAS_BOOL_CONTENT( _x ) \
			} isEqualTo -1 ) \
		} \
	} \
)

/*
	Description:
		checks if passed function argument is a scalar array with a content

	Parameters:
		0: ARR <ANY>                        - anything

	Returns:
		<BOOL>                              - is scalar array with a content

	Dependency:
		MB_IS_ARRAY                         - MB_lib_checkTypes.inc
		MB_HAS_SCALAR_CONTENT               - MB_lib_checkContents.inc
*/
#define MB_HAS_SCALAR_ARRAY_CONTENT( ARR ) ( \
	MB_IS_ARRAY( ARR ) \
	and { !( ARR isEqualTo [] ) \
		and { \
			( ARR findIf { \
				!MB_HAS_SCALAR_CONTENT( _x ) \
			} isEqualTo -1 ) \
		} \
	} \
)

/*
	Description:
		checks if passed function argument is a string array with content

	Parameters:
		0: ARR <ANY>                        - anything

	Returns:
		<BOOL>                              - is string array with content

	Dependency:
		MB_IS_ARRAY                         - MB_lib_checkTypes.inc
		MB_HAS_STRING_CONTENT               - MB_lib_checkContents.inc
*/
#define MB_HAS_STRING_ARRAY_CONTENT( ARR ) ( \
	MB_IS_ARRAY( ARR ) \
	and { !( ARR isEqualTo [] ) \
		and { \
			( ARR findIf { \
				!MB_HAS_STRING_CONTENT( _x ) \
			} isEqualTo -1 ) \
		} \
	} \
)

/*
	Description:
		checks if passed function argument is multi dimensional array with content

	Parameters:
		0: ARR <ANY>                        - anything

	Returns:
		<BOOL>                              - is multi dimensional array with content

	Dependency:
		MB_IS_ARRAY                         - MB_lib_checkTypes.inc
		MB_HAS_ARRAY_CONTENT                - MB_lib_checkContents.inc
*/
#define MB_HAS_MULTI_ARRAY_CONTENT( ARR ) ( \
	MB_IS_ARRAY( ARR ) \
	and { !( ARR isEqualTo [] ) \
		and { \
			( ARR findIf { \
				!MB_HAS_ARRAY_CONTENT( _x ) \
			} isEqualTo -1 ) \
		} \
	} \
)

/*
	Description:
		checks if passed function argument is a code array with content

	Parameters:
		0: ARR <ANY>                        - anything

	Returns:
		<BOOL>                              - is code array with content

	Dependency:
		MB_IS_ARRAY                         - MB_lib_checkTypes.inc
		MB_HAS_CODE_CONTENT                 - MB_lib_checkContents.inc
*/
#define MB_HAS_CODE_ARRAY_CONTENT( ARR ) ( \
	MB_IS_ARRAY( ARR ) \
	and { !( ARR isEqualTo [] ) \
		and { \
			( ARR findIf { \
				!MB_HAS_CODE_CONTENT( _x ) \
			} isEqualTo -1 ) \
		} \
	} \
)

/*
	Description:
		checks if passed function argument is a primitive data type array with content

	Parameters:
		0: ARR <ANY>                        - anything

	Returns:
		<BOOL>                              - is primitive data type array with content

	Dependency:
		MB_IS_ARRAY                         - MB_lib_checkTypes.inc
		MB_HAS_PRIMITIVE_CONTENT            - MB_lib_checkContents.inc
*/
#define MB_HAS_PRIMITIVE_ARRAY_CONTENT( ARR ) ( \
	MB_IS_ARRAY( ARR ) \
	and { !( ARR isEqualTo [] ) \
		and { \
			( ARR findIf { \
				!MB_HAS_PRIMITIVE_CONTENT( _x ) \
			} isEqualTo -1 ) \
		} \
	} \
)

/*
	Description:
		checks if passed function argument is a abstract data type array with content

	Parameters:
		0: ARR <ANY>                        - anything

	Returns:
		<BOOL>                              - is abstract data type array with content

	Dependency:
		MB_IS_ARRAY                         - MB_lib_checkTypes.inc
		MB_HAS_ABSTRACT_CONTENT             - MB_lib_checkContents.inc
*/
#define MB_HAS_ABSTRACT_ARRAY_CONTENT( ARR ) ( \
	MB_IS_ARRAY( ARR ) \
	and { !( ARR isEqualTo [] ) \
		and { \
			( ARR findIf { \
				!MB_HAS_ABSTRACT_CONTENT( _x ) \
			} isEqualTo -1 ) \
		} \
	} \
)

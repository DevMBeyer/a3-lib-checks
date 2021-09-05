
/*******************************************************************************
	Name:     Macro Function Library - Complex Array Data Type Checks
	File:     MB_lib_checkArrayTypesExtend.inc
	Version:  beta
	Date:     2021-05
	Author:   MB

	Description:
		Any macro function checks certain extend data type each array element
		The return value of any macro function is always a boolean value.

	Contains:
		* MB_IS_UNIT_VECTOR_ARRAY
		* MB_IS_VECTOR_ARRAY
		* MB_IS_VECTOR_2D_ARRAY
		* MB_IS_VECTOR_3D_ARRAY
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

// VECTORS

/*
	Description:
		checks if passed function argument is a UNIT_VECTOR array.

	Parameters:
		0: ARR <ANY>                        - anything, expects a UNIT_VECTOR array

	Returns:
		<BOOL>                              - is a UNIT_VECTOR array

	Dependency:
		MB_IS_ARRAY                         - MB_lib_checkTypes.inc
		MB_IS_UNIT_VECTOR                   - MB_lib_checkTypesComplex.inc
*/
#define MB_IS_UNIT_VECTOR_ARRAY( ARR ) ( \
	MB_IS_ARRAY( ARR ) \
	and { \
		( ARR findIf { \
			!MB_IS_VECTOR_UNIT( _x ) \
		} ) isEqualTo -1 \
	} \
)

/*
	Description:
		checks if passed function argument is any VECTOR array.

	Parameters:
		0: ARR <ANY>                        - anything, expects any VECTOR array

	Returns:
		<BOOL>                              - is any VECTOR array

	Dependency:
		MB_IS_ARRAY                         - MB_lib_checkTypes.inc
		MB_IS_VECTOR                        - MB_lib_checkTypesComplex.inc
*/
#define MB_IS_VECTOR_ARRAY( ARR ) ( \
	MB_IS_ARRAY( ARR ) \
	and { \
		( ARR findIf { \
			!MB_IS_VECTOR( _x ) \
		} ) isEqualTo -1 \
	} \
)

/*
	Description:
		checks if passed function argument is a VECTOR_2D array.

	Parameters:
		0: ARR <ANY>                        - anything, expects a VECTOR_2D array

	Returns:
		<BOOL>                              - is a VECTOR_2D array

	Dependency:
		MB_IS_ARRAY                         - MB_lib_checkTypes.inc
		MB_IS_VECTOR_2D                     - MB_lib_checkTypesComplex.inc
*/
#define MB_IS_VECTOR_2D_ARRAY( ARR ) ( \
	MB_IS_ARRAY( ARR ) \
	and { \
		( ARR findIf { \
			!MB_IS_VECTOR_2D( _x ) \
		} ) isEqualTo -1 \
	} \
)

/*
	Description:
		checks if passed function argument is a VECTOR_3D array.

	Parameters:
		0: ARR <ANY>                        - anything, expects a VECTOR_3D array

	Returns:
		<BOOL>                              - is a VECTOR_3D array

	Dependency:
		MB_IS_ARRAY                         - MB_lib_checkTypes.inc
		MB_IS_VECTOR_3D                     - MB_lib_checkTypesComplex.inc
*/
#define MB_IS_VECTOR_3D_ARRAY( ARR ) ( \
	MB_IS_ARRAY( ARR ) \
	and { \
		( ARR findIf { \
			!MB_IS_VECTOR_3D( _x ) \
		} ) isEqualTo -1 \
	} \
)

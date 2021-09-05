
/*******************************************************************************
	Name:     Macro Function Library - Complex Data Type Checks
	File:     MB_lib_checkTypeComplex.inc
	Version:  beta
	Date:     2021-05
	Author:   MB

	Description:
		Any macro function checks certain complex data type
		The return value of any macro function is always a boolean value.

	Contains:
		* MB_IS_VECTOR
		* MB_IS_VECTOR_2D
		* MB_IS_VECTOR_3D
		* MB_IS_VECTOR_UNIT
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
		checks if passed function argument is any Vector.

	Parameters:
		0: VECTOR <ANY>                     - anything, expectes any Vector

	Returns:
		<BOOL>                              - is a 2D Vector

	Dependency:
		MB_IS_ARRAY                         - MB_lib_checkTypes.inc
		MB_IS_SCALAR                        - MB_lib_checkTypes.inc
*/
#define MB_IS_VECTOR( VECTOR ) ( \
	MB_IS_ARRAY( VECTOR ) \
	and { private _cnt = count VECTOR; \
		_cnt isEqualTo 2 \
		and { MB_IS_SCALAR( VECTOR select 0 ) \
			and { MB_IS_SCALAR( VECTOR select 1 ) } \
		} \
		or { _cnt isEqualTo 3 \
			and { MB_IS_SCALAR( VECTOR select 0 ) \
				and { MB_IS_SCALAR( VECTOR select 1 ) \
					and { MB_IS_SCALAR( VECTOR select 2 ) } \
				} \
			} \
		} \
	} \
)

/*
	Description:
		checks if passed function argument is a 2D Vector.

	Parameters:
		0: VECTOR <ANY>                     - anything, expectes a 2D Vector

	Returns:
		<BOOL>                              - is a 2D Vector

	Dependency:
		MB_IS_ARRAY                         - MB_lib_checkTypes.inc
		MB_IS_SCALAR                        - MB_lib_checkTypes.inc
*/
#define MB_IS_VECTOR_2D( VECTOR ) ( \
	MB_IS_ARRAY( VECTOR ) \
	and { ( count VECTOR ) isEqualTo 2 \
		and { MB_IS_SCALAR( VECTOR select 0 ) \
			and { MB_IS_SCALAR( VECTOR select 1 ) } \
		} \
	} \
)

/*
	Description:
		checks if passed function argument is a 3D Vector.

	Parameters:
		0: VECTOR <ANY>                     - anything, expectes a 3D Vector

	Returns:
		<BOOL>                              - is a 3D Vector

	Dependency:
		MB_IS_ARRAY                         - MB_lib_checkTypes.inc
		MB_IS_SCALAR                        - MB_lib_checkTypes.inc
*/
#define MB_IS_VECTOR_3D( VECTOR ) ( \
	MB_IS_ARRAY( VECTOR ) \
	and { ( count VECTOR ) isEqualTo 3 \
		and { MB_IS_SCALAR( VECTOR select 0 ) \
			and { MB_IS_SCALAR( VECTOR select 1 ) \
				and { MB_IS_SCALAR( VECTOR select 2 ) } \
			} \
		} \
	} \
)

/*
	Description:
		checks if passed function argument is a Unit Vector.

	Parameters:
		0: VECTOR <ANY>                     - anything, expectes a Unit Vector

	Returns:
		<BOOL>                              - is an Unit Vector

	Dependency:
		MB_IS_ARRAY                         - MB_lib_checkTypes.inc
		MB_IS_UNIT_INTERVAL                 - MB_lib_checkTypesExtend.inc
*/
#define MB_IS_VECTOR_UNIT( VECTOR ) ( \
	MB_IS_ARRAY( VECTOR ) \
	and { ( count VECTOR ) isEqualTo 3 \
		and { MB_IS_UNIT_INTERVAL( VECTOR select 0 ) \
			and { MB_IS_UNIT_INTERVAL( VECTOR select 1 ) \
				and { MB_IS_UNIT_INTERVAL( VECTOR select 2 ) } \
			} \
		} \
	} \
)

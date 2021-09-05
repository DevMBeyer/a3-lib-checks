
/*******************************************************************************
	Name:     Macro Function Library - Special Data Type Checks
	File:     MB_lib_checkTypesSpecial.inc
	Version:  beta
	Date:     2021-05
	Author:   MB

	Description:
		Any macro function checks certain special data type
		The return value of any macro function is always a boolean value.

	Contains:
		* MB_IS_RANGE_SCALAR
		* MB_IS_RANGE_INTEGER
		* MB_IS_RANGE_INDEX
		* MB_IS_RANGE_COUNTER

		* MB_IS_RANGE_EXTEND_SCALAR
		* MB_IS_RANGE_EXTEND_INTEGER
		* MB_IS_RANGE_EXTEND_INDEX
		* MB_IS_RANGE_EXTEND_COUNTER
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

// RANGES

/*
	Description:
		checks if passed function argument is a scalar range

	Parameters:
		0: MINI <ANY>                       - anything, expects minimum scalar
		1: MAXI <ANY>                       - anything, expects maximum scalar

	Returns:
		<BOOL>                              - is scalar range

	Dependency:
		MB_IS_SCALAR                        - MB_lib_checkTypes.inc
*/
#define MB_IS_RANGE_SCALAR( MINI, MAXI ) ( \
	MB_IS_SCALAR( MINI ) \
	and { MB_IS_SCALAR( MAXI ) \
		and { MINI < MAXI } \
	} \
)

/*
	Description:
		checks if passed function argument is an integer range

	Parameters:
		0: MINI <ANY>                       - anything, expects minimum integer
		1: MAXI <ANY>                       - anything, expects maximum integer

	Returns:
		<BOOL>                              - is integer range

	Dependency:
		MB_IS_INTEGER                       - MB_lib_checkTypesExtend.inc
*/
#define MB_IS_RANGE_INTEGER( MINI, MAXI ) ( \
	MB_IS_INTEGER( MINI ) \
	and { MB_IS_INTEGER( MAXI ) \
		and { MINI < MAXI } \
	} \
)

/*
	Description:
		checks if passed function argument is an index range

	Parameters:
		0: MINI <ANY>                       - anything, expects minimum index
		1: MAXI <ANY>                       - anything, expects maximum index

	Returns:
		<BOOL>                              - is index range

	Dependency:
		MB_IS_INDEX                         - MB_lib_checkTypesExtend.inc
*/
#define MB_IS_RANGE_INDEX( MINI, MAXI ) ( \
	MB_IS_INDEX( MINI ) \
	and { MB_IS_INDEX( MAXI ) \
		and { MINI < MAXI } \
	} \
)

/*
	Description:
		checks if passed function argument is a counter range

	Parameters:
		0: MINI <ANY>                       - anything, expects minimum counter
		1: MAXI <ANY>                       - anything, expects maximum counter

	Returns:
		<BOOL>                              - is element range

	Dependency:
		MB_IS_COUNTER                       - MB_lib_checkTypesExtend.inc
*/
#define MB_IS_RANGE_COUNTER( MINI, MAXI ) ( \
	MB_IS_COUNTER( MINI ) \
	and { MB_IS_COUNTER( MAXI ) \
		and { MAXI >= 1 \
			and { MINI < MAXI } \
		} \
	} \
)

/*
	Description:
		checks if passed function argument is a extended scalar range

	Parameters:
		0: RANGE <ANY>                      - anything, expects extended scalar range

	Returns:
		<BOOL>                              - is array extended scalar range

	Dependency:
		MB_IS_ARRAY                         - MB_lib_checkTypes.inc
		MB_IS_SCALAR                        - MB_lib_checkTypes.inc
*/
#define MB_IS_RANGE_EXTEND_SCALAR( RANGE ) ( \
	MB_IS_ARRAY( RANGE ) \
	/* [] */ \
	and { ( count RANGE ) isEqualTo 0 \
		/* [<SCALAR>] or [NIL] */ \
		or { ( count RANGE ) isEqualTo 1 \
			and { isNil { RANGE select 0 } \
				or { MB_IS_SCALAR( RANGE select 0 ) } \
			} \
			\
			or { ( count RANGE ) isEqualTo 2 \
				/* [<SCALAR>,<NIL>] */ \
				and { MB_IS_SCALAR( RANGE select 0 ) \
					and { isNil { RANGE select 1 } } \
					/* [<NIL>,<SCALAR>] */ \
					or { isNil { RANGE select 0 } \
						and { MB_IS_SCALAR( RANGE select 1 ) } \
						/* [<SCALAR>,<SCALAR>] */\
						or { MB_IS_SCALAR( RANGE select 0 ) \
							and { MB_IS_SCALAR( RANGE select 1 ) \
								and { ( RANGE select 0 ) < ( RANGE select 1 ) } \
							} \
						} \
					} \
				} \
			} \
		} \
	} \
)

/*
	Description:
		checks if passed function argument is a extended integer range

	Parameters:
		0: RANGE <ANY>                      - anything, expects extended integer range

	Returns:
		<BOOL>                              - is array extended integer range

	Dependency:
		MB_IS_ARRAY                         - MB_lib_checkTypes.inc
		MB_IS_INTEGER                       - MB_lib_checkTypesExtend.inc
*/
#define MB_IS_RANGE_EXTEND_INTEGER( RANGE ) ( \
	MB_IS_ARRAY( RANGE ) \
	/* [] */ \
	and { ( count RANGE ) isEqualTo 0 \
		/* [<SCALAR>] or [<NIL>] */ \
		or { ( count RANGE ) isEqualTo 1 \
			and { isNil { RANGE select 0 } \
				or { MB_IS_INTEGER( RANGE select 0 ) } \
			} \
			\
			or { ( count RANGE ) isEqualTo 2 \
				/* [<SCALAR>,<NIL>] */ \
				and { MB_IS_INTEGER( RANGE select 0 ) \
					and { isNil { RANGE select 1 } } \
					/* [<NIL>,<SCALAR>] */ \
					or { isNil { RANGE select 0 } \
						and { MB_IS_INTEGER( RANGE select 1 ) } \
						/* [<SCALAR>,<SCALAR>] */ \
						or { MB_IS_INTEGER( RANGE select 0 ) \
							and { MB_IS_INTEGER( RANGE select 1 ) \
								and { ( RANGE select 0 ) < ( RANGE select 1 ) } \
							} \
						} \
					} \
				} \
			} \
		} \
	} \
)

/*
	Description:
		checks if passed function argument is a extended index range

	Parameters:
		0: RANGE <ANY>                      - anything, expects extended index range

	Returns:
		<BOOL>                              - is array extended index range

	Dependency:
		MB_IS_ARRAY                         - MB_lib_checkTypes.inc
		MB_IS_INDEX                         - MB_lib_checkTypesExtend.inc
*/
#define MB_IS_RANGE_EXTEND_INDEX( RANGE ) ( \
	MB_IS_ARRAY( RANGE ) \
	/* [] */ \
	and { ( count RANGE ) isEqualTo 0 \
		/* [<SCALAR>] or [<NIL>]*/ \
		or { ( count RANGE ) isEqualTo 1 \
			and { isNil { RANGE select 0 } \
				or { MB_IS_INDEX( RANGE select 0 ) } \
			} \
			\
			or { ( count RANGE ) isEqualTo 2 \
				/* [<SCALAR>,<NIL>] */ \
				and { MB_IS_INDEX( RANGE select 0 ) \
					and { isNil { RANGE select 1 } } \
					/* [<NIL>,<SCALAR>] */ \
					or { isNil { RANGE select 0 } \
						and { MB_IS_INDEX( RANGE select 1 ) } \
						/* [<SCALAR>,<SCALAR>] */ \
						or { MB_IS_INDEX( RANGE select 0 ) \
							and { MB_IS_INDEX( RANGE select 1 ) \
								and { ( RANGE select 0 ) < ( RANGE select 1 ) } \
							} \
						} \
					} \
				} \
			} \
		} \
	} \
)

/*
	Description:
		checks if passed function argument is a extended counter range

	Parameters:
		0: RANGE <ANY>                      - anything, expects extended counter range

	Returns:
		<BOOL>                              - is array extended counter range

	Dependency:
		MB_IS_ARRAY                         - MB_lib_checkTypes.inc
		MB_IS_COUNTER                       - MB_lib_checkTypesExtend.inc
*/
#define MB_IS_RANGE_EXTEND_COUNTER( RANGE ) ( \
	MB_IS_ARRAY( RANGE ) \
	/* [] */ \
	and { ( count RANGE ) isEqualTo 0 \
		/* [<SCALAR>] or [<NIL>] */ \
		or { ( count RANGE ) isEqualTo 1 \
			and { isNil { RANGE select 0 } \
				or { MB_IS_COUNTER( RANGE select 0 ) } \
			} \
			\
			or { ( count RANGE ) isEqualTo 2 \
				/* [<SCALAR>,<NIL>] */ \
				and { MB_IS_COUNTER( RANGE select 0 ) \
					and { isNil { RANGE select 1 } } \
					\
					/* [<NIL>,<SCALAR>] */ \
					or { isNil { RANGE select 0 } \
						and { MB_IS_COUNTER( RANGE select 1 ) } \
						\
						/* [<SCALAR>,<SCALAR>] */ \
						or { MB_IS_COUNTER( RANGE select 0 ) \
							and { MB_IS_COUNTER( RANGE select 1 ) \
								and { ( RANGE select 0 ) < ( RANGE select 1 ) } \
							} \
						} \
					} \
				} \
			} \
		} \
	} \
)

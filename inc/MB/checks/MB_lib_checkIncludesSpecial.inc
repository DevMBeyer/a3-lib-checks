
/*******************************************************************************
	Name:     Macro Function Library - Include Special Checks
	File:     MB_lib_checkIncludes.inc
	Version:  beta
	Date:     2021-05
	Author:   MB

	Description:
		Any macro function checks certain data that must be included each iteration.
		The return value of any macro function is always a boolean value.

	Contains:
		* MB_IN_RANGE_SCALAR
		* MB_IN_RANGE_INTEGER
		* MB_IN_RANGE_INDEX
		* MB_IN_RANGE_COUNTER

		* MB_IN_RANGE_EXTEND_SCALAR
		* MB_IN_RANGE_EXTEND_INTEGER
		* MB_IN_RANGE_EXTEND_INDEX
		* MB_IN_RANGE_EXTEND_COUNTER
*******************************************************************************/


/////////////////////////////////
// Exterior
////////////////////////////////////////

// ---- INCLUDES ----

#include <MB_lib_checkTypes.inc>
#include <MB_lib_checkTypesExtend.inc>
#include <MB_lib_checkContents.inc>
#include <MB_lib_checkIterations.inc>


/////////////////////////////////
// Functions
////////////////////////////////////////

// ---- CHECKINGS ----

// RANGES

/*
	Description:
		checks if passed function arguments are three scalars: NUMBER, MINI, MAXI
		checks if the NUMBER is within the scalar range of MINI and MAXI.

	Parameters:
		0: NUMBER <ANY>                     - anything, expects a scalar number
		1: MINI <ANY>                       - anything, expects a scalar minimum
		2: MAXI <ANY>                       - anything, expects a scalar maximum

	Returns:
		<BOOL>                              - is number within scalar minimum and maximum

	Dependency:
		MB_IS_SCALAR                        - MB_lib_checkTypes.inc
*/
#define MB_IN_RANGE_SCALAR( NUMBER, MINI, MAXI ) ( \
	MB_IS_SCALAR( NUMBER ) \
	and { MB_IS_SCALAR( NUMBER ) \
		and { MB_IS_SCALAR( NUMBER ) \
			and { MINI < MAXI \
				and { NUMBER >= MINI \
					and { NUMBER <= MAXI } \
				} \
			} \
		} \
	} \
)

/*
	Description:
		checks if passed function arguments are three integers: NUMBER, MINI, MAXI
		checks if the NUMBER is within the integer range of MINI and MAXI.

	Parameters:
		0: NUMBER <ANY>                     - anything, expects an integer number
		1: MINI <ANY>                       - anything, expects an integer minimum
		2: MAXI <ANY>                       - anything, expects an integer maximum

	Returns:
		<BOOL>                              - is number within integer minimum and maximum

	Dependency:
		MB_IS_INTEGER                       - MB_lib_checkTypesExtend.inc
*/
#define MB_IN_RANGE_INTEGER( NUMBER, MINI, MAXI ) ( \
	MB_IS_INTEGER( MINI ) \
	and { MB_IS_INTEGER( MAXI ) \
		and { MINI < MAXI \
			and { MB_IS_INTEGER( NUMBER ) \
				and { ( NUMBER >= MINI ) \
					and { NUMBER <= MAXI } \
				} \
			} \
		} \
	} \
)

/*
	Description:
		checks if passed function arguments are three indices: NUMBER, MINI, MAXI
		checks if the NUMBER is within the index range of MINI and MAXI.

	Parameters:
		0: NUMBER <ANY>                     - anything, expects an index number
		1: MINI <ANY>                       - anything, expects an index minimum
		2: MAXI <ANY>                       - anything, expects an index maximum

	Returns:
		<BOOL>                              - is number within index minimum and maximum

	Dependency:
		MB_IS_INDEX                         - MB_lib_checkTypesExtend.inc
*/
#define MB_IN_RANGE_INDEX( NUMBER, MINI, MAXI ) ( \
	MB_IS_INDEX( MINI ) \
	and { MB_IS_INDEX( MAXI ) \
		and { MINI < MAXI \
			and { MB_IS_INDEX( NUMBER ) \
				and { NUMBER >= MINI \
					and { NUMBER <= MAXI } \
				} \
			} \
		} \
	} \
)

/*
	Description:
		checks if passed function arguments are three counters: NUMBER, MINI, MAXI
		checks if the NUMBER is within the counter range of MINI and MAXI.

	Parameters:
		0: NUMBER <ANY>                     - anything, expects an counter number
		1: MINI <ANY>                       - anything, expects an counter minimum
		2: MAXI <ANY>                       - anything, expects an counter maximum

	Returns:
		<BOOL>                              - is number within counter minimum and maximum

	Dependency:
		MB_IS_INTEGER                       - MB_lib_checkTypesExtend.inc
*/
#define MB_IN_RANGE_COUNTER( NUMBER, MINI, MAXI ) ( \
	MB_IS_COUNTER( MINI ) \
	and { MINI >= 1 \
		and { MB_IS_COUNTER( MAXI ) \
			and { MAXI >= 1 \
				and { MINI < MAXI \
					and { MB_IS_COUNTER( NUMBER ) \
						and { NUMBER >= MINI \
							and { NUMBER <= MAXI } \
						} \
					} \
				} \
			} \
		} \
	} \
)

/*
	Description:
		checks if passed function arguments are scalar NUMBER and scalar RANGE array.
		checks if the NUMBER is within the scalar RANGE.

	Parameters:
		0: NUMBER <ANY>                     - anything, expects a scalar number
		1: RANGE <ANY>                      - anything, expects a scalar range

	Returns:
		<BOOL>                              - is number within scalar range

	Dependency:
		MB_IS_ARRAY                         - MB_lib_checkTypes.inc
		MB_IS_SCALAR                        - MB_lib_checkTypes.inc
*/
#define MB_IN_RANGE_EXTEND_SCALAR( NUMBER, RANGE ) ( \
	MB_IS_SCALAR( NUMBER ) \
	and { MB_IS_ARRAY( RANGE ) \
		/* [] */ \
		and { ( count RANGE ) isEqualTo 0 \
			/* [<SCALAR>] */ \
			or { ( count RANGE ) isEqualTo 1 \
				and { MB_IS_SCALAR( (RANGE select 0) ) \
					and { ( RANGE select 0 ) isEqualTo NUMBER } \
				} \
				\
				or { ( count RANGE ) isEqualTo 2 \
					/* [<SCALAR>,<NIL>] */ \
					and { MB_IS_SCALAR( (RANGE select 0) ) \
						and { isNil { RANGE select 1 } \
							and { ( RANGE select 0 ) <= NUMBER } \
						} \
						/* [<NIL>,<SCALAR>] */ \
						or { isNil { RANGE select 0 } \
							and { MB_IS_SCALAR( (RANGE select 1) ) \
								and { RANGE select 1 >= NUMBER } \
							} \
							/* [<SCALAR>,<SCALAR>] */ \
							or { MB_IS_SCALAR( (RANGE select 0) ) \
								and { MB_IS_SCALAR( (RANGE select 1) ) \
									and { ( RANGE select 0 ) < ( RANGE select 1 ) \
										and { ( RANGE select 0 ) <= NUMBER \
											and { ( RANGE select 1 ) >= NUMBER } \
										} \
									} \
								} \
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
		checks if passed function arguments are integer NUMBER and integer RANGE array.
		checks if the NUMBER is within the integer RANGE.

	Parameters:
		0: NUMBER <ANY>                     - anything, expects an integer number
		1: RANGE <ANY>                      - anything, expects an integer range

	Returns:
		<BOOL>                              - is number within integer range

	Dependency:
		MB_IS_ARRAY                         - MB_lib_checkTypes.inc
		MB_IS_INTEGER                       - MB_lib_checkTypesExtend.inc
*/
#define MB_IN_RANGE_EXTEND_INTEGER( NUMBER, RANGE ) ( \
	MB_IS_INTEGER( NUMBER ) \
	and { MB_IS_ARRAY( RANGE ) \
		/* [] */ \
		and { ( count RANGE ) isEqualTo 0 \
			/* [<SCALAR>] */ \
			or { ( count RANGE ) isEqualTo 1 \
				and { MB_IS_INTEGER( (RANGE select 0) ) \
					and { ( RANGE select 0 ) isEqualTo NUMBER } \
				} \
				\
				or { ( count RANGE ) isEqualTo 2 \
					/* [<SCALAR>,<NIL>] */ \
					and { MB_IS_INTEGER( (RANGE select 0) ) \
						and { isNil { RANGE select 1 } \
							and { ( RANGE select 0 ) <= NUMBER } \
						} \
					} \
					/* [<NIL>,<SCALAR>] */ \
					or { isNil { RANGE select 0 } \
						and { MB_IS_INTEGER( (RANGE select 1) ) \
							and { ( RANGE select 1 ) >= NUMBER } \
						} \
						/* [<SCALAR>,<SCALAR>] */ \
						or { MB_IS_INTEGER( (RANGE select 0) ) \
							and { MB_IS_INTEGER( (RANGE select 1) ) \
								and { ( RANGE select 0 ) < ( RANGE select 1 ) \
									and { ( RANGE select 0 ) <= NUMBER \
										and { ( RANGE select 1 ) >= NUMBER } \
									} \
								} \
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
		checks if passed function arguments are index NUMBER and index RANGE array.
		checks if the NUMBER is within the index RANGE.

	Parameters:
		0: NUMBER <ANY>                     - anything, expects an index number
		1: RANGE <ANY>                      - anything, expects an index range

	Returns:
		<BOOL>                              - is number within index range

	Dependency:
		MB_IS_ARRAY                         - MB_lib_checkTypes.inc
		MB_IS_INDEX                         - MB_lib_checkTypesExtend.inc
*/
#define MB_IN_RANGE_EXTEND_INDEX( NUMBER, RANGE ) ( \
	MB_IS_INDEX( NUMBER ) \
	and { MB_IS_ARRAY( RANGE ) \
		/* [] */ \
		and { ( count RANGE ) isEqualTo 0 \
			/* [<SCALAR>] */ \
			or { ( count RANGE ) isEqualTo 1 \
				and { MB_IS_INDEX( (RANGE select 0) ) \
					and { ( RANGE select 0 ) isEqualTo NUMBER } \
				} \
				\
				or { ( count RANGE ) isEqualTo 2 \
					/* [<SCALAR>,<NIL>] */ \
					and { MB_IS_INDEX( (RANGE select 0) ) \
						and { isNil { RANGE select 1 } \
							and { ( RANGE select 0 ) <= NUMBER } \
						} \
						/* [<NIL>,<SCALAR>] */ \
						or { isNil { RANGE select 0 } \
							and { MB_IS_INDEX( (RANGE select 1) ) \
								and { ( RANGE select 1 ) >= NUMBER } \
							} \
							/* [<SCALAR>,<SCALAR>] */ \
							or { MB_IS_INDEX( (RANGE select 0) ) \
								and { MB_IS_INDEX( (RANGE select 1) ) \
									and { ( RANGE select 0 ) < ( RANGE select 1 ) \
										and { ( RANGE select 0 ) <= NUMBER \
											and { ( RANGE select 1 ) >= NUMBER } \
										} \
									} \
								} \
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
		checks if passed function arguments are counter NUMBER and counter RANGE array.
		checks if the NUMBER is within the counter RANGE.

	Parameters:
		0: NUMBER <ANY>                     - anything, expects a counter number
		1: RANGE <ANY>                      - anything, expects a counter range

	Returns:
		<BOOL>                              - is number within counter range

	Dependency:
		MB_IS_ARRAY                         - MB_lib_checkTypes.inc
		MB_IS_INTEGER                       - MB_lib_checkTypesExtend.inc
*/
#define MB_IN_RANGE_EXTEND_COUNTER( NUMBER, RANGE ) ( \
	MB_IS_COUNTER( NUMBER ) \
	and { MB_IS_ARRAY( RANGE ) \
		/* [] */ \
		and { ( count RANGE ) isEqualTo 0 \
			/* [<SCALAR>] */ \
			or { ( count RANGE ) isEqualTo 1 \
				and { MB_IS_COUNTER( (RANGE select 0) ) \
					and { ( RANGE select 0 ) isEqualTo NUMBER } \
				} \
				\
				or { ( count RANGE ) isEqualTo 2 \
					/* [<SCALAR>,<NIL>] */ \
					and { MB_IS_COUNTER( (RANGE select 0) ) \
						and { isNil { RANGE select 1 } \
							and { ( RANGE select 0 ) <= NUMBER } \
						} \
					} \
					/* [<NIL>,<SCALAR>] */ \
					or { isNil { RANGE select 0 } \
						and { MB_IS_COUNTER( (RANGE select 1) ) \
							and { ( RANGE select 1 ) >= NUMBER } \
						} \
						/* [<SCALAR>,<SCALAR>] */ \
						or { MB_IS_COUNTER( (RANGE select 0) ) \
							and { MB_IS_COUNTER( (RANGE select 1) ) \
								and { ( RANGE select 0 ) < ( RANGE select 1 ) \
									and { ( RANGE select 0 ) <= NUMBER \
										and { ( RANGE select 1 ) >= NUMBER } \
									} \
								} \
							} \
						} \
					} \
				} \
			} \
		} \
	} \
)

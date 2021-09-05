
/*******************************************************************************
	Name:     Macro Function Library - Structure Data Type Checks
	File:     MB_lib_checkTypeStructure.inc
	Version:  beta
	Date:     2021-05
	Author:   MB

	Description:
		Any macro function checks certain complex data type
		The return value of any macro function is always a boolean value.

	Contains:
		* MB_IS_PAIR
		* MB_IS_STR_PAIR
		* MB_IS_INDEX_PAIR
		* MB_IS_STR_PAIR_TYPE
		* MB_IS_INDEX_PAIR_TYPE
		* MB_IS_STR_HASHMAP
		* MB_IS_HASHMAP
		* MB_IS_INDEX_HASHMAP
		* MB_IS_STR_HASHMAP_TYPE
		* MB_IS_INDEX_HASHMAP_TYPE
		* MB_IS_MULTI_HASHMAP
		* MB_IS_STR_MULTI_HASHMAP
		* MB_IS_INDEX_MULTI_HASHMAP
		* MB_IS_STR_MULTI_HASHMAP_TYPE
		* MB_IS_INDEX_MULTI_HASHMAP_TYPE
*******************************************************************************/


////////////////////////////////////////
// Exterior
////////////////////////////////////////

// ---- INCLUDES ----

#include <MB_lib_checkComparisons.inc>
#include <MB_lib_checkContents.inc>
#include <MB_lib_checkTypes.inc>
#include <MB_lib_checkTypesExtend.inc>
#include <MB_lib_checkArrayTypes.inc>


////////////////////////////////////////
// Functions
////////////////////////////////////////

// ---- CHECKINGS ----

// HASH MAPS

/*
	Description:
		checks if passed macro function argument is pair of two values.

	Parameters:
		0: PAIR <ANY>                       - anything, expects array

	Returns:
		<BOOL>                              - is an array with size of 2

	Dependency:
		MB_COMPARE_ARRAY_SIZE               - MB_lib_checkComparisons.inc
*/
#define MB_IS_PAIR( PAIR ) ( \
	MB_COMPARE_ARRAY_SIZE( PAIR, 2 ) \
)

/*
	Description:
		checks if passed macro function argument is pair of string key hashmap element.

	Parameters:
		0: PAIR <ANY>                       - anything, expects pair of hashmap element

	Returns:
		<BOOL>                              - is a pair of string key hashmap element

	Dependency:
		MB_COMPARE_ARRAY_SIZE               - MB_lib_checkComparisons.inc
		MB_HAS_STRING_CONTENT               - MB_lib_checkContents.inc
*/
#define MB_IS_STR_PAIR( PAIR ) ( \
	MB_COMPARE_ARRAY_SIZE( PAIR, 2 ) \
	and { MB_HAS_STRING_CONTENT( (PAIR select 0) ) } \
)

/*
	Description:
		checks if passed macro function argument is pair of index key hashmap element.

	Parameters:
		0: PAIR <ANY>                       - anything, expects pair of index key hashmap element

	Returns:
		<BOOL>                              - is a pair of index key hashmap element

	Dependency:
		MB_COMPARE_ARRAY_SIZE               - MB_lib_checkComparisons.inc
		MB_IS_INDEX                         - MB_lib_checkTypesExtend.inc
*/
#define MB_IS_INDEX_PAIR( PAIR ) ( \
	MB_COMPARE_ARRAY_SIZE( PAIR, 2 ) \
	and { MB_IS_INDEX( (PAIR select 0) ) } \
)

/*
	Description:
		checks if passed macro function argument is PAIR of string key hashmap element
		and matches datatype of PAIR-Value with the help of TYPE

	Parameters:
		0: PAIR <ANY>                       - anything, expects pair of string key hashmap element
		1: TYPE <ANY>                       - anything, expects empty datatype

	Returns:
		<BOOL>                              - is a pair of index key hashmap element

	Dependency:
		MB_COMPARE_ARRAY_SIZE               - MB_lib_checkComparisons.inc
		MB_HAS_STRING_CONTENT               - MB_lib_checkContents.inc
		MB_COMPARE_TYPE                     - MB_lib_checkComparisons.inc
*/
#define MB_IS_STR_PAIR_TYPE( PAIR, TYPE ) ( \
	MB_COMPARE_ARRAY_SIZE( PAIR, 2 ) \
	and { MB_HAS_STRING_CONTENT( (PAIR select 0) ) \
		and { MB_COMPARE_TYPE( (PAIR select 1), TYPE ) } \
	} \
)

/*
	Description:
		checks if passed macro function argument is PAIR of string key hashmap element
		and matches datatype of PAIR-Value with the help of TYPE

	Parameters:
		0: PAIR <ANY>                       - anything, expects pair of string key hashmap element
		1: TYPE <ANY>                       - anything, expects empty datatype

	Returns:
		<BOOL>                              - is a pair of index key hashmap element

	Dependency:
		MB_COMPARE_ARRAY_SIZE               - MB_lib_checkComparisons.inc
		MB_IS_INDEX                         - MB_lib_checkTypesExtend.inc
		MB_COMPARE_TYPE                     - MB_lib_checkComparisons.inc
*/
#define MB_IS_INDEX_PAIR_TYPE( PAIR, TYPE ) ( \
	MB_COMPARE_ARRAY_SIZE( PAIR, 2 ) \
	and { MB_IS_INDEX( (PAIR select 0) ) \
		and { MB_COMPARE_TYPE( (PAIR select 1), TYPE ) } \
	} \
)

/*
	Description:
		checks if passed macro function argument is a hashmap

	Parameters:
		0: MAP <ANY>                        - anything, expects hashmap

	Returns:
		<BOOL>                              - is hashmap

	Dependency:
		MB_IS_ARRAY                         - MB_lib_checkTypes.inc
		MB_IS_PAIR                          - <included>
*/
#define MB_IS_HASHMAP( MAP ) ( \
	MB_IS_ARRAY( MAP ) \
	and { ( (count MAP) isEqualTo 0 ) \
		or { \
			( MAP findIf { \
				!MB_IS_PAIR( _x ) \
			} isEqualTo -1 ) \
		} \
	} \
)

/*
	Description:
		checks if passed macro function argument is a string key hashmap

	Parameters:
		0: MAP <ANY>                        - anything, expects string key hashmap

	Returns:
		<BOOL>                              - is a string key hashmap

	Dependency:
		MB_IS_ARRAY                         - MB_lib_checkTypes.inc
		MB_IS_STR_PAIR                      - <included>
*/
#define MB_IS_STR_HASHMAP( MAP ) ( \
	MB_IS_ARRAY( MAP ) \
	and { ( (count MAP) isEqualTo 0 ) \
		or { \
			( MAP findIf { \
				!MB_IS_STR_PAIR( _x ) \
			} isEqualTo -1 ) \
		} \
	} \
)

/*
	Description:
		checks if passed macro function argument is an index key hashmap

	Parameters:
		0: MAP <ANY>                        - anything, expects index key hashmap

	Returns:
		<BOOL>                              - is an index key hashmap

	Dependency:
		MB_IS_ARRAY                         - MB_lib_checkTypes.inc
		MB_IS_INDEX_PAIR                    - <included>
*/
#define MB_IS_INDEX_HASHMAP( MAP ) ( \
	MB_IS_ARRAY( MAP ) \
	and { ( (count MAP) isEqualTo 0 ) \
		or { \
			( MAP findIf { \
				!MB_IS_INDEX_PAIR( _x ) \
			} isEqualTo -1 ) \
		} \
	} \
)/**/

/*
	Description:
		checks if passed macro function argument is a string key hashmap
		and matches datatype of each Value of hashmap pairs with the help of TYPE

	Parameters:
		0: MAP <ANY>                        - anything, expects string key hashmap
		1: TYPE <ANY>                       - anything, expects empty datatype

	Returns:
		<BOOL>                              - is a string key hashmap with value datatype

	Dependency:
		MB_IS_ARRAY                         - MB_lib_checkTypes.inc
		MB_IS_STR_PAIR_TYPE                 - <included>
*/
#define MB_IS_STR_HASHMAP_TYPE( MAP, TYPE ) ( \
	MB_IS_ARRAY( MAP ) \
	and { ( (count MAP) isEqualTo 0 ) \
		or { \
			( MAP findIf { \
				!MB_IS_STR_PAIR_TYPE( _x, TYPE ) \
			} isEqualTo -1 ) \
		} \
	} \
)/**/

/*
	Description:
		checks if passed macro function argument is a string key hashmap
		and matches datatype of each Value of hashmaps pair with the help of TYPE

	Parameters:
		0: MAP <ANY>                        - anything, expects index key hashmap
		1: TYPE <ANY>                       - anything, expects empty datatype

	Returns:
		<BOOL>                              - is an index key hashmap with value datatype

	Dependency:
		MB_IS_ARRAY                         - MB_lib_checkTypes.inc
		MB_IS_INDEX_PAIR_TYPE               - <included>
*/
#define MB_IS_INDEX_HASHMAP_TYPE( MAP, TYPE ) ( \
	MB_IS_ARRAY( MAP ) \
	and { ( (count MAP) isEqualTo 0 ) \
		or { \
			( MAP findIf { \
				!MB_IS_INDEX_PAIR_TYPE( _x, TYPE ) \
			} isEqualTo -1 ) \
		} \
	} \
)/**/

/*
	Description:
		checks if passed macro function argument is a multi dimensionic hashmap

	Remarks:
		* If there ist an array as value content, it must be an hashmap element!

	Parameters:
		0: MAP <ANY>                        - anything, expects multi dimensionic hashmap

	Returns:
		<BOOL>                              - is a multi dimensionic hashmap

	Examples:
		(code:)
		// for validation of multidimensional hashmap with arrays as value:
		private _vectorMap = [
		  [ "pos", "[ 1234, 5678 ]" ],
		  [ "dir", { [ 1, 0, -1 ] } ]
		];
		// prevent the Type of an array as value element of a multidimensional
		// hashmap
		private _pos = call (_posMap # 0 # 1);
		// gets value of hashmap element by call
		private _dir = compile (_posMap # 1 # 1);
		// gets value of hashmap element by compile
		(:code)

	Dependency:
		MB_COMPARE_ARRAY_SIZE               - MB_lib_checkComparisons.inc
*/
#define MB_IS_MULTI_HASHMAP( MAP ) ( \
	MB_IS_ARRAY( MAP ) \
	and { private [ "_fnc" ]; \
		scopeName "recursive"; \
		_fnc = { \
			/* is hashmap empty */ \
			( count _this ) isEqualTo 0 \
			or { \
				/* is hashmap */ \
				if ( \
					( /* is not hashmap */ \
						( _this findIf { \
						/* is not hashmap pair */ \
						!( /* is hashmap pair */ \
							MB_IS_ARRAY( _x ) \
							and { (count _x) isEqualTo 2 \
								and { MB_IS_ARRAY( (_x select 1) ) \
									/* is hashmap */ \
									and { (_x select 1) call _fnc } \
									or { true } \
								} \
							} \
						) \
					} ) isEqualTo -1 ) \
				) exitWith { \
					true \
				}; \
				false breakOut "recursive" \
			} \
		}; \
		MAP call _fnc \
	} \
)/**/

/*
	Description:
		checks if passed macro function argument is a multi dimensionic string key hashmap

	Remarks:
		* If there ist an array as value content, it must be an hashmap element!

	Parameters:
		0: MAP <ANY>                        - anything, expects multi dimensionic string key hashmap

	Returns:
		<BOOL>                              - is a multi dimensionic string key hashmap with value datatype

	Examples:
		(code:)
		// for validation of multidimensional hashmap with arrays as value:
		private _vectorMap = [
		  [ "pos", "[ 1234, 5678 ]" ],
		  [ "dir", { [ 1, 0, -1 ] } ]
		];
		// prevent the Type of an array as value element of a multidimensional
		// hashmap
		private _pos = call (_posMap # 0 # 1);
		// gets value of hashmap element by call
		private _dir = compile (_posMap # 1 # 1);
		// gets value of hashmap element by compile
		(:code)

	Dependency:
		MB_IS_ARRAY                         - MB_lib_checkTypes.inc
		MB_HAS_STRING_CONTENT               - MB_lib_checkContents.inc
		MB_COMPARE_TYPE                     - MB_lib_checkComparisons.inc
		MB_COMPARE_ARRAY_SIZE               - MB_lib_checkComparisons.inc
*/
#define MB_IS_STR_MULTI_HASHMAP( MAP ) ( \
	MB_IS_ARRAY( MAP ) \
	and { private [ "_fnc" ]; \
		scopeName "recursive"; \
		_fnc = { \
			/* is hashmap empty */ \
			( count _this ) isEqualTo 0 \
			or { \
				/* is hashmap */ \
				if ( \
					( /* is not hashmap */ \
						( _this findIf { \
						/* is not hashmap pair */ \
						!( /* is hashmap pair */ \
							MB_IS_ARRAY( _x ) \
							and { (count _x) isEqualTo 2 \
								and { MB_IS_STRING( (_x select 0) ) \
									and { MB_IS_ARRAY( (_x select 1) ) \
										/* is hashmap */ \
										and { (_x select 1) call _fnc } \
										or { true } \
									} \
								} \
							} \
						) \
					} ) isEqualTo -1 ) \
				) exitWith { \
					true \
				}; \
				false breakOut "recursive" \
			} \
		}; \
		MAP call _fnc \
	} \
)/**/

/*
	Description:
		checks if passed macro function argument is a multi dimensionic index key hashmap

	Remarks:
		* If there ist an array as value content, it must be an hashmap element!

	Parameters:
		0: MAP <ANY>                        - anything, expects multi dimensionic index key hashmap

	Returns:
		<BOOL>                              - is a multi dimensionic index key hashmap with value datatype

	Examples:
		(code:)
		// for validation of multidimensional hashmap with arrays as value:
		private _vectorMap = [
		  [ "pos", "[ 1234, 5678 ]" ],
		  [ "dir", { [ 1, 0, -1 ] } ]
		];
		// prevent the Type of an array as value element of a multidimensional
		// hashmap
		private _pos = call (_posMap # 0 # 1);
		// gets value of hashmap element by call
		private _dir = compile (_posMap # 1 # 1);
		// gets value of hashmap element by compile
		(:code)

	Dependency:
		MB_IS_ARRAY                         - MB_lib_checkTypes.inc
		MB_IS_INDEX                         - MB_lib_checkTypesExtend.inc
		MB_COMPARE_TYPE                     - MB_lib_checkComparisons.inc
		MB_COMPARE_ARRAY_SIZE               - MB_lib_checkComparisons.inc
*/
#define MB_IS_INDEX_MULTI_HASHMAP( MAP ) ( \
	MB_IS_ARRAY( MAP ) \
	and { private [ "_fnc" ]; \
		scopeName "recursive"; \
		_fnc = { \
			/* is hashmap empty */ \
			( count _this ) isEqualTo 0 \
			or { \
				/* is hashmap */ \
				if ( \
					( /* is not hashmap */ \
						( _this findIf { \
						/* is not hashmap pair */ \
						!( /* is hashmap pair */ \
							MB_IS_ARRAY( _x ) \
							and { (count _x) isEqualTo 2 \
								and { MB_IS_INDEX( (_x select 0) ) \
									and { MB_IS_ARRAY( (_x select 1) ) \
										/* is hashmap */ \
										and { (_x select 1) call _fnc } \
										or { true } \
									} \
								} \
							} \
						) \
					} ) isEqualTo -1 ) \
				) exitWith { \
					true \
				}; \
				false breakOut "recursive" \
			} \
		}; \
		MAP call _fnc \
	} \
)/**/


/*
	Description:
		checks if passed macro function argument is a multi dimensionic string key hashmap
		and matches datatype of each Value of multi dimensionic string key hashmap pairs with the help of TYPE

	Remarks:
		* If there ist an array as value content, it must be an hashmap element!

	Parameters:
		0: MAP <ANY>                        - anything, expects multi dimensionic string key hashmap
		1: TYPE <ANY>                       - anything, expects empty datatype

	Returns:
		<BOOL>                              - is a multi dimensionic string key hashmap with value datatype

	Examples:
		(code:)
		// for validation of multidimensional hashmap with arrays as value:
		private _vectorMap = [
		  [ "pos", "[ 1234, 5678 ]" ],
		  [ "dir", { [ 1, 0, -1 ] } ]
		];
		// prevent the Type of an array as value element of a multidimensional
		// hashmap
		private _pos = call (_posMap # 0 # 1);
		// gets value of hashmap element by call
		private _dir = compile (_posMap # 1 # 1);
		// gets value of hashmap element by compile
		(:code)

	Dependency:
		MB_IS_ARRAY                         - MB_lib_checkTypes.inc
		MB_HAS_STRING_CONTENT               - MB_lib_checkContents.inc
		MB_COMPARE_TYPE                     - MB_lib_checkComparisons.inc
		MB_COMPARE_ARRAY_SIZE               - MB_lib_checkComparisons.inc
*/
#define MB_IS_STR_MULTI_HASHMAP_TYPE( MAP, TYPE ) ( \
	MB_IS_ARRAY( MAP ) \
	and { private [ "_fnc" ]; \
		scopeName "recursive"; \
		_fnc = { \
			/* is hashmap empty */ \
			( count _this ) isEqualTo 0 \
			or { \
				/* is hashmap */ \
				if ( \
					( /* is not hashmap */ \
						( _this findIf { \
						/* is not hashmap pair */ \
						!( /* is hashmap pair */ \
							MB_COMPARE_ARRAY_SIZE( _x, 2 ) \
							and { MB_IS_STRING( (_x select 0) ) \
								and { MB_COMPARE_TYPE( (_x select 1), TYPE ) \
									or { MB_IS_ARRAY( (_x select 1) ) \
										/* is hashmap */ \
										and { (_x select 1) call _fnc } \
									} \
								} \
							} \
						) \
					} ) isEqualTo -1 ) \
				) exitWith { \
					true \
				}; \
				false breakOut "recursive" \
			} \
		}; \
		MAP call _fnc \
	} \
)

/*
	Description:
		checks if passed macro function argument is a multi dimensionic index key hashmap
		and matches datatype of each Value of multi dimensionic index key hashmap pairs with the help of TYPE

	Remarks:
		* If there ist an array as value content, it must be an hashmap element!

	Parameters:
		0: MAP <ANY>                        - anything, expects multi dimensionic index key hashmap
		1: TYPE <ANY>                       - anything, expects empty datatype

	Returns:
		<BOOL>                              - is a multi dimensionic index key hashmap with value datatype

	Examples:
		(code:)
		// for validation of multidimensional hashmap with arrays as value:
		private _vectorMap = [
		  [ "pos", "[ 1234, 5678 ]" ],
		  [ "dir", { [ 1, 0, -1 ] } ]
		];
		// prevent the Type of an array as value element of a multidimensional
		// hashmap
		private _pos = call (_posMap # 0 # 1);
		// gets value of hashmap element by call
		private _dir = compile (_posMap # 1 # 1);
		// gets value of hashmap element by compile
		(:code)

	Dependency:
		MB_IS_ARRAY                         - MB_lib_checkTypes.inc
		MB_IS_INDEX                         - MB_lib_checkTypesExtend.inc
		MB_COMPARE_TYPE                     - MB_lib_checkComparisons.inc
		MB_COMPARE_ARRAY_SIZE               - MB_lib_checkComparisons.inc
*/
#define MB_IS_INDEX_MULTI_HASHMAP_TYPE( MAP, TYPE ) ( \
	MB_IS_ARRAY( MAP ) \
	and { private [ "_fnc" ]; \
		scopeName "recursive"; \
		_fnc = { \
			/* is hashmap empty */ \
			( count _this ) isEqualTo 0 \
			or { \
				/* is hashmap */ \
				if ( \
					( /* is not hashmap */ \
						( _this findIf { \
						/* is not hashmap pair */ \
						!( /* is hashmap pair */ \
							MB_COMPARE_ARRAY_SIZE( _x, 2 ) \
							and { MB_IS_INDEX( (_x select 0) ) \
								and { MB_COMPARE_TYPE( (_x select 1), TYPE ) \
									or { MB_IS_ARRAY( (_x select 1) ) \
										/* is hashmap */ \
										and { (_x select 1) call _fnc } \
									} \
								} \
							} \
						) \
					} ) isEqualTo -1 ) \
				) exitWith { \
					true \
				}; \
				false breakOut "recursive" \
			} \
		}; \
		MAP call _fnc \
	} \
)

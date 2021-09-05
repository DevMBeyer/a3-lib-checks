
/*******************************************************************************
	Name:     Macro Function Library - Iteration Helpers
	File:     MB_lib_hlpIterations.inc
	Version:  beta
	Date:     2021-07
	Author:   MB

	Description:
		Any

	Contains:
		* MB_STR_REPLACE
*******************************************************************************/


////////////////////////////////////////
// Exterior
////////////////////////////////////////

// ---- INCLUDES ----

#include <..\checks\MB_lib_checkContentsArray.inc>


////////////////////////////////////////
// Functions
////////////////////////////////////////

// ---- ITERATIONS ----

/*
	Description:
		check

	Parameters:
		0: STRING <ANY>                     - anything, expects a string

	Return:
		<STRING> or <NIL>                   - replaced string or nil

	Dependency:
		MB_HAS_STRING_CONTENT               - MB_lib_checkContentsArray.inc
*/
#define MB_ITERATE_FIND_DEEP( DATA, VARS, COND_FIND, COND_DEEP ) ( \
	if ( MB_IS_ARRAY( DATA ) \
		and { MB_IS_ARRAY( VARS ) \
			and { MB_IS_CODE( COND_FIND ) \
				and { MB_IS_CODE( COND_DEEP ) } \
			} \
		} \
	) exitWith { \
		private [ "_fnc" ]; \
		scopeName "fnc"; \
		_fnc = { \
			( _this findIf { \
				if ( _x call COND_DEEP ) exitWith { \
					_indices append (_x call _fnc) \
				}; \
				_x call COND_FIND \
			} ) \
		}; \
		DATA call _fnc \
	}; \
	nil \
)


/*
	Description:
		check

	Parameters:
		0: STRING <ANY>                     - anything, expects a string

	Return:
		<STRING> or <NIL>                   - replaced string or nil

	Dependency:
		MB_HAS_STRING_CONTENT               - MB_lib_checkContentsArray.inc
*/
#define MB_ITERATE_FIND( DATA, COND ) ( \
	if ( MB_IS_STR_MULTI_HASHMAP( MAP ) \
		and { MB_HAS_STRING_ARRAY_CONTENT( KEYS ) } \
	) exitWith { \
		private [ "_fnc" ]; \
		private _indices = []; \
		scopeName "fnc"; \
		_fnc = { \
			{ \
				if( (_x select 0) isEqualTo (KEYS select 0) ) exitWith { \
					_indices pushBack (KEYS deleteAt 0); \
					if ( KEYS isEqualTo [] ) exitWith { _indices breakOut "fnc"}; \
					(_x select 1) call _fnc \
				} \
			} forEach _this \
		}; \
		MAP call _fnc \
	}; \
	nil \
)

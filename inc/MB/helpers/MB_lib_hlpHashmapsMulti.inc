
/*******************************************************************************
	Name:     Macro Function Library - Hashmap Helpers
	File:     MB_lib_hlpHashmaps.inc
	Version:  beta
	Date:     2021-07
	Author:   MB

	Description:
		Any macro function processes with one dimensional hashmaps

	Contains:
		MB_MULTI_MAP_GET_ELEM_BY_KEYS
		MB_MULTI_MAP_GET_INDICES_BY_KEYS
		MB_MULTI_MAP_GET_VALUE_BY_KEYS
		MB_MULTI_MAP_GET_ELEM_BY_INDICES
		MB_MULTI_MAP_GET_KEYS_BY_INDICES
		MB_MULTI_MAP_GET_VALUE_BY_INDICES
*******************************************************************************/


////////////////////////////////////////
// Exterior
////////////////////////////////////////

// ---- INCLUDES ----

#include <..\checks\MB_lib_checkTypesExtend.inc>
#include <..\checks\MB_lib_checkContentsArray.inc>


////////////////////////////////////////
// Functions
////////////////////////////////////////

// ---- HASAHMAP ----

/*
	Description:
		check if function arguments are an one dimensional hashmap and string with content.
		find INDICES of first matching key from hashmap

	Parameters:
		0: ARRAY <ANY>                      - anything, expects an array
		1: KEY <ANY>                        - anything, expects a string

	Return:
		<ANY> or <NIL>                      - hashmap element or nil

	Dependency:
		MB_IS_MULTI_HASHMAP                 - MB_lib_checkArrayTypesComplex.inc
		MB_HAS_STRING_ARRAY_CONTENT         - MB_lib_checkContentsArray.inc
*/
#define MB_MULTI_MAP_GET_INDICES_BY_KEYS( MAP, KEYS ) ( \
	if ( MB_IS_STR_MULTI_HASHMAP( MAP ) \
		and { MB_HAS_STRING_ARRAY_CONTENT( KEYS ) } \
	) then { \
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
	} else { nil } \
)

/*
	Description:
		check if function arguments are an one dimensional hashmap and string with content.
		find INDICES of first matching key from hashmap

	Parameters:
		0: ARRAY <ANY>                      - anything, expects an array
		1: KEY <ANY>                        - anything, expects a string

	Return:
		<ANY> or <NIL>                      - hashmap element or nil

	Dependency:
		MB_IS_MULTI_HASHMAP                 - MB_lib_checkArrayTypesComplex.inc
		MB_HAS_STRING_ARRAY_CONTENT         - MB_lib_checkContentsArray.inc
*/
#define MB_MULTI_MAP_GET_ELEM_BY_KEYS( MAP, KEYS ) ( \
	if ( MB_IS_STR_MULTI_HASHMAP( MAP ) \
		and { MB_HAS_STRING_ARRAY_CONTENT( KEYS ) } \
	) then { \
		private [ "_fnc" ]; \
		scopeName "fnc"; \
		_fnc = { \
			{ \
				if( (_x select 0) isEqualTo (KEYS select 0) ) exitWith { \
					KEYS deleteAt 0; \
					if ( KEYS isEqualTo [] ) exitWith { _x breakOut "fnc"}; \
					(_x select 1) call _fnc \
				} \
			} forEach _this \
		}; \
		MAP call _fnc \
	} else { nil } \
)

/*
	Description:
		check if function arguments are an one dimensional hashmap and string with content.
		find value of first matching key from hashmap

	Parameters:
		0: ARRAY <ANY>                      - anything, expects array
		1: KEYS <ANY>                        - anything, expects array

	Return:
		<ANY> or <NIL>                      - multi dimensional hashmap element value or nil

	Dependency:
		MB_IS_MULTI_HASHMAP                 - MB_lib_checkArrayTypesComplex.inc
		MB_HAS_STRING_ARRAY_CONTENT         - MB_lib_checkContentsArray.inc
*/
#define MB_MULTI_MAP_GET_VALUE_BY_KEYS( MAP, KEYS ) ( \
	if ( MB_IS_STR_MULTI_HASHMAP( MAP ) \
		and { MB_HAS_STRING_CONTENT( KEYS ) } \
	) then { \
		private [ "_fnc" ]; \
		scopeName "fnc"; \
		_fnc = { \
			{ \
				if( (_x select 0) isEqualTo (KEYS select 0) ) exitWith { \
					KEYS deleteAt 0; \
					if ( KEYS isEqualTo [] ) exitWith { (_x select 1) breakOut "fnc" }; \
					(_x select 1) call _fnc \
				} \
			} forEach _this \
		}; \
		MAP call _fnc \
	} else { nil } \
)

/*
	Description:
		check if function arguments are an one dimensional hashmap and INDICES.
		find element of first matching KEYS from hashmap

	Parameters:
		0: ARRAY <ANY>                      - anything, expects array
		1: KEYS <ANY>                       - anything, expects array

	Return:
		<ARRAY> or <NIL>                    - elemet from hashmap or nil

	Dependency:
		MB_IS_MULTI_HASHMAP                 - MB_lib_checkArrayTypesComplex.inc
		MB_HAS_INDEX_ARRAY_CONTENT          - MB_lib_checkContentsArray.inc
*/
#define MB_MULTI_MAP_GET_ELEM_BY_INDICES( MAP, INDICES ) ( \
	if ( MB_IS_INDEX_MULTI_HASHMAP( MAP ) \
		and { MB_HAS_INDEX_ARRAY_CONTENT( INDICES ) } \
	) then { \
		private [ "fnc" ]; \
		scopeName "fnc"; \
		_fnc = { \
			if ( INDICES isEqualTo [] ) exitWith { _this breakOut "fnc" }; \
			if ( _this isEqualTo nil ) exitWith { nil breakOut "fnc" }; \
			(_this select (INDICES deleteAt 0) call _fnc \
		}; \
		MAP call _fnc \
	} else { nil } \
)

/*
	Description:
		check if function arguments are an one dimensional hashmap and string with content.
		find INDICES of first matching KEYS from hashmap element

	Parameters:
		0: ARRAY <ANY>                      - anything, expects array
		1: INDICES <ANY>                    - anything, expects array

	Return:
		<STRING> or <NIL>                      - KEYS of HASHMAP element or nil

	Dependency:
		MB_IS_MULTI_HASHMAP                 - MB_lib_checkArrayTypesComplex.inc
		MB_HAS_INDEX_ARRAY_CONTENT          - MB_lib_checkContentsArray.inc
*/
#define MB_MULTI_MAP_GET_KEYS_BY_INDICES( MAP, INDICES ) ( \
	if ( MB_IS_INDEX_MULTI_HASHMAP( MAP ) \
		and { MB_HAS_INDEX_ARRAY_CONTENT( INDICES ) } \
	) then { \
		private [ "fnc" ]; \
		scopeName "fnc"; \
		_fnc = { \
			if ( INDICES isEqualTo [] ) exitWith { (_this select 0) breakOut "fnc" }; \
			if ( _this isEqualTo nil ) exitWith { nil breakOut "fnc" }; \
			(_this select (INDICES deleteAt 0) call _fnc \
		}; \
		MAP call _fnc \
	} else { nil } \
)

/*
	Description:
		check if function arguments are an one dimensional hashmap and string with content.
		find INDICES of first matching key from hashmap element

	Parameters:
		0: ARRAY <ANY>                      - anything, expects array
		1: INDICES <ANY>                    - anything, expects array

	Return:
		<ANY> or <NIL>                      - value of HASHMAP element or nil

	Dependency:
		MB_IS_MULTI_HASHMAP                 - MB_lib_checkArrayTypesComplex.inc
		MB_HAS_INDEX_ARRAY_CONTENT          - MB_lib_checkContentsArray.inc
*/
#define MB_MULTI_MAP_GET_VALUE_BY_INDICES( MAP, INDICES ) ( \
	if ( MB_IS_INDEX_MULTI_HASHMAP( MAP ) \
		and { MB_HAS_INDEX_ARRAY_CONTENT( INDICES ) } \
	) then { \
		private [ "_fnc" ]; \
		scopeName "fnc"; \
		/* hash value element */ \
		_fnc = { \
			private [ "_index","_found" ]; \
			_index = INDICES deleteAt 0; \
			/* seach for key */ \
			_found = _this findIf { \
				(_x select 0) isEqualTo _index \
			}; \
			/* find key */ \
			if !( _found isEqualTo -1 ) exitWith { \
				/* is reached */ \
				if( INDICES isEqualTo [] ) \
					then { ((_this select _found) select 1) breakOut "fnc" } \
					else { /* is value nil */ \
						if( isNil { ((_this select _found) select 1) } ) exitWith { \
							nil breakOut "fnc" \
						}; \
						((_this select _found) select 1) call _fnc } \
			}; \
			nil \
		}; \
		MAP call _fnc \
	} else { nil } \
)


/*******************************************************************************
	Name:     Macro Function Library - Hashmap Helpers
	File:     MB_lib_hlpHashmaps.inc
	Version:  beta
	Date:     2021-07
	Author:   MB

	Description:
		Any macro function processes with one dimensional hashmaps

	Contains:
		MB_MAP_GET_ELEM_BY_KEY
		MB_MAP_GET_INDEX_BY_KEY
		MB_MAP_GET_VALUE_BY_KEY
		MB_MAP_GET_ELEM_BY_INDEX
		MB_MAP_GET_KEY_BY_INDEX
		MB_MAP_GET_VALUE_BY_INDEX
*******************************************************************************/


////////////////////////////////////////
// Exterior
////////////////////////////////////////

// ---- INCLUDES ----

#include <..\checks\MB_lib_checkTypesExtend.inc>
#include <..\checks\MB_lib_checkContents.inc>


////////////////////////////////////////
// Functions
////////////////////////////////////////

// ---- HASAHMAP ----

/*
	Description:
		check if function arguments are an one dimensional hashmap and string with content.
		find index of first matching key from hashmap

	Parameters:
		0: ARRAY <ANY>                      - anything, expects an array
		1: KEY <ANY>                        - anything, expects a string

	Return:
		<SCALAR> or <NIL>                      - hashmap element or nil

	Dependency:
		MB_IS_HASHMAP                       - MB_lib_checkTypesComplex.inc
		MB_HAS_STRING_CONTENT               - MB_lib_checkContents.inc
*/
#define MB_MAP_GET_INDEX_BY_KEY( MAP, KEY ) ( \
	if ( MB_IS_STR_HASHMAP( MAP ) \
		and { MB_HAS_STRING_CONTENT( KEY ) } \
	) exitWith { \
		{ \
			if( (_x select 0)  isEqualTo KEY ) exitWith { _forEachIndex } \
		} forEach MAP \
	}; \
	nil \
)

/*
	Description:
		check if function arguments are an one dimensional hashmap and string with content.
		find index of first matching key from hashmap

	Parameters:
		0: ARRAY <ANY>                      - anything, expects an array
		1: KEY <ANY>                        - anything, expects a string

	Return:
		<ANY> or <NIL>                      - hashmap element or nil

	Dependency:
		MB_IS_HASHMAP                       - MB_lib_checkTypesComplex.inc
		MB_HAS_STRING_CONTENT               - MB_lib_checkContents.inc
*/
#define MB_MAP_GET_ELEM_BY_KEY( MAP, KEY ) ( \
	if ( MB_IS_STR_HASHMAP( MAP ) \
		and { MB_HAS_STRING_CONTENT( KEY ) } \
	) exitWith { \
		{ \
			if( (_x select 0)  isEqualTo KEY ) exitWith { _x } \
		} forEach MAP \
	}; \
	nil \
)

/*
	Description:
		check if function arguments are an one dimensional hashmap and string with content.
		find value of first matching key from hashmap

	Parameters:
		0: ARRAY <ANY>                      - anything, expects an array
		1: KEY <ANY>                        - anything, expects a string

	Return:
		<ANY> or <NIL>                      - hashmap element value or nil

	Dependency:
		MB_IS_HASHMAP                       - MB_lib_checkTypesComplex.inc
		MB_HAS_STRING_CONTENT               - MB_lib_checkContents.inc
*/
#define MB_MAP_GET_VALUE_BY_KEY( MAP, KEY ) ( \
	if ( MB_IS_STR_HASHMAP( MAP ) \
		and { MB_HAS_STRING_CONTENT( KEY ) } \
	) exitWith { \
		{ \
			if ( (_x select 0) isEqualTo KEY ) exitWith { \
				(_x select 1) \
			} \
		} forEach MAP \
	}; \
	nil \
)

/*
	Description:
		check if function arguments are an one dimensional hashmap and index.
		find element of first matching key from hashmap

	Parameters:
		0: ARRAY <ANY>                      - anything, expects an array
		1: KEY <ANY>                        - anything, expects a scalar

	Return:
		<ANY> or <NIL>                      - elemet from hashmap or nil

	Dependency:
		MB_IS_HASHMAP                       - MB_lib_checkTypesComplex.inc
		MB_IS_INDEX                         - MB_lib_checkTypesExtend.inc
*/
#define MB_MAP_GET_ELEM_BY_INDEX( MAP, INDEX ) ( \
	if ( MB_IS_INDEX_HASHMAP( MAP ) \
		and { MB_IS_INDEX( INDEX ) } \
	) exitWith { (MAP select INDEX) }; \
	nil \
)

/*
	Description:
		check if function arguments are an one dimensional hashmap and string with content.
		find index of first matching key from hashmap element

	Parameters:
		0: ARRAY <ANY>                      - anything, expects array
		1: INDEX <ANY>                      - anything, expects scalar

	Return:
		<STRING> or <NIL>                   - key of HASHMAP element or nil

	Dependency:
		MB_IS_HASHMAP                       - MB_lib_checkTypesExtend.inc
		MB_IS_INDEX                         - MB_lib_checkTypesExtend.inc
*/
#define MB_MAP_GET_KEY_BY_INDEX( MAP, INDEX ) ( \
	if ( MB_IS_INDEX_HASHMAP( MAP ) \
		and { MB_IS_INDEX( INDEX ) } \
	) exitWith { (MAP select INDEX) select 0 }; \
	nil \
)

/*
	Description:
		check if function arguments are an one dimensional hashmap and string with content.
		find index of first matching key from hashmap element

	Parameters:
		0: ARRAY <ANY>                      - anything, expects array
		1: INDEX <ANY>                      - anything, expects scalar

	Return:
		<ANY> or <NIL>                      - value of HASHMAP element or nil

	Dependency:
		MB_IS_HASHMAP                       - MB_lib_checkTypesExtend.inc
		MB_IS_INDEX                         - MB_lib_checkTypesExtend.inc
*/
#define MB_MAP_GET_VALUE_BY_INDEX( MAP, INDEX ) ( \
	if ( MB_IS_INDEX_HASHMAP( MAP ) \
		and { MB_IS_INDEX( INDEX ) } \
	) exitWith { (MAP select INDEX) select 1 }; \
	nil \
)

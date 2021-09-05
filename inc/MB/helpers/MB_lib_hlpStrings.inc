
/*******************************************************************************
	Name:     Macro Function Library - String Helpers
	File:     MB_lib_hlpStrings.inc
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

#include <..\checks\MB_lib_checkTypes.inc>
#include <..\checks\MB_lib_checkContentsArray.inc>


////////////////////////////////////////
// Functions
////////////////////////////////////////

// ---- STRINGS ----

/*
	Description:
		check if all function argumens are strings with content.
		replace all NEEDLE with REPLACE within STRING.

	Parameters:
		0: STRING <ANY>                     - anything, expects a string
		1: NEEDLE <ANY>                     - anything, expects a string
		2: REPLACE <ANY>                    - anything, expects a string

	Return:
		<STRING> or <NIL>                   - replaced string or nil

	Dependency:
		MB_HAS_STRING_CONTENT               - MB_lib_checkContentsArray.inc
*/
#define MB_STR_REPLACE( STRING, NEEDLE, REPLACE ) ( \
	if ( MB_HAS_STRING_CONTENT( STRING ) \
		and { MB_HAS_STRING_CONTENT( NEEDLE ) \
			and { MB_IS_STRING( REPLACE ) } \
		} \
	) then { \
		private [ "_fnc" ]; \
		private _return = ""; \
		private _pos = 0; \
		private _len = count NEEDLE; \
		_fnc = { \
			_pos = _this find NEEDLE; \
			if ( (_pos isEqualTo -1) or { (count _this) isEqualTo 0 } ) \
				exitWith { _return + _this }; \
			_return = _return + (_this select [ 0, _pos ]) + REPLACE; \
			(_this select [ _pos + _len ]) call _fnc; \
		}; \
		STRING call _fnc \
	} else { \
		nil \
	} \
)

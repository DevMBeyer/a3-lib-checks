
/*******************************************************************************
	Name:     Macro Function Library - Include Checks
	File:     MB_lib_checkIncludes.inc
	Version:  beta
	Date:     2021-05
	Author:   MB

	Description:
		Any macro function checks certain data that must be included each iteration.
		The return value of any macro function is always a boolean value.

	Contains:
		* MB_IN_CHARSET
		* MB_IN_ARR_CHARSET
*******************************************************************************/


/////////////////////////////////
// Exterior
////////////////////////////////////////

// ---- INCLUDES ----

#include <MB_lib_checkContents.inc>
#include <MB_lib_checkIterations.inc>


/////////////////////////////////
// Functions
////////////////////////////////////////

// ---- CHECKINGS ----

// INCLUDES

/*
	Description:
		checks if passed function arguments are two strings: TEXT, CHARSET
		checks if TEXT is composed with CHARSET.
		Both arguments must have a content!

	Parameters:
		0: TEXT <ANY>                       - anything, expects a text
		1: CHARSET <ANY>                    - anything, expects a charset string

	Returns:
		<BOOL>                              - is text composed with charset

	Dependency:
		MB_HAS_STRING_CONTENT               - MB_lib_checkContents.inc
		MB_EACH_CHAR_UNIQUE                 - MB_lib_checkIterations.inc
*/
#define MB_IN_CHARSET( TEXT, CHARSET ) ( \
	MB_HAS_STRING_CONTENT( TEXT ) \
	and { MB_EACH_CHAR_UNIQUE( CHARSET ) \
		and { \
			private _chrs = TEXT splitString ""; \
			private _set = CHARSET splitString ""; \
			( _chrs findIf { \
				!( _x in _set ) \
			} isEqualTo -1 ) \
		} \
	} \
)

/*
	Description:
		checks if passed function arguments are TEXT strin & CHARSET array
		checks if TEXT is composed with CHARSET.
		Both arguments must have a content!

	Parameters:
		0: TEXT <ANY>                       - anything, expects a text
		1: CHARSET <ANY>                    - anything, expects a charset array

	Returns:
		<BOOL>                              - is text composed with charset

	Dependency:
		MB_HAS_STRING_CONTENT               - MB_lib_checkContents.inc
		MB_EACH_CHAR_ELEM_UNIQUE            - MB_lib_checkIterations.inc
*/
#define MB_IN_ARR_CHARSET( TEXT, CHARSET ) ( \
	MB_HAS_STRING_CONTENT( TEXT ) \
	and { MB_EACH_CHAR_ELEM_UNIQUE( CHARSET ) \
		and { private _letters = TEXT splitString ""; \
			( ( _letters findIf { \
				!( _x in CHARSET ) \
			} ) isEqualTo -1 ) \
		} \
	} \
)

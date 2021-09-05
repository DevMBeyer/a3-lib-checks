
/*******************************************************************************
	Name:     Macro Function Library - File System Checks
	File:     MB_lib_checkFS.inc
	Version:  beta
	Date:     2021-05
	Author:   MB

	Description:
		Any macro function checks certain data type of File System.
		The return value of any macro function is always a boolean value.

	Contains:
		* MB_IS_DIR
		* MB_IS_FILE
		* MB_IS_PATH
*******************************************************************************/


////////////////////////////////////////
// Exterior
////////////////////////////////////////

// ---- INCLUDES ----

#include <..\vars\MB_def_charsets.inc>
#include <..\vars\MB_def_testAtoms.inc>

#include <MB_lib_checkTypes.inc>
#include <MB_lib_checkContents.inc>
#include <MB_lib_checkIncludes.inc>


////////////////////////////////////////
// Variables
////////////////////////////////////////

// ---- CONSTANTS ----

#define CHRS_ARR_SYSNAMES               ( CHRS_ARR_WORD_DIGIT + ["_"] )


/////////////////////////////////
// Functions
////////////////////////////////////////

// ---- CHECKINGS ----

// SYSTEM

/*
	Description:
		checks if passed macro function argument is a directory
		DIR arguent must have a string content!
		a-b,A-B,_ as FS characters are allowed!
		argument must be encapsulated with "\"!

	Parameters:
		0: DIR <ANY>                       - anything, expects a directory

	Returns:
		<BOOL>                              - is directory

	Examples:
		(code:)
		MB_IS_PATH( "\cat_1\gal_1\" );      // true
		MB_IS_PATH( "\cat_1\gal_1" );       // false - last character missing "\"
		MB_IS_PATH( "cat_1\gal_1\" );       // false - first character missing "\"
		MB_IS_PATH( "\cat-1\gal-1\" );      // false - wrong character "-"
		(:code)

	Dependency:
		MB_HAS_STRING_CONTENT               - MB_lib_checkContents.inc
		MB_IN_CHARSET                       - MB_lib_checkIncludes.inc
*/
#define MB_IS_DIR( DIR ) ( \
	MB_HAS_STRING_CONTENT( DIR ) \
	and { ( DIR find ( ATOM_SEPARATOR_DIR + ATOM_SEPARATOR_DIR ) ) isEqualTo -1 \
		and { (DIR find ATOM_SEPARATOR_DIR) isEqualTo 0 \
			and { ( DIR select [ (count DIR) -1 ] ) isEqualTo ATOM_SEPARATOR_DIR \
				/* TEST START */ \
				and { private _chrs = (CHRS_ARR_SYSNAMES + [ATOM_SEPARATOR_DIR]); \
					( ( (DIR splitString "") findIf { \
						!( _x in _chrs ) \
					} ) isEqualTo -1 ) \
				} \
			} \
		} \
	} \
)

/*
	Description:
		checks if passed macro function argumet is a file.
		FILE arguent must have a string content!
		a-b,A-B,_ as FS characters are allowed!

	Parameters:
		0: FILE <ANY>                       - anything, expects a file

	Returns:
		<BOOL>                              - is file

	Examples:
		(code:)
		MB_IS_FILE( "img_1.jpg" );          // true
		MB_IS_FILE( "foo.bar" );            // true
		MB_IS_FILE( "foobar" );             // false - first character missing "."
		MB_IS_FILE( "img-1.jpg" );          // false - wrong character "-"
		MB_IS_FILE( "\img_1.jpg" );         // false - wrong character "\"
		(:code)

	Dependency:
		MB_HAS_STRING_CONTENT               - MB_lib_checkContents.inc
		MB_IN_CHARSET                       - MB_lib_checkIncludes.inc
*/
#define MB_IS_FILE( FILE ) ( \
	MB_HAS_STRING_CONTENT( FILE ) \
	and { (FILE find (ATOM_SEPARATOR_FILE + ATOM_SEPARATOR_FILE)) isEqualTo -1 \
		and { !( (FILE find ATOM_SEPARATOR_FILE) isEqualTo -1 ) \
			and { private _parts = FILE splitString ATOM_SEPARATOR_FILE; \
				!isNil { (_parts select 0) } \
				and { /* match with FS characters */ \
					( ( ((_parts select 0) splitString "") findIf { \
						!( _x in CHRS_ARR_SYSNAMES ) \
					} ) isEqualTo -1 ) \
					and { !isNil { (_parts select 1) } \
						and { /* match with FS names characters */ \
							( ( ((_parts select 1) splitString "") findIf { \
								!( _x in CHRS_ARR_SYSNAMES ) \
							} ) isEqualTo -1 ) \
						} \
					} \
				} \
			} \
		} \
	} \
)


/*
	Description:
		checks if passed macrol function argumet is path.
		PATH arguent must have a string content!
		"\foo\bar.jpg"

	Parameters:
		0: PATH <ANY>                       - anything, expects a path

	Returns:
		<BOOL>                              - is path

	Examples:
		(code:)
		MB_IS_PATH( "\cat_1\gal_1\img_1.jpg" ); // true
		(:code)

	Dependency:
		MB_HAS_STRING_CONTENT               - MB_lib_checkContents.inc
*/
#define MB_IS_PATH( PATH ) ( \
	MB_HAS_STRING_CONTENT( PATH ) \
	/* not "\\" within string */ \
	and { ( PATH find ( ATOM_SEPARATOR_DIR + ATOM_SEPARATOR_DIR ) ) isEqualTo -1 \
		/* "\" first character in string */ \
		and { (PATH find ATOM_SEPARATOR_DIR) isEqualTo 0 \
			/* "." character within string */ \
			and { !( (PATH find ATOM_SEPARATOR_FILE) isEqualTo -1 ) \
				and { private _parts = PATH splitString ATOM_SEPARATOR_FILE; \
					/* exists string array */ \
					!isNil { (_parts select 1) } \
					and { /* not "\" last character in string */ \
						!(( (_parts select 0) select [ (count _parts) -1 ] ) isEqualTo ATOM_SEPARATOR_DIR) \
						/* match with FS with "\" name characters */ \
						and { private _chrs = (CHRS_ARR_SYSNAMES + [ATOM_SEPARATOR_DIR]); \
							( ( ((_parts select 0) splitString "") findIf { \
								!( _x in _chrs ) \
							} ) isEqualTo -1 ) \
							/* match with FS without "\" name characters */ \
							and { \
								( ( ((_parts select 1) splitString "") findIf { \
									!( _x in CHRS_ARR_SYSNAMES ) \
								} ) isEqualTo -1 ) \
							} \
						} \
					} \
				} \
			} \
		} \
	} \
)

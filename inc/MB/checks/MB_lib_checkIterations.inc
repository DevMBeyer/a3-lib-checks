
/*******************************************************************************
	Name:     Macro Function Library - Iteration Checks
	File:     MB_lib_checkIterations.inc
	Version:  beta
	Date:     2021-05
	Author:   MB

	Description:
		Any macro function checks certain data each iteration.
		The return value of any macro function is always a boolean value.

	Contains:
		* MB_EACH_TYPE_EQUAL
		* MB_EACH_TYPE_UNIQUE
		* MB_EACH_CHAR_UNIQUE
		* MB_EACH_CHAR_ELEM_UNIQUE
		* MB_EACH_INDEX_UNIQUE
*******************************************************************************/


/////////////////////////////////
// Exterior
////////////////////////////////////////

// ---- INCLUDES ----

#include <MB_lib_checkArrayTypesExtend.inc>
#include <MB_lib_checkTypes.inc>
#include <MB_lib_checkTypesExtend.inc>
#include <MB_lib_checkContents.inc>
#include <MB_lib_checkContentsArray.inc>
#include <MB_lib_checkComparisons.inc>


/////////////////////////////////
// Functions
////////////////////////////////////////

// ---- CHECKINGS ----

// ITERATIONS

/*
	Description:
		checks if passed function arguments are an array and a empty data type.
		checks if type of data matches the data type of the array elements each
		iteration.
		ARR argument must have an array content!

	Parameters:
		0: ARR <ANY>                        - anything, expects an array
		1: TYPE <ANY>                       - anything, expects an empty variable

	Returns:
		<BOOL>                              - is each datatype of array element equal

	Dependency:
		MB_IS_ARRAY                         - MB_lib_checkTypes.inc
		MB_COMPARE_TYPE                     - MB_lib_checkComparisons.inc
*/
#define MB_EACH_TYPE_EQUAL( ARR, TYPE ) ( \
	MB_HAS_ARRAY_CONTENT( ARR ) \
	and { MB_IS_EMPTY( TYPE ) \
		and { ( ARR findIf { \
				!MB_COMPARE_TYPE( _x, TYPE ) \
			} isEqualTo -1 ) \
		} \
	} \
)

/*
	Description:
		checks if passed function arguments are an array and an empty variable.
		checks if elements data type is unique to other elements data types
		of the array.
		ARR argument must have an array content!

	Parameters:
		0: TYPES <ANY>                      - anything, expects an array

	Returns:
		<BOOL>                              - is each data type unique to others
		                                      within the array

	Dependency:
		MB_HAS_ARRAY_CONTENT                - MB_lib_checkContents.inc
		MB_HAS_CONTENT                      - MB_lib_checkContents.inc
		MB_COMPARE_TYPE                     - MB_lib_checkComparisons.inc
*/
#define MB_EACH_TYPE_UNIQUE( TYPES ) ( \
	MB_HAS_ARRAY_CONTENT( TYPES ) \
	and { private _copy = +TYPES; \
		( ( _copy findIf { \
			MB_HAS_CONTENT( _x ) \
			or { private _elem = TYPES deleteAt 0; \
				!( \
					( TYPES findIf { \
						MB_COMPARE_TYPE( _elem, _x ) \
					} ) isEqualTo -1 \
				) \
			} \
		} ) isEqualTo -1 ) \
	} \
)

/*
	Description:
		checks if passed function argument is a string.
		checks if each charachter is unique to other charachter within the string.
		CHARS argument must have a string content!

	Parameters:
		0: CHARS <ANY>                      - anything, expects a array

	Returns:
		<BOOL>                              - is each string element is unique character within an array

	Dependency:
		MB_HAS_STRING_CONTENT               - MB_lib_checkContents.inc
*/
#define MB_EACH_CHAR_UNIQUE( CHARS ) ( \
	MB_HAS_STRING_CONTENT( CHARS ) \
	and { \
		private _arr = CHARS splitString ""; \
		private _copy= +_arr; \
		( _copy findIf { \
			private _char = _arr deleteAt 0; \
			_char in _arr \
		} ) isEqualTo -1 \
	} \
)

/*
	Description:
		checks if passed function argument is a string array.
		checks if each string is charachter and unique to other charachter within the array.
		CHARS argument must have an array content!

	Parameters:
		0: CHARS <ANY>                      - anything, expects a string array

	Returns:
		<BOOL>                              - is each char unique within the string array

	Dependency:
		MB_HAS_STRING_ARRAY_CONTENT         - MB_lib_checkContents.inc
*/
#define MB_EACH_CHAR_ELEM_UNIQUE( CHARS ) ( \
	MB_HAS_STRING_ARRAY_CONTENT( CHARS ) \
	and { private _copy= +CHARS; \
		private _chrs= +CHARS; \
		( _copy findIf { \
			private _char = _chrs deleteAt 0; \
			!( ( _chrs findIf { \
				!(( count _char ) isEqualTo 1) \
				or { _char isEqualTo _x } \
			} ) isEqualTo -1 ) \
		} ) isEqualTo -1 \
	} \
)

/*
	Description:
		checks if passed function argument is an array.
		checks if all elements are unique indices of the array.
		INDICES argument must have a index array content!

	Parameters:
		0: INDICES <ANY>                    - anything, expects an index array

	Returns:
		<BOOL>                              - is each index unique to others within
		                                      the array

	Dependency:
		MB_IS_INDEX_ARRAY                   - MB_lib_checkTypesExtend.inc
*/
#define MB_EACH_INDEX_UNIQUE( INDICES ) ( \
	MB_IS_INDEX_ARRAY( INDICES ) \
	and { !( (count INDICES) isEqualTo 0 ) \
		and { private _copy = +INDICES; \
			private _arr = +INDICES; \
			( _copy findIf { \
				private _index = _arr deleteAt 0; \
				!( _arr findIf { \
					_index isEqualTo _x \
				} isEqualTo -1 ) \
			} ) isEqualTo -1 \
		} \
	} \
)

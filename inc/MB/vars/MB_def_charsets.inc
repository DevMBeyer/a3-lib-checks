
/*******************************************************************************
	Name:     MB Macro Charactersets Definition
	File:     MB_def_charsets.inc
	Version:  beta
	Date:     2021-05
	Author:   MB

	Description:
		Defines several different character sets for futher use
*******************************************************************************/


////////////////////////////////////////
// Variables
////////////////////////////////////////

// ---- CONSTANTS ----

// ---- CHARACTERSETS

// CHARACTERS
// Controls Misc
#define CHR_NEW_LINE                    endl
#define CHR_TAB                         "	"
#define CHR_SPACE                       " "

// CHARACTERSETS
// Strings
#define CHRS_SPECIALS                   toString [ 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64 ]
#define CHRS_DIGIT                      "0123456789"
#define CHRS_WORD_UPPER                 "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
#define CHRS_WORD_LOWER                 "abcdefghijklmnopqrstuvwxyz"
#define CHRS_WORD                       ( CHRS_WORD_UPPER + CHRS_WORD_LOWER )
#define CHRS_WORD_DIGIT                 ( CHRS_WORD + CHRS_DIGIT )
#define CHRS_WHITESPACES                ( CHR_NEW_LINE + CHR_TAB + CHR_SPACE )
#define CHRS_PRINTABLE                  ( CHRS_WORD_DIGIT + CHRS_SPECIALS )
#define CHRS_TEXT                       ( CHRS_WORD_DIGIT + CHR_NEW_LINE + CHR_SPACE + CHRS_SPECIALS )
// Arrays
#define CHRS_ARR_SPECIALS               ( call { private _arr = []; for "_i" from 33 to 64 do { _arr pushBack (toString [ _i ]) }; _arr } )
#define CHRS_ARR_DIGIT                  [ '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' ]
#define CHRS_ARR_WORD_LOWER             [ 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' ]
#define CHRS_ARR_WORD_UPPER             [ 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' ]
#define CHRS_ARR_WORD                   ( CHRS_ARR_WORD_UPPER + CHRS_ARR_WORD_LOWER )
#define CHRS_ARR_WORD_DIGIT             ( CHRS_ARR_WORD + CHRS_ARR_DIGIT )
#define CHRS_ARR_WHITESPACES            [ CHR_TAB, CHR_SPACE, CHR_NEW_LINE ]
#define CHRS_ARR_PRINTABLE              ( CHRS_ARR_WORD_DIGIT + CHRS_ARR_SPECIALS )
#define CHRS_ARR_TEXT                   ( CHRS_ARR_WORD_DIGIT + CHRS_ARR_WHITESPACES + CHRS_ARR_SPECIALS )

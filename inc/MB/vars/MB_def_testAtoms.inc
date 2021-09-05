
/*******************************************************************************
	Name:     MB Macro Test argument Entities
	File:     MB_lib_testArgsEnt.inc
	Version:  beta
	Date:     2021-05
	Author:   MB

	Description:
		list of test argument entities
*******************************************************************************/


////////////////////////////////////////
// Exterior
////////////////////////////////////////

// ---- IMPORT ----

#include <MB_def_charsets.inc>


////////////////////////////////////////
// Variables
////////////////////////////////////////

// ---- CONSTANTS ----

// ---- Entities

// VOID
#define ATOM_VOID                       nil
// BOOLEANS
#define ATOM_TRUE                       true
#define ATOM_FALSE                      false

// NUMBERS
// Units
#define ATOM_UNIT_NEG                   -1
#define ATOM_UNIT_NULL                  0
#define ATOM_UNIT_POS                   1
// Floats
#define ATOM_FLOAT_NEG_XL               -12345.67890
#define ATOM_FLOAT_NEG_XS               -0.123456789
#define ATOM_FLOAT_POS_XS               0.123456789
#define ATOM_FLOAT_POS_XL               12345.67890
// Integers
#define ATOM_INTEGER_POS_XXL            1234567890
#define ATOM_INTEGER_NEG_XXL            -1234567890

// STRINGS
// Standards
#define ATOM_STR_EMPTY                  ""
#define ATOM_STR_CONTENT                "Hello World!"
// Metasyntactical Variables
#define ATOM_META_FU                    "fu"
#define ATOM_META_BAR                   "bar"
#define ATOM_META_QUX                   "qux"
#define ATOM_META_TOK                   "tok"

// FILE SYSTEM
// Seperators
#define ATOM_SEPARATOR_DIR             "\"
#define ATOM_SEPARATOR_FILE            "."
#define ATOM_SEPARATOR_DATA            ";"
#define ATOM_SEPARATOR_ENTITY          ","
#define ATOM_SEPARATOR_COLON           ":"
// Identifiers
#define ATOM_FOLDER_LOWER               "gallery_1"
#define ATOM_FOLDER_UPPER               "GALLERY_1"
#define ATOM_FOLDER_MIX                 "Gallery_1"
#define ATOM_SUBFOLDER_LOWER            "landscape"
#define ATOM_SUBFOLDER_UPPER            "LANDSCAPE"
#define ATOM_SUBFOLDER_MIX              "Landscape"
#define ATOM_FILENAME_LOWER             "picture_1"
#define ATOM_FILENAME_UPPER             "PICTURE_1"
#define ATOM_FILENAME_MIX               "Picture_1"
// Sufficies
#define ATOM_SUFFIX_LOWER               "jpg"
#define ATOM_SUFFIX_UPPER               "JPG"
#define ATOM_SUFFIX_MIX                 "Jpg"

// TEXTS
#define ATOM_WORD_LOWER                 "lorem"
#define ATOM_WORD_UPPER                 "LOREM"
#define ATOM_WORD_MIX                   "Lorem"
#define ATOM_PHRASE                     ( ATOM_WORD_MIX + " ipsum dolor sit amet" )
#define ATOM_SENTENCE                   ( ATOM_PHRASE + ", consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua." )
#define ATOM_PHARAGRAPH                 ( ATOM_SENTENCE + " At vero eos et accusam et justo duo dolores et ea rebum. Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet." + CHR_NEW_LINE + CHR_NEW_LINE )

// ABSTRACTS
// Nulls
#define ATOM_ABSTRACT_CONTROL_NULL      controlNull
#define ATOM_ABSTRACT_CONFIG_NULL       configNull
#define ATOM_ABSTRACT_DISPLAY_NULL      displayNull
#define ATOM_ABSTRACT_GROUP_NULL        grpNull
#define ATOM_ABSTRACT_LOCATION_NULL     locationNull
#define ATOM_ABSTRACT_OBJECT_NULL       objNull
#define ATOM_ABSTRACT_SCRIPT_NULL       scriptNull
#define ATOM_ABSTRACT_TASK_NULL         taskNull
// Contents
#define ATOM_ABSTRACT_OBJECT_VEHICLE    ( createVehicle [ "testpot", [ 0, 0, 0 ], [], 0, "NONE"] )
#define ATOM_ABSTRACT_OBJECT_SIMPLE     ( createSimpleObject [ "testpot", [ 0, 0, 0 ], false ] )
#define ATOM_ABSTRACT_OBJECT_SUPERSIMPLE ( createSimpleObject [ "ca\buildings2\testpot.p3d", [ 0, 0, 0 ], false ] )

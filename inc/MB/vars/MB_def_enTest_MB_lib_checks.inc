
/*******************************************************************************
	Name:     Hash Key Enumeration of Checkings
	File:     MB_def_enTest_MB_lib_checks.inc
	Version:  beta
	Date:     2021-06
	Author:   MB

	Description:
		enumerates of checking hash keys
*******************************************************************************/


////////////////////////////////////////
// Variables
////////////////////////////////////////

// ---- CONSTANTS ----

// ---- KEYS TITLE

#define EN_CHECKS                       0

// ---- KEYS SECTION

#define EN_TYPES                        1
#define EN_TYPES_EXTEND                 2
#define EN_TYPES_COMPLEX                3
#define EN_TYPES_SPECIAL                4
#define EN_TYPES_STRUCTURE              5

#define EN_ARRAY_TYPES                  6
#define EN_ARRAY_TYPES_EXTEND           7
#define EN_ARRAY_TYPES_COMPLEX          8
#define EN_ARRAY_TYPES_SPECIAL          9
#define EN_ARRAY_TYPES_STRUCTURE        10

#define EN_CONTENTS                     11
#define EN_CONTENTS_ARRAY               12
#define EN_COMPARISONS                  13
#define EN_INCLUDES                     14
#define EN_INCLUDES_SPECIAL             15
#define EN_ITERATIONS                   16
#define EN_FS                           17

// ---- FUNCTION KEYS

// TYPES
// Primitives
#define EN_IS_NIL                       18
#define EN_IS_BOOL                      19
#define EN_IS_SCALAR                    20
#define EN_IS_STRING                    21
#define EN_IS_ARRAY                     22
#define EN_IS_CODE                      23
#define EN_IS_PRMITIVE                  24
// Abstracts
#define EN_IS_ABSTRACT                  25

// TYPES EXTEND
#define EN_IS_BINARY                    26
#define EN_IS_UNIT_INTERVAL             27
#define EN_IS_INTEGER                   28
#define EN_IS_INDEX                     29
#define EN_IS_COUNTER                   30

// TYPES COMPLEX
#define EN_IS_VECTOR                    31
#define EN_IS_VECTOR_2D                 32
#define EN_IS_VECTOR_3D                 33
#define EN_IS_UNIT_VECTOR               34
#define EN_IS_PAIR                      35
#define EN_IS_STR_PAIR                  36
#define EN_IS_INDEX_PAIR                37
#define EN_IS_STR_PAIR_TYPE             38
#define EN_IS_INDEX_PAIR_TYPE           39
#define EN_IS_HASHMAP                   40
#define EN_IS_STR_HASHMAP               41
#define EN_IS_INDEX_HASHMAP             42
#define EN_IS_STR_HASHMAP_TYPE          43
#define EN_IS_INDEX_HASHMAP_TYPE        44
#define EN_IS_MULTI_HASHMAP             45
#define EN_IS_STR_MULTI_HASHMAP         46
#define EN_IS_INDEX_MULTI_HASHMAP       47
#define EN_IS_STR_MULTI_HASHMAP_TYPE    48
#define EN_IS_INDEX_MULTI_HASHMAP_TYPE  49

// TYPES SPECIAL
#define EN_IS_SCALAR_RANGE              50
#define EN_IS_INTEGER_RANGE             51
#define EN_IS_INDEX_RANGE               52
#define EN_IS_COUNTER_RANGE             53
#define EN_IS_SCALAR_RANGE_EXTEND       54
#define EN_IS_INTEGER_RANGE_EXTEND      55
#define EN_IS_INDEX_RANGE_EXTEND        56
#define EN_IS_COUNTER_RANGE_EXTEND      57

// ARRAY TYPES
#define EN_IS_NIL_ARRAY                 58
#define EN_IS_BOOL_ARRAY                59
#define EN_IS_SCALAR_ARRAY              60
#define EN_IS_STRING_ARRAY              61
#define EN_IS_MULTI_ARRAY               62
#define EN_IS_CODE_ARRAY                63
#define EN_IS_PRMITIVE_ARRAY            64
#define EN_IS_ABSTRACT_ARRAY            65

// ARRAY TYPES EXTEND
#define EN_IS_BINARY_ARRAY              66
#define EN_IS_UNIT_INTERVAL_ARRAY       67
#define EN_IS_INTEGER_ARRAY             68
#define EN_IS_INDEX_ARRAY               69
#define EN_IS_COUNTER_ARRAY             70

// ARRAY TYPES COMPLEX
#define EN_IS_VECTOR_ARRAY              71
#define EN_IS_VECTOR_2D_ARRAY           72
#define EN_IS_VECTOR_3D_ARRAY           73
#define EN_IS_UNIT_VECTOR_ARRAY         74
#define EN_IS_HASHMAP_ARRAY             75
#define EN_IS_MULTI_HASHMAP_ARRAY       76

// ARRAY TYPES SPECIAL
#define EN_IS_SCALAR_RANGE_ARRAY        77
#define EN_IS_INTEGER_RANGE_ARRAY       78
#define EN_IS_INDEX_RANGE_ARRAY         79
#define EN_IS_COUNTER_RANGE_ARRAY       80

// COMPARISONS
#define EN_COMPARE_TYPE                 81
#define EN_COMPARE_ARGS                 82
#define EN_COMPARE_ARRAY_SIZE           83
#define EN_COMPARE_ARRAY_SIZES          84

// CONTENTS
// empty
#define EN_IS_EMPTY                     85
#define EN_IS_EMPTY_BOOL                86
#define EN_IS_EMPTY_SCALAR              87
#define EN_IS_EMPTY_STRING              88
#define EN_IS_EMPTY_ARRAY               89
#define EN_IS_EMPTY_CODE                90
#define EN_IS_EMPTY_PRIMITIVE           91
#define EN_IS_EMPTY_ABSTRACT            92
// content
#define EN_HAS_CONTENT                  93
#define EN_HAS_BOOL_CONTENT             94
#define EN_HAS_SCALAR_CONTENT           95
#define EN_HAS_STRING_CONTENT           96
#define EN_HAS_ARRAY_CONTENT            97
#define EN_HAS_CODE_CONTENT             98
#define EN_HAS_PRIMITIVE_CONTENT        99
#define EN_HAS_ABSTRACT_CONTENT         100

// CONTENTS ARRAY
// emptyness
#define EN_IS_ANYTHING_ARRAY_EMPTY      101
#define EN_IS_BOOL_ARRAY_EMPTY          102
#define EN_IS_SCALAR_ARRAY_EMPTY        103
#define EN_IS_STRING_ARRAY_EMPTY        104
#define EN_IS_MULTI_ARRAY_EMPTY         105
#define EN_IS_CODE_ARRAY_EMPTY          106
#define EN_IS_PRIMITIVE_ARRAY_EMPTY     107
#define EN_IS_ABSTRACT_ARRAY_EMPTY      108
// content
#define EN_HAS_ANYTHING_ARRAY_CONTENT   109
#define EN_HAS_BOOL_ARRAY_CONTENT       110
#define EN_HAS_SCALAR_ARRAY_CONTENT     111
#define EN_HAS_STRING_ARRAY_CONTENT     112
#define EN_HAS_MULTI_ARRAY_CONTENT      113
#define EN_HAS_CODE_ARRAY_CONTENT       114
#define EN_HAS_PRIMITIVE_ARRAY_CONTENT  115
#define EN_HAS_ABSTRACT_ARRAY_CONTENT   116

// INCLUDES
#define EN_IN_CHARSET                   117
#define EN_IN_ARR_CHARSET               118

#define EN_IN_RANGE_SCALAR              119
#define EN_IN_RANGE_INTEGER             120
#define EN_IN_RANGE_INDEX               121
#define EN_IN_RANGE_COUNTER             122

#define EN_IN_RANGE_EXTEND_SCALAR       123
#define EN_IN_RANGE_EXTEND_INTEGER      124
#define EN_IN_RANGE_EXTEND_INDEX        125
#define EN_IN_RANGE_EXTEND_COUNTER      126

// ITERATIONS
#define EN_EACH_TYPE_EQUAL              127
#define EN_EACH_TYPE_UNIQUE             128
#define EN_EACH_CHAR_UNIQUE             129
#define EN_EACH_CHAR_ELEM_UNIQUE        130
#define EN_EACH_INDEX_UNIQUE            131

// FILE SYSTEM
#define EN_IS_DIR                       132
#define EN_IS_FILE                      133
#define EN_IS_PATH                      134

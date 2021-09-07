# a3-lib-checks

## Description

This project contains several macro function libraries for enhanced value checkings in Arma 3 scripts.
The Macros are system performance developed and easy to use.
They are in thematically and technically ordered.

### Index

* types
  * MB_IS_NIL
  * MB_IS_BOOL
  * MB_IS_SCALAR
  * MB_IS_STRING
  * MB_IS_CODE
  * MB_IS_ARRAY
  * MB_IS_PRIMITIVE
  * MB_IS_ABSTRACT
* typesExtend
  * MB_IS_BINARY
  * MB_IS_UNIT_INTERVAL
  * MB_IS_INTEGER
  * MB_IS_INDEX
  * MB_IS_COUNTER
* typesComplex
  * MB_IS_UNIT_VECTOR
  * MB_IS_VECTOR
  * MB_IS_2D_VECTOR
  * MB_IS_3D_VECTOR
* typesSpecial
  * MB_IS_RANGE_SCALAR
  * MB_IS_RANGE_INTEGER
  * MB_IS_RANGE_INDEX
  * MB_IS_RANG_COUNTER
  * MB_IS_RANGE_EXTEND_SCALAR
  * MB_IS_RANGE_EXTEND_INTEGER
  * MB_IS_RANGE_EXTEND_INDEX
  * MB_IS_RANGE_EXTEND_COUNTER
* typesStructure
  * MB_IS_PAIR
  * MB_IS_STR_PAIR
  * MB_IS_INDEX_PAIR
  * MB_IS_STR_PAIR_TYPE
  * MB_IS_INDEX_PAIR_TYPE
  * MB_IS_HASHMAP
  * MB_IS_STR_HASHMAP
  * MB_IS_INDEX_HASHMAP
  * MB_IS_STR_HASHMAP_TYPE
  * MB_IS_INDEX_HASHMAP_TYPE
  * MB_IS_MULTI_HASHMAP
  * MB_IS_STR_MULTI_HASHMAP
  * MB_IS_INDEX_MULTI_HASHMAP
  * MB_IS_STR_MULTI_HASHMAP_TYPE
  * MB_IS_INDEX_MULTI_HASHMAP_TYPE
* arrayTypes
  * MB_IS_NIL_ARRAY
  * MB_IS_BOOL_ARRAY
  * MB_IS_SCALAR_ARRAY
  * MB_IS_STRING_ARRAY
  * MB_IS_CODE_ARRAY
  * MB_IS_MULTI_ARRAY
  * MB_IS_PRIMITIVE_ARRAY
  * MB_IS_ABSTRACT_ARRAY
* arrayTypesExtend
  * MB_IS_BINARY_ARRAY
  * MB_IS_UNIT_INTERVAL_ARRAY
  * MB_IS_INTEGER_ARRAY
  * MB_IS_INDEX_ARRAY
  * MB_IS_COUNTER_ARRAY
* arrayTypesComplex
  * MB_IS_UNIT_VECTOR_ARRAY
  * MB_IS_VECTOR_ARRAY
  * MB_IS_2D_VECTOR_ARRAY
  * MB_IS_3D_VECTOR_ARRAY
* arrayTypesSpecial
  * MB_IS_SCALAR_RANGE_ARRAY
  * MB_IS_INTEGER_RANGE_ARRAY
  * MB_IS_INDEX_RANGE_ARRAY
  * MB_IS_COUNTER_RANGE_ARRAY
* arrayTypesStructure
  * MB_IS_HASHMAP_ARRAY
  * MB_IS_MULTI_HASHMAP_ARRAY
* contents
  * MB_IS_EMPTY
  * MB_IS_EMPTY_BOOL
  * MB_IS_EMPTY_SCALAR
  * MB_IS_EMPTY_STRING
  * MB_IS_EMPTY_CODE
  * MB_IS_EMPTY_ARRAY
  * MB_IS_EMPTY_PRIMITIVE
  * MB_IS_EMPTY_ABSTRACT
  * MB_HAS_CONTENT
  * MB_HAS_BOOL_CONTENT
  * MB_HAS_SCALAR_CONTENT
  * MB_HAS_STRING_CONTENT
  * MB_HAS_CODE_CONTENT
  * MB_HAS_ARRAY_CONTENT
  * MB_HAS_PRIMITIVE_CONTENT
  * MB_HAS_ABSTRACT_CONTENT
* contentsArray
  * MB_IS_ANYTHING_ARRAY_EMPTY
  * MB_IS_BOOL_ARRAY_EMPTY
  * MB_IS_SCALAR_ARRAY_EMPTY
  * MB_IS_STRING_ARRAY_EMPTY
  * MB_IS_CODE_ARRAY_EMPTY
  * MB_IS_MULTI_ARRAY_EMPTY
  * MB_IS_PRIMITIVE_ARRAY_EMPTY
  * MB_IS_ABSTRACT_ARRAY_EMPTY
  * MB_HAS_ANYTHING_ARRAY_CONTENT
  * MB_HAS_BOOL_ARRAY_CONTENT
  * MB_HAS_SCALAR_ARRAY_CONTENT
  * MB_HAS_STRING_ARRAY_CONTENT
  * MB_HAS_CODE_ARRAY_CONTENT
  * MB_HAS_MULTI_ARRAY_CONTENT
  * MB_HAS_PRIMITIVE_ARRAY_CONTENT
  * MB_HAS_ABSTRACT_ARRAY_CONTENT
* includes
  * MB_IN_CHARSET
  * MB_IN_ARR_CHARSET
* includesSpecial
  * MB_IN_RANGE_SCALAR
  * MB_IN_RANGE_INTEGER
  * MB_IN_RANGE_INDEX
  * MB_IN_RANGE_COUNTER
  * MB_IN_RANGE_EXTEND_SCALAR
  * MB_IN_RANGE_EXTEND_INTEGER
  * MB_IN_RANGE_EXTEND_INDEX
  * MB_IN_RANGE_EXTEND_COUNTER
* iterations
  * MB_EACH_TYPE_EQUAL
  * MB_EACH_TYPE_UNIQUE
  * MB_EACH_CHAR_UNIQUE
  * MB_EACH_CHAR_ELEM_UNIQUE
  * MB_EACH_INDEX_UNIQUE
* fs
  * MB_IS_DIR
  * MB_IS_FILE
  * MB_IS_PATH

### Technologies

- [Arma 3](https://arma3.com/) v1.96
- [BIStudio Community Wiki](https://community.bistudio.com/wiki/)
- [Atom](https://atom.io/)
- [languge-arma-atom](https://atom.io/users/acemod)

---

## Usage

### Installation

1. **Create new mission**  
  create a new mission `[MISSION_NAME]`  
  e.g. `myMission`
2. **Copy project files**  
  copy the project files `\inc\MB\checks\` into the mission root folder `[MISSION_NAME].[WORLD_NAME]`  
  e.g. `myMission.VR`
3. **Include a Library**  
  include the library in the file with with a `#include` command at the very beginning  
  e.g. in the `init.sqf ` script file with line `#include <inc\MB\MB_lib_checkTypes.inc>`  
  Now the script has the ability to access macro functions in the library which is include: `MB_IS_NIL`, `MB_IS_BOOL`, `MB_IS_SCALAR`, `MB_IS_STRING`, `MB_IS_ARRAY`, `MB_IS_CODE`, `MB_IS_PRIMITIV`, `MB_IS_ABSTRACT`.
4. **Checking a value**  
  write a code line after included the file to check data with Macro Function  
  e.g. `systemChat str MB_IS_STRING( "Hello World!" )`.
5. **Result**  
  in Mission runtime the expression should return `true` in the `systemChat`

### API References

replace point **4.** in the **Installation** instruction with one of the following example codes.

**Example - MB_IS_PRIMITIVE**  
```sqf
#include <inc\MB\MB_lib_checkTypes.inc>

// string to check
private _str = "Hello World!";

// result
systemChat if ( MB_IS_PRIMITIVE( _str ) )
	then { "This is a primitive data type" }
	else { "This is not a primitive data type" };
```

**Example - MB_IS_UNIT_VECTOR**  
```sqf
#include <inc\MB\MB_lib_checkTypesComplex.inc>

// direction vector to check
private _vectorDir = [ 0, 1, 0 ];

// result
systemChat if ( MB_IS_UNIT_VECTOR( _vectorDir ) )
	then { "This is a unit vector" }
	else { "This is not a unit vector" };
```

**Example - MB_IN_CHARSET**  
```sqf
#include <inc\MB\checks\MB_lib_checkIncludes.inc>

// RGB value to check
private _rbg = 'FF8080';
private _set = '0123456789ABCDEF';

// result
systemChat if ( MB_IN_CHARSET( _rgb, _set ) )
	then { "This is in RGB charset" }
	else { "This is not in RGB charset" };
```

**Example - MB_IS_INDEX_MULTI_HASHMAP_TYPE**  
```sqf
#include <inc\MB\checks\MB_lib_checkTypesStructure.inc>

// multi hashmap to check
private _type = "";
private _map = [
	[ 0, "toys" ],
	[ 1, [
		[ 11, "milk" ],
		[ 12, "butter" ]
	] ],
	[ 2, [
		[ 21, "screwdriver" ],
		[ 22, "hammer" ]
	],
	[ 3, "wood" ]
];

// result
systemChat if ( MB_IS_INDEX_MULTI_HASHMAP_TYPE( _map, _type ) )
	then { "This is a multi index hashmap with string value" }
	else { "This is not a multi index hashmap with string value" };
```

**Example - MB_EACH_INDEX_UNIQUE**  
```sqf
#include <inc\MB\checks\MB_lib_checkIterations.inc>

// indices to check
private _indices = [ 0, 1, 2, 3 ];

// result from a ternary operator
systemChat if ( MB_EACH_INDEX_UNIQUE( _indices ) )
	then { "All indices are unique" }
	else { "All indices are not unique" };
```

**Example - MB_IS_PATH**  
```sqf
#include <inc\MB\checks\MB_lib_checkFS.inc>

// path to check
private _path = "\category_1\gallery_1\picture_1.jpg";

// result from a ternary operator
systemChat if ( MB_IS_PATH( _path ) )
	then { "This is a path" }
	else { "This is not a path" };
```

---

## References

**Unit Tests Reports**  
Each macro function was tested by unit tests from MB_fnc_simpleUnitTests. Each test result was documented with the help of MB_fnc_simpleUnitTestsReport and MB_fnc_simpleTextGenerator, which generate html or md syntax.

Unit test case arguments were changed, deleted, or expanded throughout the test. I have to correct individual test cases to show the differences in the individual test results.

---

## Author Info

**Apologizes**  
* English is not my mother tongue. But my script comments can be understandable hopefully.
* I am just a Developer with amateur experience on Arma coding.
* I am not familiar with GitHub yet

**Development**  
* I used my tag `MB` nearly everywhere in the code. Therefor it shouldn't be interferences in the namespaces.
* I adopted *BI Code Comments Convention* in general with individualities.
* I code in K&R style

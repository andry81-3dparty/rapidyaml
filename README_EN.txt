* README_EN.txt
* 2023.03.11
* rapidyaml

1. DESCRIPTION
2. SOURCES
3. PATCHES
4. DEPENDENCIES
5. EXTERNALS
6. AUTHOR

-------------------------------------------------------------------------------
1. DESCRIPTION
-------------------------------------------------------------------------------
`rapidyaml` library fork

-------------------------------------------------------------------------------
2. SOURCES
-------------------------------------------------------------------------------
https://github.com/biojppm/rapidyaml

-------------------------------------------------------------------------------
3. PATCHES
-------------------------------------------------------------------------------
The original library patched to fix these issues:

1. Use std::is_trivially_copyable in GCC major version less than 5:
   ``is_trivially_copyable` is not member of `std` (GCC < 5)``:
   https://github.com/biojppm/rapidyaml/issues/70
2. Use std::align in GCC major version less than 5:
   `std::align not supported by g++4.9`:
   https://stackoverflow.com/questions/27064791/stdalign-not-supported-by-g4-9

-------------------------------------------------------------------------------
4. DEPENDENCIES
-------------------------------------------------------------------------------
N/A
-------------------------------------------------------------------------------
5. EXTERNALS
-------------------------------------------------------------------------------
To checkout externals you must use the
[vcstool](https://github.com/dirk-thomas/vcstool) python module.

NOTE:
  To install the module from the git repository:

  >
  python -m pip install git+https://github.com/dirk-thomas/vcstool

-------------------------------------------------------------------------------
6. AUTHOR
-------------------------------------------------------------------------------
Andrey Dibrov (andry at inbox dot ru)

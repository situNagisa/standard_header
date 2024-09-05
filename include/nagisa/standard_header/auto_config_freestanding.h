#pragma once

#ifndef __has_include
#	error "This header requires a compiler supporting the __has_include macro"
#endif

// language support library

#ifndef NGS_STANDARD_HEADER_FREESTANDING_CSTDDEF
#	define NGS_STANDARD_HEADER_FREESTANDING_CSTDDEF 1
#endif

#ifndef NGS_STANDARD_HEADER_FREESTANDING_CSTDLIB
#	define NGS_STANDARD_HEADER_FREESTANDING_CSTDLIB 1
#endif

#ifndef NGS_STANDARD_HEADER_FREESTANDING_CFLOAT
#	define NGS_STANDARD_HEADER_FREESTANDING_CFLOAT 1
#endif

#ifndef NGS_STANDARD_HEADER_FREESTANDING_CLIMITS
#	define NGS_STANDARD_HEADER_FREESTANDING_CLIMITS (__has_include(<climits>))
#endif

#ifndef NGS_STANDARD_HEADER_FREESTANDING_LIMITS
#	define NGS_STANDARD_HEADER_FREESTANDING_LIMITS 1
#endif

#ifndef NGS_STANDARD_HEADER_FREESTANDING_VERSION
#	define NGS_STANDARD_HEADER_FREESTANDING_VERSION (__has_include(<version>))
#endif

#ifndef NGS_STANDARD_HEADER_FREESTANDING_CSTDINT
#	define NGS_STANDARD_HEADER_FREESTANDING_CSTDINT (__has_include(<cstdint>))
#endif

#ifndef NGS_STANDARD_HEADER_FREESTANDING_NEW
#	define NGS_STANDARD_HEADER_FREESTANDING_NEW 1
#endif

#ifndef NGS_STANDARD_HEADER_FREESTANDING_TYPEINFO
#	define NGS_STANDARD_HEADER_FREESTANDING_TYPEINFO (__cpp_rtti || (_MSC_VER && _CPPRTTI) || ((__GNUC__ || __clang__) && __GXX_RTTI)) && (__has_include(<typeinfo>))
#endif

#ifndef NGS_STANDARD_HEADER_FREESTANDING_SOURCE_LOCATION
#	define NGS_STANDARD_HEADER_FREESTANDING_SOURCE_LOCATION __cpp_lib_source_location
#endif

#ifndef NGS_STANDARD_HEADER_FREESTANDING_EXCEPTION
#	define NGS_STANDARD_HEADER_FREESTANDING_EXCEPTION (__cpp_exceptions || (_MSC_VER && _HAS_EXCEPTIONS) || ((__GNUC__ || __clang__) && __EXCEPTIONS)) && (__has_include(<exception>))
#endif

#ifndef NGS_STANDARD_HEADER_FREESTANDING_INITIALIZER_LIST
#	define NGS_STANDARD_HEADER_FREESTANDING_INITIALIZER_LIST (__has_include(<initializer_list>))
#endif

#ifndef NGS_STANDARD_HEADER_FREESTANDING_COMPARE
#	define NGS_STANDARD_HEADER_FREESTANDING_COMPARE __cpp_lib_three_way_comparison
#endif

#ifndef NGS_STANDARD_HEADER_FREESTANDING_COROUTINE
#	define NGS_STANDARD_HEADER_FREESTANDING_COROUTINE __cpp_lib_coroutine
#endif

#ifndef NGS_STANDARD_HEADER_FREESTANDING_CSTDARG
#	define NGS_STANDARD_HEADER_FREESTANDING_CSTDARG 1
#endif

#ifndef NGS_STANDARD_HEADER_FREESTANDING_DEBUGGING
#	define NGS_STANDARD_HEADER_FREESTANDING_DEBUGGING __cpp_lib_debugging
#endif

#ifndef NGS_STANDARD_HEADER_FREESTANDING_CONCEPTS
#	define NGS_STANDARD_HEADER_FREESTANDING_CONCEPTS __cpp_lib_concepts
#endif

#ifndef NGS_STANDARD_HEADER_FREESTANDING_CERRNO
#	define NGS_STANDARD_HEADER_FREESTANDING_CERRNO ((__cpp_lib_freestanding_feature_test_macros && __cpp_lib_freestanding_errc) && __has_include(<cerrno>))
#endif

#ifndef NGS_STANDARD_HEADER_FREESTANDING_SYSTEM_ERROR
#	define NGS_STANDARD_HEADER_FREESTANDING_SYSTEM_ERROR ((__cpp_lib_freestanding_feature_test_macros && __cpp_lib_freestanding_errc) && __has_include(<system_error>))
#endif

#ifndef NGS_STANDARD_HEADER_FREESTANDING_MEMORY
#	define NGS_STANDARD_HEADER_FREESTANDING_MEMORY ((__cpp_lib_freestanding_feature_test_macros && __cpp_lib_freestanding_memory) && __has_include(<memory>))
#endif

#ifndef NGS_STANDARD_HEADER_FREESTANDING_TYPE_TRAITS
#	define NGS_STANDARD_HEADER_FREESTANDING_TYPE_TRAITS __has_include(<type_traits>)
#endif

#ifndef NGS_STANDARD_HEADER_FREESTANDING_RATIO
#	define NGS_STANDARD_HEADER_FREESTANDING_RATIO ((__cpp_lib_freestanding_feature_test_macros && __cpp_lib_freestanding_ratio))
#endif

#ifndef NGS_STANDARD_HEADER_FREESTANDING_UTILITY
#	define NGS_STANDARD_HEADER_FREESTANDING_UTILITY ((__cpp_lib_freestanding_feature_test_macros && __cpp_lib_freestanding_utility))
#endif

#ifndef NGS_STANDARD_HEADER_FREESTANDING_TUPLE
#	define NGS_STANDARD_HEADER_FREESTANDING_TUPLE ((__cpp_lib_freestanding_feature_test_macros && __cpp_lib_freestanding_tuple))
#endif

#ifndef NGS_STANDARD_HEADER_FREESTANDING_FUNCTIONAL
#	define NGS_STANDARD_HEADER_FREESTANDING_FUNCTIONAL ((__cpp_lib_freestanding_feature_test_macros && __cpp_lib_freestanding_functional))
#endif

#ifndef NGS_STANDARD_HEADER_FREESTANDING_CHARCONV
#	define NGS_STANDARD_HEADER_FREESTANDING_CHARCONV ((__cpp_lib_freestanding_feature_test_macros && __cpp_lib_freestanding_charconv))
#endif


#ifndef NGS_STANDARD_HEADER_FREESTANDING_BIT
#	define NGS_STANDARD_HEADER_FREESTANDING_BIT (__has_include(<bit>))
#endif

#ifndef NGS_STANDARD_HEADER_FREESTANDING_STRING
#	define NGS_STANDARD_HEADER_FREESTANDING_STRING (__has_include(<string>))
#endif

#ifndef NGS_STANDARD_HEADER_FREESTANDING_CSTRING
#	define NGS_STANDARD_HEADER_FREESTANDING_CSTRING ((__cpp_lib_freestanding_feature_test_macros && __cpp_lib_freestanding_cstring))
#endif

#ifndef NGS_STANDARD_HEADER_FREESTANDING_CWCHAR
#	define NGS_STANDARD_HEADER_FREESTANDING_CWCHAR ((__cpp_lib_freestanding_feature_test_macros && __cpp_lib_freestanding_charconv))
#endif

#ifndef NGS_STANDARD_HEADER_FREESTANDING_ITERATOR
#	define NGS_STANDARD_HEADER_FREESTANDING_ITERATOR ((__cpp_lib_freestanding_feature_test_macros && __cpp_lib_freestanding_iterator))
#endif

#ifndef NGS_STANDARD_HEADER_FREESTANDING_RANGES
#	define NGS_STANDARD_HEADER_FREESTANDING_RANGES ((__cpp_lib_freestanding_feature_test_macros && __cpp_lib_freestanding_ranges))
#endif

#ifndef NGS_STANDARD_HEADER_FREESTANDING_CMATH
#	define NGS_STANDARD_HEADER_FREESTANDING_CMATH 1
#endif

#if __cpp_lib_freestanding_feature_test_macros

#ifndef NGS_STANDARD_HEADER_FREESTANDING_ALGORITHM
#	define NGS_STANDARD_HEADER_FREESTANDING_ALGORITHM (__cpp_lib_freestanding_algorithm)
#endif

#ifndef NGS_STANDARD_HEADER_FREESTANDING_ARRAY
#	define NGS_STANDARD_HEADER_FREESTANDING_ARRAY (__cpp_lib_freestanding_array)
#endif

#ifndef NGS_STANDARD_HEADER_FREESTANDING_EXPECTED
#	define NGS_STANDARD_HEADER_FREESTANDING_EXPECTED (__cpp_lib_freestanding_expected)
#endif

#ifndef NGS_STANDARD_HEADER_FREESTANDING_MDSPAN
#	define NGS_STANDARD_HEADER_FREESTANDING_MDSPAN (__cpp_lib_freestanding_mdspan)
#endif

#ifndef NGS_STANDARD_HEADER_FREESTANDING_NUMERIC
#	define NGS_STANDARD_HEADER_FREESTANDING_NUMERIC (__cpp_lib_freestanding_numeric)
#endif

#ifndef NGS_STANDARD_HEADER_FREESTANDING_OPTIONAL
#	define NGS_STANDARD_HEADER_FREESTANDING_OPTIONAL (__cpp_lib_freestanding_optional)
#endif

#ifndef NGS_STANDARD_HEADER_FREESTANDING_STRING_VIEW
#	define NGS_STANDARD_HEADER_FREESTANDING_STRING_VIEW (__cpp_lib_freestanding_string_view)
#endif

#ifndef NGS_STANDARD_HEADER_FREESTANDING_VARIANT
#	define NGS_STANDARD_HEADER_FREESTANDING_VARIANT (__cpp_lib_freestanding_variant)
#endif

#endif
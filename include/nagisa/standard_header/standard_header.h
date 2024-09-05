//#pragma once

// define NGS_STANDARD_HEADER_INCLUDE_* to include standard headers
// define NGS_STANDARD_HEADER_FREESTANDING_ONLY to include freestanding headers only

#include "./auto_config.h"

#ifdef NGS_STANDARD_HEADER_FREESTANDING_ONLY
#	include "./freestanding_only.h"
#endif

#include "./macro_optional.h"
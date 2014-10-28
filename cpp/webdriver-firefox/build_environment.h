#ifndef _BUILD_ENVIRONMENT_H_
#define _BUILD_ENVIRONMENT_H_

#ifdef __GNUC__
#define BUILD_ON_UNIX
#ifdef WEBDRIVER_GECKO_HAS_CHAR16
#include "mozilla/Char16.h"
#endif
#else
#define BUILD_ON_WINDOWS
#endif

#ifdef XP_UNIX
#define BUILD_ON_UNIX
#undef BUILD_ON_WINDOWS
#endif

#ifdef XP_WIN
#define BUILD_ON_WINDOWS
#endif

#endif


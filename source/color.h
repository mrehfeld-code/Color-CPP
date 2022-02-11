#ifndef COLOR_H
#define COLOR_H

#ifdef __cplusplus
#ifdef _APPLE_
#include "color_ANSI.h"
#elif _linux_
#include "color_ANSI.h"
#elif _unix_
#include "color_ANSI.h"
#elif _WIN32
#include "color_WIN.h"
#endif
#endif // __cplusplus

#endif // COLOR_H

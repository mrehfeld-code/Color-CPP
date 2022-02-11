#ifndef COLOR_ANSI_H
#define COLOR_ANSI_H

#define COLOR_FG_BLACK			30
#define COLOR_FG_RED			31
#define COLOR_FG_GREEN			32
#define COLOR_FG_YELLOW			33
#define COLOR_FG_BLUE			34
#define COLOR_FG_MAGENTA		35
#define COLOR_FG_CYAN			36
#define COLOR_FG_WHITE			37

#define COLOR_FG_LIGHT_BLACK	90
#define COLOR_FG_LIGHT_RED		91
#define COLOR_FG_LIGHT_GREEN	92
#define COLOR_FG_LIGHT_YELLOW	93
#define COLOR_FG_LIGHT_BLUE		94
#define COLOR_FG_LIGHT_MAGENTA	95
#define COLOR_FG_LIGHT_CYAN		96
#define COLOR_FG_LIGHT_WHITE	97


#define COLOR_BG_BLACK			40
#define COLOR_BG_RED			41
#define COLOR_BG_GREEN			42
#define COLOR_BG_YELLOW			43
#define COLOR_BG_BLUE			44
#define COLOR_BG_MAGENTA		45
#define COLOR_BG_CYAN			46
#define COLOR_BG_WHITE			47

#define COLOR_BG_LIGHT_BLACK	100
#define COLOR_BG_LIGHT_RED		101
#define COLOR_BG_LIGHT_GREEN	102
#define COLOR_BG_LIGHT_YELLOW	103
#define COLOR_BG_LIGHT_BLUE		104
#define COLOR_BG_LIGHT_MAGENTA	105
#define COLOR_BG_LIGHT_CYAN		106
#define COLOR_BG_LIGHT_WHITE	107


#ifndef _IOSTREAM_
#include <iostream>
#endif // _IOSTREAM_

void attron(int fg, int bg = COLOR_BG_BLACK) {
	std::cout << "\033[" << fg << ";" << bg << "m";
}

void reset() {
	std::cout << "\033[" << COLOR_FG_WHITE << ";" << COLOR_BG_BLACK << "m";
}

#endif // COLOR_ANSI_H

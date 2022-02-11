#ifndef COLOR_WIN_H
#define COLOR_WIN_H

#define COLOR_DEFAULT		0
#define COLOR_BLUE		1
#define COLOR_GREEN		2
#define COLOR_CYAN		3
#define COLOR_RED		4
#define COLOR_MAGENTA		5
#define COLOR_YELLOW		6
#define COLOR_LIGHT_GREY	7
#define COLOR_GREY		8
#define COLOR_LIGHT_BLUE  	9
#define COLOR_LIGHT_GREEN	10
#define COLOR_LIGHT_CYAN	11
#define COLOR_LIGHT_RED		12
#define COLOR_LIGHT_MAGENTA	13
#define COLOR_LIGHT_YELLOW	14
#define COLOR_WITHE		15

#ifndef _WINDOWS_
#include <Windows.h>
#endif // _WINDOWS_

int attron(int fg, int bg = 0) {
	int color = fg + bg * 16;
	HANDLE console;
	console = GetStdHandle(STD_OUTPUT_HANDLE);
	if (console == NULL) {
		return 1;
	}

	if (SetConsoleTextAttribute(console, color)) {
		console = NULL;
		return 0;
	}

	console = NULL;
	return 1;
}

int reset() {
	HANDLE console;
	console = GetStdHandle(STD_OUTPUT_HANDLE);
	if (console == NULL) {
		return 1;
	}

	if (SetConsoleTextAttribute(console, 15)) {
		console = NULL;
		return 0;
	}

	console = NULL;
	return 1;
}

#endif // COLOR_WIN_H

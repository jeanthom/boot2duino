extern "C" {
	#include "videoasm.h"
}

#include "Video.h"

void Video::putchar(char c) const {
	videoasm_putchar(c);
}

void Video::print(const char *str) const {
	const char *ptr;
	for (ptr = str; *ptr; ptr++) {
		putchar(*ptr);
	}
}
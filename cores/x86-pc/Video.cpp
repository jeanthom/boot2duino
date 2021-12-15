extern "C" {
	#include "videoasm.h"
}

#include "Video.h"

void Video::print(char c) const {
	videoasm_putchar(c);
}

void Video::print(const char *str) const {
	for (const char *ptr = str; *ptr; ptr++) {
		videoasm_putchar(*ptr);
	}
}

void Video::clear() const {
	videoasm_clear();
}

void Video::setCursorPosition(char x, char y) const {
	videoasm_set_cursor_position(x, y);
}

void Video::setMode(VideoMode mode) const {
	videoasm_set_video_mode(mode);
}

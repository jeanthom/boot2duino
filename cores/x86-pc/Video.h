#pragma once

enum VideoMode : unsigned char {
	TEXT_40X25_BW = 0x00,
	TEXT_40X25_COLOR = 0x01,
	TEXT_80X25_BW = 0x02,
	TEXT_80X25_COLOR = 0x03,
	GRAPHIC_320X200_COLOR = 0x04,
	GRAPHIC_320X200_BW = 0x05,
	GRAPHIC_640X200_COLOR = 0x06,
};

enum VideoColorScheme : unsigned char {
	SCHEME_DEFAULT = 0x07,
	SCHEME_HYPERVISOR = 0xE8,
	SCHEME_UGLYBIOS = 0xE1,
};

class Video {
public:
	void print(const char *str) const;
	void println(const char *str) const;
	void print(char c) const;
	void clear(VideoColorScheme scheme = SCHEME_DEFAULT) const;
	void setCursorPosition(char x, char y) const;
	void setMode(VideoMode mode) const;
};

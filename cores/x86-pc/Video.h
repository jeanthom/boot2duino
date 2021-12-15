#pragma once

enum VideoMode {
	TEXT_40X25_BW = 0x00,
	TEXT_40X25_COLOR = 0x01,
	TEXT_80X25_BW = 0x02,
	TEXT_80X25_COLOR = 0x03,
	GRAPHIC_320X200_COLOR = 0x04,
	GRAPHIC_320X200_BW = 0x05,
	GRAPHIC_640X200_COLOR = 0x06,
};

class Video {
public:
	void print(const char *str) const;
	void print(char c) const;
	void clear() const;
	void setCursorPosition(char x, char y) const;
	void setMode(VideoMode mode) const;
};

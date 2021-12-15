#pragma once

class Keyboard {
public:
	static const unsigned char kUpArrowKeycode;
	static const unsigned char kDownArrowKeycode;
	static const unsigned char kLeftArrowKeycode;
	static const unsigned char kRightArrowKeycode;
	static const unsigned char kEnterKeycode;

	bool available() const;
	char getch() const;
	unsigned char getkeycode() const;
};
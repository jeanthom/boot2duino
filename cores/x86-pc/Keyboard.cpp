extern "C" {
	#include "keyboardasm.h"
}
#include "Keyboard.h"

const unsigned char Keyboard::kUpArrowKeycode = 0x48;
const unsigned char Keyboard::kDownArrowKeycode = 0x50;
const unsigned char Keyboard::kLeftArrowKeycode = 0x4B;
const unsigned char Keyboard::kRightArrowKeycode = 0x4D;
const unsigned char Keyboard::kEnterKeycode = 0x1C;

bool Keyboard::available() const {
	return keyboardasm_available();
}

char Keyboard::getch() const {
	return keyboardasm_getch();
}

unsigned char Keyboard::getkeycode() const {
	return keyboardasm_getkeycode();
}

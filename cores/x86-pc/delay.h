#pragma once

extern "C" {
	extern void delayMicroseconds(unsigned int us) __attribute__ ((fastcall));
}
void delay(unsigned long ms);

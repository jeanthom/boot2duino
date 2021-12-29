#include "delay.h"

void delay(unsigned long ms) {
	for (int i = 0; i < ms; i++) {
		delayMicroseconds(1000);
	}
}

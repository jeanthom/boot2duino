extern "C" {
	#include "toneasm.h"
	#include "delay.h"
}
#include "Tone.h"

void tone(unsigned int freq, unsigned long duration) {
	toneasm_toneon(1193180/freq);
	if (duration) {
		delay(duration);
		noTone();
	}
}

void noTone() {
	toneasm_toneoff();
}

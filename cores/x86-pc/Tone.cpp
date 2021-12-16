extern "C" {
	#include "toneasm.h"
}
#include "Tone.h"

void tone(unsigned int freq, unsigned long duration) {
	toneasm_toneon(freq, 0, 0);
}

void noTone() {
	toneasm_toneoff();
}

// Use the "-soundhw pcspk" flag in QEMU to get output

Video vid;
Keyboard key;

void setup() {
  vid.clear();
  vid.setCursorPosition(0, 0);
  vid.println("\r\nPiano time!\r\n");
  vid.println("_________________________________________");
  vid.println("|  |#| |#|  |  |#| |#| |#|  |  |#| |#|  |");
  vid.println("|  |#| |#|  |  |#| |#| |#|  |  |#| |#|  |");
  vid.println("|  |#| |#|  |  |#| |#| |#|  |  |#| |#|  |");
  vid.println("|  |#| |#|  |  |#| |#| |#|  |  |#| |#|  |");
  vid.println("|   |   |   |   |   |   |   |   |   |   |");
  vid.println("| A | S | D | F | G | H | J | K | L | ; |");
  vid.println("|___|___|___|___|___|___|___|___|___|___|");
}

void loop() {
  if (key.available()) {
    switch (key.getch()) {
      case 'a': tone(261); break; // C4
      case 'w': tone(277); break; // C4#
      case 's': tone(293); break; // D4
      case 'e': tone(311); break; // D4#
      case 'd': tone(329); break; // E4
      case 'f': tone(349); break; // F4
      case 't': tone(369); break; // F4#
      case 'g': tone(392); break; // G4
      case 'y': tone(415); break; // G4#
      case 'h': tone(440); break; // A4
      case 'u': tone(466); break; // A4#
      case 'j': tone(493); break; // B4
      case 'k': tone(523); break; // C5
      case 'o': tone(554); break; // C5#
      case 'l': tone(587); break; // D5
      case 'p': tone(622); break; // D5#
      case ';': tone(659); break; // E5
      default: return; break;
    }
    delayMicroseconds(50000);
    noTone();
  }
}

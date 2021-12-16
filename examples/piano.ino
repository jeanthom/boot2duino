// Use the "-soundhw pcspk" flag in QEMU to get output

Video vid;
Keyboard key;

void setup() {
  vid.clear();
  vid.setCursorPosition(0,0);
  vid.print("Piano time!");
}

char prevKey = 0;
void loop() {
  if (key.available()) {
    char curKey = key.getch();
    if (curKey != prevKey) {
      switch (curKey) {
        case 'a': tone(1193180/261); break; // C4
          case 'w': tone(1193180/277); break; // C4#
        case 's': tone(1193180/293); break; // D4
          case 'e': tone(1193180/311); break; // D4#
        case 'd': tone(1193180/329); break; // E4
        case 'f': tone(1193180/349); break; // F4
          case 't': tone(1193180/369); break; // F4#
        case 'g': tone(1193180/392); break; // G4
          case 'y': tone(1193180/415); break; // G4#
        case 'h': tone(1193180/440); break; // A4
          case 'u': tone(1193180/466); break; // A4#
        case 'j': tone(1193180/493); break; // B4
        case 'k': tone(1193180/523); break; // C5
        default: noTone(); break;
      }
    }
  }
}
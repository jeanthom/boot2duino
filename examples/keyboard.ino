Video vid;
Keyboard key;

char password[4];

void setup() {
  vid.clear();
  vid.setCursorPosition(0, 0);
  vid.print("ENTER PASSWORD : ");

  for (int i = 0; i < sizeof(password); i++) {
    password[i] = key.getch();
    vid.print('*');
  }

  char x;
  do {
    x = key.getkeycode();
  } while (x != Keyboard::kEnterKeycode);

  vid.print("\r\nYou typed... ");
  vid.print(password);
}

void loop() {
  
}

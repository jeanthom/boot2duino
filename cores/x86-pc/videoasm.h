extern void videoasm_putchar(char c);
extern void videoasm_clear(void);
extern __attribute__ ((fastcall)) void videoasm_set_cursor_position(char x, char y);
extern void videoasm_set_video_mode(unsigned char mode);

.code16
.text

.global keyboardasm_available
keyboardasm_available:
	mov $0x01, %ah
	int $0x16
	retw

.global keyboardasm_getch
keyboardasm_getch:
	mov $0x00, %ah
	int $0x16
	xor %ah, %ah
	ret

.global keyboardasm_getkeycode
keyboardasm_getkeycode:
	mov $0x00, %ah
	int $0x16
	mov %ah, %al
	ret

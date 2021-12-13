.code16
.text

.global videoasm_putchar
videoasm_putchar:
	push %bx
	mov $0x0E, %ah
	mov 0x6(%esp), %al
	int $0x10
	pop %bx
	ret

.code16
.align 4
.text

.global videoasm_putchar
videoasm_putchar:
	pusha
	mov $0x0E, %ah
	xor %bx, %bx
	int $0x10
	popa
	ret

.global videoasm_clear
videoasm_clear:
	push %bx
	push %dx
	mov $0x06, %ah # "Scroll up window"
	mov $0x00, %al # Clear
	mov %cl, %bh # Color scheme
	mov $0x00, %ch # Upper row number
	mov $0x00, %cl # Left column number
	mov $24, %dh
	mov $79, %dl
	int $0x10
	pop %dx
	pop %bx
	ret

.global videoasm_set_cursor_position
videoasm_set_cursor_position:
	push %ax
	push %bx
	push %dx
	mov %al, %dh
	mov $0x0200, %ax # Set cursor position
	mov $0x00, %bh # Page number
	int $0x10
	pop %dx
	pop %bx
	pop %ax
	ret

.global videoasm_set_video_mode
videoasm_set_video_mode:
	pusha
	mov $0x00, %ah
	mov 0x6(%esp), %al
	int $0x10
	popa
	ret

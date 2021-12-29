.code16
.text

.global delayMicroseconds
delayMicroseconds:
	pusha
	mov %cx, %dx
	shr $16, %ecx
	xor %ax, %ax
	mov $0x86, %ah
	int $0x15
	popa
	ret

.code16
.align 4
.text

.set PIT_CH1_REG, 0x40
.set PIT_CH1_REG, 0x41
.set PIT_CH2_REG, 0x42
.set PIT_MODE_CMD_REG, 0x43

.set UNK_REG, 0x61

.global toneasm_toneon
toneasm_toneon:
	pusha
pit_cfg:
	mov $182, %al
	out %al, $PIT_MODE_CMD_REG
	mov %cl, %al
	out %al, $PIT_CH2_REG
	mov %ch, %al
	out %al, $PIT_CH2_REG
enable_output:
	in $UNK_REG, %al
	or $0x03, %al
	out %al, $UNK_REG
	popa
	ret

.global toneasm_toneoff
toneasm_toneoff:
	pusha
	in $UNK_REG, %al
	and $0xFC, %al
	out %al, $UNK_REG
	popa
	ret

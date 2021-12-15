.code16
.section mbr
.text

.global biosentry
biosentry:
    cli
    cld
    mov %cs, %ax
    mov %ax, %ds
    mov %ax, %es

copyos:
    # Reset disk controller #0 (drive A:)
    xor %ax, %ax
    mov %al, %dl
    int $0x13

    # Read payload into RAM
    mov $0x02, %ah
    mov $63, %al # Sector read count
    mov $0x00, %ch # Cylinder
    mov $0x02, %cl # Sector
    mov $0x00, %dh # Head #0
    mov $0x00, %dl # Drive A:
    xor %bx, %bx
    mov %bx, %es
    mov $0x7E00, %bx
    int $0x13 # Load at 0000:7E00
    jne copyos_error

    # Call payload
    xor %ax, %ax
    mov %ax, %ds
    mov %ax, %es
    mov %ax, %ss
    mov $__stack_top, %esp
    cld
    call main

copyos_error:
    xor %esi, %esi
    mov $copyos_error_string, %si
    mov $0x0E, %ah
    xor %bx, %bx
    mov %bx, %ds
copyos_error_loop:
    lodsb
    or %al, %al
    jz loop_nil
    int $0x10
    jmp copyos_error_loop

loop_nil:
    hlt
    jmp loop_nil
    
copyos_error_string:
    .string "Payload readout error"

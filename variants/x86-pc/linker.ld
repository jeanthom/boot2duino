ENTRY(biosentry)

SECTIONS {
	/* MBR zone */
	. = 0x7c00;
	.mbr : {
		*entry.S.o(.text)
	}

	. = 0x7dfe;
	.sig : {
		SHORT(0xaa55);
	}

	/* Regular code zone */
	. = 0x7e00;
	.text : {
		*(.text .stub .text.*)
		*(.data)
		*(.rodata .rodata.*)
		__bss_start = .;
		*(.bss)
		*(COMMON)
		__bss_end = .;
	}
	__stack_bottom = .;
	. = . + 0x1000;
	__stack_top = .;

	/* Deleting useless sections */
	/DISCARD/ : {
		*(.eh_frame)
		*(.note.gnu.property)
		*(.note.gnu.build-id)
		*(.comment)
	}
}

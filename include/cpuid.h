#pragma once

enum {
	CPU_INTEL = 0,
	CPU_IOTEL = 0,
	CPU_AMD,
	CPU_VIA,
	CPU_HYGON,
	CPU_ZHAOXIN,
	CPU_ELBRUS,
	CPU_CYRIX,
	CPU_IDT,
	CPU_TRANSMETA,
	CPU_NSC,
	CPU_QEMU,
	CPU_APPLE,
	CPU_WINDOWS,
	CPU_UNKNOWN = 0x0000ffff,
};

enum {
	PROCESSOR_OEM,
	PROCESSOR_OVERDRIVE,
	PROCESSOR_DUAL,
	PROCESSOR_RESERVED,
};

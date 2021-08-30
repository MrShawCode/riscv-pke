#ifndef _CONFIG_H_
#define _CONFIG_H_

// we use only one HART (cpu) in fundamental experiments
#define NCPU 1

//interval of timer interrupt
#define TIMER_INTERVAL 1000000

// the maximum memory space that PKE is allowed to manage
#define PKE_MAX_ALLOWABLE_RAM 128 * 1024 * 1024

// the ending physical address that PKE observes
#define PHYS_TOP (DRAM_BASE + PKE_MAX_ALLOWABLE_RAM)

#endif

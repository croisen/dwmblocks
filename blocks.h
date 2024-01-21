// Modify this file to change what commands output to your statusbar, and
// recompile using the make command.
#ifndef DWMBLOCKS_CONFIG_H
#define DWMBLOCKS_CONFIG_H

typedef struct
{
    const char *icon;
    const char *command;
    unsigned int interval;
    unsigned int signal;
} Block;

#define BAT  "~/.local/share/scripts/bat.sh"

#define CPU  "~/.local/share/scripts/cpu.sh"

#define DATE "~/.local/share/scripts/date.sh"

#define MEM  "~/.local/share/scripts/mem.sh"

#define VOL  "~/.local/share/scripts/vol.sh"

const Block blocks[] = {
    /*Icon*/  /*Command*/  /*Update Interval*/  /*Signal */
    {":",  BAT,  5, 0},
    {"󰻠",  CPU,  5, 0},
    {"󰍛:", MEM,  5, 0},
    {"󰕾:", VOL,  5, 7},
    {":",  DATE, 1, 0},
};

// sets delimiter between status commands. NULL character ('\0') means no
// delimiter.
static char delim[]          = " | ";
static unsigned int delimLen = 5;

#endif /*DWMBLOCKS_CONFIG_H*/

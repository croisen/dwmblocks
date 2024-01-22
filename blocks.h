#ifndef DWMBLOCKS_CONFIG_H
#define DWMBLOCKS_CONFIG_H
// Modify this file to change what commands output to your statusbar, and
// recompile using the make command.

typedef struct
{
    const char *icon;
    const char *command;
    unsigned int interval;
    unsigned int signal;
} Block;

// Macro             Path/script         Interface?   Other Args
#define BAT  "~/.local/share/scripts/bat.sh BAT1"
#define NET  "~/.local/share/scripts/net.sh wlan0       ↓    ↑"

#define CPU  "~/.local/share/scripts/cpu.sh"
#define DATE "~/.local/share/scripts/date.sh"
#define MEM  "~/.local/share/scripts/mem.sh"
#define SWAP "~/.local/share/scripts/swap.sh"
#define VOL  "~/.local/share/scripts/vol.sh"

const Block blocks[] = {
    /*Icon*/  /*Command*/  /*Update Interval*/  /*Signal */
    {"󰖩:", NET,  1,  0},
    {":",  BAT,  10, 0},
    {"󰻠:", CPU,  10, 0},
    {"󰍛:", MEM,  10, 0},
    {"󰾵:", SWAP, 10, 0},
    {"󰕾:", VOL,  10, 7},
    {":",  DATE, 1,  0},
};

// sets delimiter between status commands. NULL character ('\0') means no
// delimiter.
static char delim[]          = " | ";
static unsigned int delimLen = 5;

#endif /*DWMBLOCKS_CONFIG_H*/

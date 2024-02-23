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
#define BAT  "~/.config/dwmblocks/bat.sh  BAT1"
#define NET  "~/.config/dwmblocks/net.sh  wlp3s0        ↓    ↑"

#define CPU  "~/.config/dwmblocks/cpu.sh"
#define DATE "~/.config/dwmblocks/date.sh"
#define MEM  "~/.config/dwmblocks/mem.sh"
#define SWAP "~/.config/dwmblocks/swap.sh"
#define VOL  "~/.config/dwmblocks/vol.sh"

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

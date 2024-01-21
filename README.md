# dwmblocks

My own configuration of dwmblocks, a modular status bar for dwm written in c.

# Usage

Run make and make install.

```bash
# To compile dwmblocks
make

# To put the scripts in their right place
make scripts

# To add dwmblocks to /usr/local/bin, you may need to use sudo or other apps
# for root access
make install
```

After that you can put dwmblocks in your xinitrc or other startup script to
have it start with dwm.

# Modifying blocks

The statusbar is made from text output from commandline programs.
Blocks are added and removed by editing the blocks.h header file.
By default the blocks.h header file is created the first time you run make
which copies the default config from blocks.def.h.
This is so you can edit your status bar commands and they will not get
overwritten in a future update.

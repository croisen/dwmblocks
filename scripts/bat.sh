#!/bin/sh


bat=$(cat /sys/class/power_supply/$(ls /sys/class/power_supply/ |\
    grep BAT | head -n1)/capacity)
printf '%3d%%' $bat

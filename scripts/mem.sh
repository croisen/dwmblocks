#!/bin/sh


free -h |\
    awk '/^Mem/ { gsub(/[iG]/, ""); printf "%3.0f%%", (($3 / $2) * 100 ) }'

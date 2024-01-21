#!/bin/sh


free -h |\
    awk '/^Swap/ { gsub(/[iG]/, ""); printf "%3.0f%%", (($3 / $2) * 100 ) }'

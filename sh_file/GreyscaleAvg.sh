#!/bin/bash
gcc greyscaleAvg.c
./a.out
eog RefImg.bmp
eog GreyscaleAvg.bmp
clear
gcc mainfile.c
./a.out
clear

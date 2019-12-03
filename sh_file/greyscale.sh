#!/bin/bash
gcc greyscale.c
./a.out
eog RefImg.bmp
eog Greyscale.bmp
clear
gcc mainfile.c
./a.out
clear

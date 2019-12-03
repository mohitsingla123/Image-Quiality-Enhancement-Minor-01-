#!/bin/bash
gcc scaling.c
./a.out
eog RefImg.bmp
eog Scaled.bmp
clear
gcc mainfile.c
./a.out
clear

#!/bin/bash
gcc -S -masm=intel CFILE.c -o $CFILE.s

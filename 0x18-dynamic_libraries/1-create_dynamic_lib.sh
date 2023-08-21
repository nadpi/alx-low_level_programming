#!/bin/bash
gcc -c *.o
gcc -shared -o liball.so *.o

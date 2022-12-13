#!/bin/bash
gcc -c *.c -fpic
gcc *.o -shared -o liball.so
export LD_LIBRARY_PATH=:/root/alx-low_level_programming/0x18-dynamic_libraries root@6d432d1f4e84:~/alx-low_level_programming/0x18-dynamic_libraries

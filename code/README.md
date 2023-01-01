This folder contains the C code for the Z80 computer. The code is meant to work with the specific IO and memory map of my specific Z80 computer, but can be modified by changing the header files.

To compile, you must have SDCC installed on your Windows computer. Just run the makefile and everything will work by itself. You can easily modify it to run on a Linux or Mac.

8255test.c is the main file, it's called that because the Z80 computer was first just made to test a 82C55. Look at the schematic.

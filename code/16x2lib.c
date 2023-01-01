#include "16x2lib.h"

__sfr __at (IO_LOCATION_COMMAND_16x2)   COMMAND_16x2;
__sfr __at (IO_LOCATION_DATA_16x2)      DATA_16x2;

void start16x2(){
    COMMAND_16x2 = 0x30;
    COMMAND_16x2 = 0x30;
    COMMAND_16x2 = 0x30;
    COMMAND_16x2 = 0x38;
    COMMAND_16x2 = 0x08;
    COMMAND_16x2 = 0x01;
    COMMAND_16x2 = 0x06;
    COMMAND_16x2 = 0x0E;
    COMMAND_16x2 = 0x80;
}

inline void clear16x2(){
    COMMAND_16x2 = 0x01;
}

void test16x2(){
    DATA_16x2 = 'S';
    DATA_16x2 = 't';
    DATA_16x2 = 'e';
    DATA_16x2 = 'f';
    DATA_16x2 = 'a';
    DATA_16x2 = 'n';
}

inline void writeLetter(unsigned char letter){
    DATA_16x2 = letter;
}

void writeString(unsigned char* string){
    for(unsigned char i = 0; string[i] != '\0'; i++){
        writeLetter(string[i]);
    }
}

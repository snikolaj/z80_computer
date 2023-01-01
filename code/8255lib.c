#include "8255lib.h"

__sfr __at (IO_LOCATION_A_8255)         A_8255;
__sfr __at (IO_LOCATION_B_8255)         B_8255;
__sfr __at (IO_LOCATION_C_8255)         C_8255;
__sfr __at (IO_LOCATION_CONTROL_8255)   CONTROL_8255;



inline void writeControlWord(unsigned char data){
    CONTROL_8255 = data;
}

inline void writeA(unsigned char data){
    A_8255 = data;
}

inline unsigned char readA(){
    return A_8255;
}

inline void writeB(unsigned char data){
    B_8255 = data;
}

inline unsigned char readB(){
    return B_8255;
}

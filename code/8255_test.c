#include <stdint.h>
#include "8255lib.h"
#include "16x2lib.h"
#include "adc0804lib.h"
#include "8bitformatlib.h"

char ADCbuf[4];

void start8255(){
    writeControlWord(0b10011111);
}

void main(){
    start8255();

    start16x2();
    writeString("Stefan");

    while(1){
        clear16x2();
        writeLetter(readA());
        writeLetter(' ');

        charToBuffer(readADC(), ADCbuf);
        writeString(ADCbuf);
    }
}

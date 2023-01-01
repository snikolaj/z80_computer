#include "adc0804lib.h"

__sfr __at (IO_LOCATION_ADC0804) ADC0804;

inline unsigned char readADC(){
    ADC0804 = 00; // dummy write
    // insert wait states for higher clock speeds

    return ADC0804;
}

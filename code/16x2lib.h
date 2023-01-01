#define IO_LOCATION_COMMAND_16x2    0x0008
#define IO_LOCATION_DATA_16x2       0x0009

void start16x2();

inline void clear16x2();

void test16x2();
inline void writeLetter(unsigned char letter);
void writeString(unsigned char* string);

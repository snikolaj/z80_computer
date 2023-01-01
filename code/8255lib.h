#define IO_LOCATION_A_8255          0x0000
#define IO_LOCATION_B_8255          0x0001
#define IO_LOCATION_C_8255          0x0002
#define IO_LOCATION_CONTROL_8255    0x0003

inline void writeControlWord(unsigned char data);

inline void writeA(unsigned char data);
inline unsigned char readA();

inline void writeB(unsigned char data);
inline unsigned char readB();

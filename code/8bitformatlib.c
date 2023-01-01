
void charToBuffer(unsigned char number, unsigned char* buffer){
    buffer[0] = '0';
    while(number > 99){
        number = number - 100;
        buffer[0]++;
    }

    buffer[1] = '0';
    while(number > 9){
        number = number - 10;
        buffer[1]++;
    }

    buffer[2] = '0' + number;

    buffer[3] = '\0';
}

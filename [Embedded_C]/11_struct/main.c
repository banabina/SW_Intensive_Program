#include <stdio.h>

typedef struct
{
    unsigned char CNFG1;
    unsigned char CNFG2;
    unsigned short MODE;
} ADC_CONFIG;

typedef struct {
    unsigned char b0 : 1;
    unsigned char b1 : 1;
    unsigned char b2 : 1;
    unsigned char b3 : 1;
    unsigned char b4 : 1;
    unsigned char b5 : 1;
    unsigned char b6 : 1;
    unsigned char b7 : 1;
} bit8;

typedef union
{
    ADC_CONFIG      cnfg;
    unsigned char   byte[4];
    bit8            bit32[4];
} HADC;

int main(){
    // 1st example struct
    ADC_CONFIG adc1 = {0x01, 0x80, 0xF000};

    unsigned char* p = (unsigned char*)&adc1;
    printf("0x%2X\n", adc1.CNFG1);
    printf("0x%2X\n", *(p+1));
    printf("0x%2X\n", adc1.MODE);

    // 2nd example union
    HADC a1;
    printf("union HADC size is %d\n", sizeof(a1));
    a1.cnfg.MODE = 0xFBCD;
    a1.cnfg.CNFG1 = 0x11;
    a1.cnfg.CNFG2 = 0x22;
    printf("HADC[3] is 0x%2X\n", a1.byte[0]);

    // 3re bit access
    printf("CNFG1 is %d\n", a1.bit32[0].b1);
    return 0;
}
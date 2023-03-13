#include <stdio.h>

typedef enum {
    EOC = 1, // End of conversion
    SOC = 0 // Start of conversion
} ADC_STATUS;

int read_adc() {
    int a;
    printf("Enter 1(EOC) or 0(SOC)");
    scanf("%d", &a);
    return a;
}

ADC_STATUS adc_status() 
{
    // HW operation
    // if (~~~)
    if (read_adc() == 1) {
        return EOC;
    } else {
        return SOC;
    }
    
}

typedef enum {
    TIMER_EN = (1 << 7),
    TIMER_ST = (1 << 2)
} TIMER_MODE;

int main(){

    if (adc_status() == SOC) {
        printf("still on conversion\n");
    } else if (adc_status() == EOC) {
        printf("end of conversion\n");
    }

    // check status before.. waiting
    while (adc_status() == SOC);
    printf("end of conversion ..\n");

    unsigned char TMODE = 0x01;
    
    //#define TMODE *((unsigned char*)(0x000000caacbff85f))

    TMODE |= TIMER_EN; // bit enable
    TMODE |= TIMER_ST; // start
    printf("TMODE: 0x%2x\n", TMODE);

    // bit clear
    TMODE &= ~TIMER_ST;
    printf("TMODE: 0x%2x\n", TMODE);

    // address mapping 예시
    printf("address of TMODE is %p\n", &TMODE);

    return 0;
}
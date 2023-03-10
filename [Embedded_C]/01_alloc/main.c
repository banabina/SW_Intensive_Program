#include <stdio.h>

int main()
{
    int a = 0x5578FA5B;
    int* ap = &a;
    *ap = 0x44556677;

    printf("a is 0x%8X at 0x%p\n", a, ap);

    char* abp = (char*)&a;

    printf("abp is just address 0x%p\n", abp);
    printf("value refered by abp is 0x%2X\n", *abp);
    printf("value refered by abp is 0x%2X\n", *(abp+1));

    *(abp) = 0xFF;

    printf("a is 0x%8X at 0x%p\n", a, ap);

    int k = 0x12345678;
    int* kp = &k;
    int** kpp = &kp;

    printf("k is 0x%8x\n", **kpp);

    return 0;
}
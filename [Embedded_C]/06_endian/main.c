#include <stdio.h>

void mem_inspection(unsigned char* abp, int N)
{
    printf("------- mem inspection-------");
    printf("memory inspection (%d bytes)\n", N);

    for (int i=0; i<N; i++)
    {
        printf("mem[%d] is %2X at %p\n", i, *(abp+i), abp+i);
    }
}

int main(){

    typedef struct {
        unsigned int w1;
        unsigned char b;
        unsigned short s;
        unsigned int w2;
    } BLK;

    BLK block[2] = {
            {0x12345678, 0x5A, 0XFFBB, 0X9ABCDEF0},
            {0x12345678, 0x5A, 0XFFBB, 0X9ABCDEF0}
    };

    unsigned char* ptr = (unsigned char*)block;
    mem_inspection(ptr, sizeof(BLK) * 2);

    struct foo1 {
        int     a;
        short   b;
        char    c;
        int     d;
        char    e;
        char    f;
        char    g;
        short   h;
    };

    struct foo2 {
        int     a;
        short   b;
        short   h;
        int     d;
        char    c;
        char    e;
        char    f;
        char    g;
    };

    struct foo1 f1 = {
        0x12345678,
        0xFBCD,
        0xEE,
        0x12345678,
        0xAB,
        0xCC,
        0xEE,
        0xDDFF
    };
    printf("struct foo's size is %d\n", sizeof(f1));
    printf("struct foo's size is %d\n", sizeof(struct foo2));
    return 0;
}
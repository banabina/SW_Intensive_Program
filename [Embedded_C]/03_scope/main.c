#include <stdio.h>

static int L=14;
int g1 = 20;
const int c1 = 100;
extern int incre(int i);

int main()
{
    int i = g1 + c1;
    printf("hello %d\n", incre(i));
    printf("hello %d\n", incre(i));
    printf("hello %d\n", incre(i));
    return 0;
}
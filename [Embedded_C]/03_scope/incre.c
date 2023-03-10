#include <stdio.h>

extern int g1;
static int S = 0;

int incre(int i) {
    int L = 44;
    S++;
    L++;
    printf("g1: %d, L: %d, S: %d\n", g1, L, S);

    return i + 1;
}
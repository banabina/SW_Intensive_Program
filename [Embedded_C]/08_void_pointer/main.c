#include <stdio.h>

int compare1(int a, int b) {
    return (a == b);
}

int compare2(float a, float b) {
    return (a == b);
}

int compare(int type, void* a, void* b)
{
    if (type == 0) {
        int* ap = (int*)a;
        int* bp = (int*)b;
        return (*ap == *bp);
    } else if (type == 1) {
        float* ap = (float*)a;
        float* bp = (float*)b;
        return (*ap == *bp);
    }
}

int main(){
    int a = 100;
    int b = 200;
    if (compare(0, &a, &b)) {
        printf("same\n");
    } else {
        printf("not same\n");
    }
    /*
    if (compare1(a, b)) {
        printf("same\n");
    } else {
        printf("not same\n");
    }*/

    float c = 100.1;
    float d = 200.1;

    if (compare(1, &c, &d)) {
        printf("same\n");
    } else {
        printf("not same\n");
    }
    /*
    if (compare2(c, d)) {
        printf("same\n");
    } else {
        printf("not same\n");
    }*/

    return 0;
}
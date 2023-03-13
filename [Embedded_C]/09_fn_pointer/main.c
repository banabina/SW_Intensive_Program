#include <stdio.h>

void detect_v1(int a, int b) {
    // do shomething
    printf("detect_v1() is activated... %d, %d\n", a, b);
}

void detect_v2(int a, int b) {
    // do shomething
    printf("detect_v2() is activated... %d, %d\n", a, b);
}

void (*detect)(int, int) = detect_v2;

int main(){
    detect(10, 12);

    // runtime dynaically remapping
    // select service routine
    int cond = 1;
    if (cond == 1) {
        detect = detect_v1;
    } else if (cond == 2) {
        detect = detect_v2;
    }
    
    detect(1, 2);
    return 0;
}
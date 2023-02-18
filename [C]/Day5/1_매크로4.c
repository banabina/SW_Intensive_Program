#include <stdio.h>

// #매크로인자: 매크로 인자를 문자열로 풀어 달라
#define PRINT_VAR(x) printf(#x " %d\n", x)

// ##: 2개를 붙여달라!
#define PRINT_VAR2(x) printf("%d, %d\n", x##1, x##2)

int main()
{
    int n = 10;

    PRINT_VAR(n); // printf("n" "%d\n", n)
    PRINT_VAR(n*20); // printf("n*20" " = %d\n", n*20)

    int a1 = 10;
    int a2 = 20;
    PRINT_VAR2(a); // printf("%d, %d\n", a1, a2)
}
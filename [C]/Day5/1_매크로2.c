
// 매크로 함수
// 장점 1. 일반함수 보다 빠르다.
//     2. 모든 타입에 동작하는 함수 - generic 함수
// 
// 참고 : 관례적으로 매크로는 주로 대문자로 만듭니다.
//       소문자로 해도 됩니다.
#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

#define WIDTH      10
#define ADD(a, b)  a+b

int main()
{
    int r1 = add(1,2);
    int r2 = ADD(3, 4);

    printf("int: %d %d\n", r1, r2);

    double d1 = add(2.1, 3.4);
    double d2 = ADD(2.1, 3.4);

    printf("double: %lf %lf\n", d1, d2);
}
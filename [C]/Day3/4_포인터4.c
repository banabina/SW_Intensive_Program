// 4_포인터4.c - 100 page 참고
#include <stdio.h>

// 함수 인자를 받는 것은 변수의 선언
// int x = a; (main에서 보낸 a)

// 아래 코드가 call by value (값에 의한 함수 호출)
// => inc 안에서는 절대 main 함수의 a 메모리에 접근 안됨
void inc(int x)
{
	++x;
}

int main()
{
	int a = 1;
	int b = a;
	inc(a);
	printf("%d\n", a);
}
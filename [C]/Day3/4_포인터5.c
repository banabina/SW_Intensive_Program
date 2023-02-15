// 4_포인터5.c
#include <stdio.h>

// 왜 포인터가 필요한가?

// 1. 다른 함수에서 만든 변수(메모리)에 접근해서 값을 변경하고 싶을때
// => 함수 인자로 변수의 주소를 전달.
// => call by address, call by pointer, call by reference 라는 용어들을 사용.

// inc 안에서 main 에서 만든 a 변수의 값을 변경하고 싶다면
void inc(int *p)
{
	++(*p);
}

int main()
{
	int a = 1;

	inc(&a);
	
	printf("%d\n", a);
}
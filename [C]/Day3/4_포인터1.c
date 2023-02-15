// 4_포인터1.c - 92 page

#include <stdio.h>

int main()
{
	int n = 10;

	// 핵심 1. 변수 이름 앞에 & 연산자를 붙이면 변수의 메모리 주소를 얻을 수 있음
	printf("%d\n", n);  // 10
	printf("%p\n", &n); // 주소는 %p로 출력
}
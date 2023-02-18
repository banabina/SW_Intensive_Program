// 문자열 배열과 문자열 포인터 (약간 어려운 내용) 124 page
#include <stdio.h>

void foo()
{
	char s[] = "HELLO";
	char* p = "HELLO";

	printf("foo  : %p, %p\n",p, s);
}

int main()
{
	// 124 page 그림이 핵심

	char s[] = "HELLO";	// 문자열 배열
	char* p = "HELLO";	// 문자열 포인터

	printf("main : %p, %p\n", p, s);

	foo();
}
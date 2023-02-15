#include <stdio.h>

int main()
{
	int n;
	int* p;

	printf("%zu\n", sizeof(n)); // 4
	printf("%zu\n", sizeof(p)); // 포인터 변수의 크기
}
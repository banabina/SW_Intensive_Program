/* 3_변수5.c
* 변수의 다양한 속성 얻는 방법 - 중요 23 페이지
*/
#include <stdio.h>

int main()
{
	int n = 10;
	
	printf("%d\n", n);

	printf("%d\n", &n);
	printf("%p\n", &n);
	printf("%x\n", &n);

	// %d; 4바이트 크기

	printf("%d\n", sizeof n);
	printf("%d\n", sizeof(n));

	printf("%d\n", sizeof(double));
}
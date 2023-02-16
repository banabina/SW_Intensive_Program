#include <stdio.h>
#include <stdlib.h>

int g = 0;

int main()
{
	static int s = 0;
	int n = 0;
	int* p = malloc(40);

	printf("&g: %p\n", &g);
	printf("&s: %p\n", &s);
	printf("&p: %p\n", &p);
	printf("p: %p\n", p);
	printf("&main: %p\n", &main); // main 함수의 주소. 코드 메모리

	free(p);
}
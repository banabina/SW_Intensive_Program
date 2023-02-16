// 115 page
#include <stdio.h>

int g = 0;

int main()
{
	int n = 0;
	
	int* p = 0;

	int* p = malloc(40);

	// 사용 후 .. 
	p[0] = 10;

	// 제거
	// => 아래 코드는 p를 제거하는 게 아님
	// => p가 담고 있는 주소의 메모리(malloc으로 할당한)를 제거
	free(p);

	p = malloc(20);
	free(p);
}
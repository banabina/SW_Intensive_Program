#include <stdio.h>

// 반복문을 탈출하는 2가지 방법 - 47 page
int main()
{
	int i = 0;

	// 방법 1. 조건식이 false 일 때 탈출
	while (i < 10)
	{
		printf("%d\n", i);
		++i;
	}

	// 방법 2. break로 탈출.
	i = 0;
	while (1)
	{
		printf("%d\n", i);
		++i;
		if (i == 10)
			break;
	}
}
#include <stdio.h>

int main()
{
	// 반복문을 만들때는 대부분 인덱스를 관리할 변수가 필요
	int j = 0;
	int i = 0;
	int k = 1;
	while (i < 10)
	{
		j = 10;
		while (j > k)
		{
			printf("*");
			--j;
		}
		printf("\n");
		++i;
		++k;
	}
	

	return 0;
}
#include <stdio.h>

int main()
{
	int i = 0;
	
	if (i < 10)
	{
		printf("if 문은 조건을 만족하면 한번 실행됨\n");
	}

	while (i < 10)
	{
		printf("while 문은 조건을 만족하면 계속 반복 실행됨\n");
		++i;
	}

	printf("continue main\n");
}
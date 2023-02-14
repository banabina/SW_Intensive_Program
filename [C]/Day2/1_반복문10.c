#include <stdio.h>

int main()
{
	int i = 100;

	while (i < 10)
	{
		printf("while 문은 조건이 거짓이면 한번도 실행안됨\n");
	}

	do
	{
		printf("while 문은 조건이 거짓이라도 한 번은 실행됨\n");
	} while (i < 10);
}
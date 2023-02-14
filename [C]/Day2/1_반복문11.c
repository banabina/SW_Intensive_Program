#include <stdio.h>

int main()
{
	// 사용자에게 정수를 입력받아 보세요
	// 그런데, 입력된 정수가 10 보다 크면 다시 입력 받아야 합니다.
	// 1. while로 만들어 보세요
	// 2. do ~ while로 만들어 보세요.

	int num = 0;
	scanf_s("%d", &num);
	while (num > 10)
	{
		scanf_s("%d", &num);
	}
	printf("종료\n", num);

	do
	{
		scanf_s("%d", &num);
	} while (num > 10);
	printf("종료\n", num);
}
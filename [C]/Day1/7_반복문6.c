#include <stdio.h>

// 사용자에게 정수를 입력 받고
// 입력된 값을 곱하기 2해서 출력
// 사용자가 -1을 입력할 때 까지 반복
int main()
{
	int input = 0;
	while (1)
	{
		scanf_s("%d", &input);
		if (input == -1)
			break;
		printf("%d\n", 2 * input);
	}
}
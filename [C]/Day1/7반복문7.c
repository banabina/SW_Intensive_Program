#include <stdio.h>

// 사용자에게 정수를 입력 받고
// 입력된 값을 곱하기 2해서 출력
// 사용자가 -1을 입력할 때 까지 반복
int main()
{
	int n = 0;
	while (1)
	{
		printf("1. 라면\n");
		printf("2. 김밥\n");
		printf("3. 국수\n");
		printf("4. 종료\n");
		printf("메뉴를 선택하세요 >> ");

		scanf_s("%d", &n);

		if (n == 4)
			break;

		if (n < 1 || n > 3)
			continue;
		
		
		switch (n)
		{
		case 1: printf("주방에 라면 주문됨\n"); break;
		case 2: printf("주방에 김밥 주문됨\n"); break;
		case 3: printf("주방에 국수 주문됨\n"); break;
		}
	}
}
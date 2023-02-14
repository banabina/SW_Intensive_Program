#include <stdio.h>

int main()
{
	// 핵심: 각 월별 날짜를 "배열"로 관리하는 기술
	int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	int month = 0;
	printf("원하는 달을 입력하세요 >> ");

	scanf_s("%d", &month);

	printf(" SUN MON TUE WED THU FRI SAT\n");

	for (int i = 1; i <= days[month - 1]; ++i)
	{

		printf("%4d", i);
		if (i % 7 == 0)
			printf("\n");
	}

	return 0;
}
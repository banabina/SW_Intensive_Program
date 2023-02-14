#include <stdio.h>

int main()
{
	// 핵심 1. week_of_day 변수 도입. 요일을 0, 1, 2, ...의 숫자로 약속
	//		2. 화면 출력시 1일이 다른 요일이 될 수 있게
	//		3. 개행 시 시작 요일을 고려해서.. 개행
	int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	int month = 1; // 1월로 가정

	int day_of_week = 3; // 0: 일요일, 1: 월요일, 2: 화요일 ... 로 약속
	/*
	printf("원하는 달을 입력하세요 >> ");

	scanf_s("%d", &month);
	*/
	printf(" SUN MON TUE WED THU FRI SAT\n");

	for (int i = 0; i < day_of_week; ++i)
	{
		printf("    ");
	}

	for (int i = 1; i <= days[month - 1]; ++i)
	{

		printf("%4d", i);
		if ((i + day_of_week) % 7 == 0)
			printf("\n");
	}

	return 0;
}
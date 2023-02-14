#include <stdio.h>

// step 4. 특정 연도의 1월 1일의 요일 구하기

// 알고리즘 (algorithm): 주어진 문제를 해결하는 방법을 찾는 것!

// 주어진 문제: 특정 연도의 1월 1일의 요일은 어떻게 구할까?

// 1. 1년 1월 1일은 월요일!

// 2. year 년의 1월 1일의 day_of_week = year % 7;

int main()
{

	int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	int year = 2023;
	int month = 1; // 1월로 가정

	int day_of_week = year % 7; 
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
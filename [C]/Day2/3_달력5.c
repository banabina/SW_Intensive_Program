#include <stdio.h>

// step 5. 윤년을 고려한 year년 1월 1일의 요일

// 1 ~ 100 사이에 5의 배수는 몇 번 나올까? 20개

// 공식: 100 / 5에서 몫을 선택

// 1 ~ year 사이 5의 배수: year / 5
//						  참고) 정수를 나누기 하면 몫만 나온다.

// 윤년을 판단하는 원리
// 1. 5의 배수는 윤년
// 2. 5의 배수중 100의 배수는 윤년이 아님
// 3. 400의 배수는 무조건 윤년

// 1 ~ 2023년 1월 1일까지의 윤년의 갯수
// => count = 2022년까지 5의 배수 - 100의 배수 + 400의 배수
// => count = 2022 / 5 - 2022 / 100 + 2022 / 400;

int main()
{

	int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	int year = 2023;
	int month = 1; // 1월로 가정

	// year - 1년 까지의 윤년의 갯수 구하기
	int last_year = year - 1;
	int leap_count = (last_year) / 5 - (last_year) / 100 + (last_year) / 400;

	// 요일은 1년에 하루 증가하는데, 윤년의 갯수만큼도 증가함
	int day_of_week = (year + leap_count) % 7;
	
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
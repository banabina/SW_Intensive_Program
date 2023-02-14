#include <stdio.h>

// step 7. 2020년 7월 1일이 잘못됩니다.
// 왜? 잘못될까?
// 해결해보기
// 2020년 2월도 잘못됩니다.
// 힌트: 2020년 2월도 잘못됨

int main()
{
	const int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	int year = 2020;
	int month = 7;

	int last_year = year - 1;
	int leap_count = last_year / 4 - last_year / 100 + last_year / 400;

	int week_of_day = (year + leap_count) % 7;

	for (int i = 0; i < month - 1; i++)
	{
		week_of_day += days[i];
	}

	week_of_day = week_of_day % 7;

	printf(" SUN MON TUE WED THU FRI SAT\n");


	for (int i = 0; i < week_of_day; i++)
	{
		printf("    ");
	}


	for (int i = 1; i <= days[month - 1]; i++)
	{
		printf("%4d", i);

		if ((i + week_of_day) % 7 == 0)
			printf("\n");
	}
}
#include <stdio.h>

// step 6. 1월 1일이 아닌 다른 달(month)의 1일의 요일 구하기





int main()
{
	int days[12] = { 31, 28, 31, 30,31, 30,31,31,30,31,30, 31 };

	int year = 2023;
	int month = 5;

	int last_year = year - 1;
	int leap_count = last_year / 4 - last_year / 100 + last_year / 400;

	// 아래 코드는 1월 1일의 요일
	int week_of_day = (year + leap_count) % 7;

	// 5월 1일의 요일을 1월 ~ 4월 까지의 일수를 더한후 7로 나누면 된다.
	// month 가 5이면, 4월까지의 합. 즉, 0 ~ 3
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
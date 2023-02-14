#include <stdio.h>

const int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

// 프로그램 작성 시 main 함수에 모두 작성하지 말고
// 각 기능별로 함수를 분리하세요
// 아무리 복잡해도 나누어서 정보 (divide and conquer) 할 수 있다.

// 인자로 연도와 달을 받아서 1일의 요일을 반환하는 함수
int get_week_of_day(int year, int month)
{
	int last_year = year - 1;
	int leap_count = last_year / 4 - last_year / 100 + last_year / 400;

	int week_of_day = (year + leap_count) % 7;

	for (int i = 0; i < month - 1; i++)
	{
		week_of_day += days[i];
	}

	week_of_day = week_of_day % 7;

	return week_of_day;
}

void print_calendar(int month, int week_of_day)
{
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

int main()
{

	int year = 2020;
	int month = 7;

	int week_of_day = get_week_of_day(year, month);

	// 아래 부분을 print_calendar()로 분리해보세요
	// 인자를 뭘로 할 지 생각해 보세요.
	// 1. 인자를 뭘로 할지 생각해보세요
	// 2. 리턴 타입은 뭘로 할지

	print_calendar(month, week_of_day);
}
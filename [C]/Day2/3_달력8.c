#include <stdio.h>
#include <conio.h> // _getch() 함수를 위한 헤더

// step 7. 2020년 7월 1일이 잘못됩니다.
// 왜? 잘못될까?
// 해결해보기
// 2020년 2월도 잘못됩니다.
// 힌트: 2020년 2월도 잘못됨

int main()
{
	const int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	int year = 0;
	int month = 0;

	while (1)
	{
		// system 함수: 명령프롬프트 창에서 사용하는 명령을 
		//				() 안에 문자열로 전달
		system("cls");

		printf("연도를 입력하세요 (종료하시려면 0) >> ");
		scanf_s("%d", &year);

		if (year == 0)
			break;

		printf("월을 입력하세요 >> ");
		scanf_s("%d", &month);

		if (month < 1 || month > 12)
			continue;

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

		printf("\n\n계속하려면 아무키나 누르세요.\n");

		_getch(); // enter 누를 때까지 대기하는 C 표준 함수
	}
}

/*
* 구글에서 "source code line" 검색 후 첫번째 위키 클릭
*/
#include <stdio.h>

int main()
{
	printf(" SUN MON TUE WED THU FRI SAT\n");

	// 1 ~ 31 까지 출력하기
	for (int day = 1; day <= 31; ++day)
	{
		
		printf("%4d", day);
		if (day % 7 == 0)
			printf("\n");
	}

	return 0;
}
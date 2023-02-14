#include <stdio.h>

int main()
{
	int score = 60;
	// 1. 변수 이름만 넣으면 0이면 false, 0이 아니면 true
	if (score)
	{
		printf("true\n");
	}
	
	if (score == 50) // 대표적인 버그 if (score = 50) 항상 true
	{

	}

	// 버그를 막기 위해 리터럴을 좌변에 놓기도 함
}
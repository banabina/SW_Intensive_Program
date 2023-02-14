#include <stdio.h>

// 핵심: for문 - 57p
int main()
{
	int i = 0; // 1. 반복 계수를 관리할 변수 선언 (초기화)

	while (i < 10) // 2. 반복을 위한 조건식
	{
		printf("%d\n", i); // 3. 반복할 문장 작성
		++i;				// 4. 반복을 위한 변수 값 증가
	}

	int j = 0;
	for (j = 0; j < 10; ++j)
	{
		printf("%d\n", j);
	}


	// while vs for
	/*
	* 1. 반복의 횟수가 명확할 때: for 문
	* 2. 조건에 따른 반복 : while 문
	* 1 ~ 100 까지 반복: for문 사용
	* 사용자가 -1을 입력할 때 까지 반복: while, do- while 권장
	*/
}
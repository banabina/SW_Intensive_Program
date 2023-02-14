#include <stdio.h>

int main()
{
	// 반복문을 사용하는 전형적인 코드
	// 1. 반복문의 조건을 관리할 변수 선언
	int i = 0;

	// 2. while 문에서 반복 조건을 조사
	while (i < 10)
	{
		// 3. {} 안에 반복할 문장 작성
		printf("while 문은 조건을 만족하면 계속 반복 실행됨\n");
		
		// 4. 반복 횟수를 관리하는 변수 증가
		++i;
	}

	printf("continue main\n");
}
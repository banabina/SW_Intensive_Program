#include <stdio.h>

int main()
{
	// 1. 변수를 외부에 선언하고 for에서 사용
	int i = 0;
	for (i = 0; i < 10; ++i)
	{

	}
	i = 11; // => for 문이 종료되어도 i는 계속 사용 가능
	
	for (int j = 0; j < 10; ++j)
	{

	}

	//j = 12; // for 문이 종료되면 j는 사용 불가

	// 2. for문 초기, 조건식, 증가문은 생략 가능
	int k = 0;
	for (k = 0; k < 10; ++k)
	{

	}

	for (;;)
	{
		// 무한루프. but 권장하지 않음
	}
	while (1)
	{

	}
}
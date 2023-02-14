#include <stdio.h>

int main()
{
	int block[4][4] = { 0, 0, 0, 0,
						0, 1, 0, 0,
						0, 1, 1, 1,
						0, 0, 0, 0 };

	for (int y = 0; y < 4; ++y)
	{
		for (int x = 0; x < 4; ++x)
		{
			if (block[y][x] == 1)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
	
	
}

// 1. 위 코드를 for 문으로 4번 반복하세요 - 인덱스 변수는 x 사용

// 2. 다시 1번을 for 문으로 4번 반복하세요 - 인덱스 변수 y 사용
//	  정사각형으로 보이게 하세요
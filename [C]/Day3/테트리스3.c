// 테트리스3.c
#include <stdio.h>
#include "xyprintf.h"

// step 3. 한개 블록 출력하기
int main()
{
	int block[4][4] = {
		{0, 0, 0, 0},
		{0, 1, 0, 0},
		{1, 1, 1, 0},
		{0, 0, 0, 0}
	};

	for (int y = 0; y < 4; ++y)
	{
		for (int x = 0; x < 4; ++x)
		{
			if (block[y][x] == 1)
				xyprintf(3 + 2 * x, 3 + y, "■");
		}
	}
	
	
}

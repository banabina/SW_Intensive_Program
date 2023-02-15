// 테트리스4.c
#include <stdio.h>
#include "xyprintf.h"

// step 4. 블록은 한개가 아니라 여러 개이다. => 3차원 배열 사용.
int main()
{
	int block[2][4][4] = {
		{
			{0, 0, 0, 0},
			{0, 1, 0, 0},
			{1, 1, 1, 0},
			{0, 0, 0, 0},
		},
		{
			{0, 1, 0, 0},
			{0, 1, 0, 0},
			{0, 1, 0, 0},
			{0, 1, 0, 0},
		}
	};

	for (int y = 0; y < 4; ++y)
	{
		for (int x = 0; x < 4; ++x)
		{
			if (block[1][y][x] == 1)
				xyprintf(3 + 2 * x, 3 + y, "■");
		}
	}


}

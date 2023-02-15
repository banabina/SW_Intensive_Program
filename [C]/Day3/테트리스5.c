// 테트리스5.c
#include <stdio.h>
#include "xyprintf.h"
#include "block.h"

// step 5. block.h 파일 사용

int main()
{
	// block[0]: 1번 째 블록의 0도 회전
	// block[1]: 1번 째 블록의 90도 회전
	// block[4]: 2번 째 블록의 0도 회전

	int block_no = 3;
	int rotate = 1;		// 0: 0도, 1: 90도, 2: 180도, 3: 270도

	for (int y = 0; y < 4; ++y)
	{
		for (int x = 0; x < 4; ++x)
		{
			if (block[block_no *4 + rotate][y][x] == 1)
				xyprintf(3 + 2 * x, 3 + y, "■");
		}
	}


}

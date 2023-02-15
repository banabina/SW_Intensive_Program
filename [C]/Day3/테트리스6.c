// 테트리스6.c
#include <stdio.h>
#include "xyprintf.h"
#include "block.h"

// step 6. 함수로 분리

void draw_block(int xpos, int ypos, int block_no, int rotate)
{
	// 블록 번호와 rotate를 가지고 3차원 배열에서 첫 번째 인덱스 결정
	int no = block_no * 4 + rotate;

	for (int y = 0; y < 4; ++y)
	{
		for (int x = 0; x < 4; ++x)
		{
			if (block[no][y][x] == 1)
				xyprintf((xpos + x) * 2, ypos + y, "■");
		}
	}
}

int main()
{
	int block_no = 3;
	int rotate = 1;	

	draw_block(0, 1, 0, 0);
	draw_block(6, 6, 1, 0);
	draw_block(12, 10, 3, 0);
}

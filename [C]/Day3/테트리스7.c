// 테트리스7.c
#include <stdio.h>
#include "xyprintf.h"
#include "block.h"

// step 6. erase_block

void draw_block(int xpos, int ypos, int block_no, int rotate);
void erase_block(int xpos, int ypos, int block_no, int rotate);


int main()
{
	int block_no = 3;
	int rotate = 1;

	draw_block(0, 1, 0, 0);
	draw_block(6, 6, 1, 0);
	draw_block(12, 10, 3, 0);
	sleep(3000);
	erase_block(6, 6, 1, 0);
	sleep(3000);
}

void draw_block(int xpos, int ypos, int block_no, int rotate)
{
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

void erase_block(int xpos, int ypos, int block_no, int rotate)
{
	int no = block_no * 4 + rotate;

	for (int y = 0; y < 4; ++y)
	{
		for (int x = 0; x < 4; ++x)
		{
			if (block[no][y][x] == 1)
				xyprintf((xpos + x) * 2, ypos + y, "  ");
		}
	}
}
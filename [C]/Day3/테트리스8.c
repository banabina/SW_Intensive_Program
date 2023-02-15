// 테트리스8.c
#include <stdio.h>
#include "xyprintf.h"
#include "block.h"

// step 7. 블럭 떨어뜨리기.

void draw_block(int xpos, int ypos, int block_no, int rotate);
void erase_block(int xpos, int ypos, int block_no, int rotate);


int main()
{
	int block_no = 3;
	int rotate = 1;
	int xpos = 5;
	int ypos = 0;

	while (1) {
		ypos = 0;
		while (1) {
			draw_block(xpos, ypos, block_no, rotate);
			sleep(300);
			erase_block(xpos, ypos, block_no, rotate);
			++ypos;

			if (ypos == 18) break;
		}
	}
	
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
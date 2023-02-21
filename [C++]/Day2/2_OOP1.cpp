// 3_OOP1 - 57page
#include <iostream>

// 사각형의 면적을 구하는 함수
int getRectArea(int left, int top, int right, int bottom)
{
	return (right - left) * (bottom - top);
}

// 사각형을 그리는 함수
void drawRect(int left, int top, int right, int bottom)
{
	std::cout << "draw rect" << std::endl;
}

int main()
{
	int n1 = getRectArea(1, 1, 10, 10);
	drawRect(1, 1, 10, 10);
}
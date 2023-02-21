// 3_OOP1 - 57page
#include <iostream>

// 객체지향 프로그램의 핵심 1.
// => 프로그램에서 필요한 타입을 먼저 설계하자!

// 프로그램에서 사각형을 자주 다루게 된다면
// "사각형" 이라는 타입을 먼저 설계하자
struct Rect
{
	int left;
	int right;
	int top;
	int bottom;
};

// 사각형의 면적을 구하는 함수
int getRectArea(const Rect& rc)
{
	return (rc.right - rc.left) * (rc.bottom - rc.top);
}

// 사각형을 그리는 함수
void drawRect(const Rect& rc)
{
	std::cout << "draw rect" << std::endl;
}

int main()
{
	Rect rc = { 1, 1, 10, 10 };
	int n1 = getRectArea(rc);
	drawRect(rc);
}
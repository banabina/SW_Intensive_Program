#include <iostream>

class Point
{
	int x;
	int y;
public:
	Point() { x = 0; y = 0; std::cout << "Point()" << std::endl; } // 1
	Point(int a, int b) { x = a; y = b; std::cout << "Point(int, int)" << std::endl; } // 2
};

// Point p1;	  // 디폴트 생성자 호출
// Point p2(0,0); // 인자가 2개인 생성자 호출

class Rect
{
	Point leftTop;
	Point rightBottom;
public:
	Rect()
	{
		std::cout << "Rect()" << std::endl;
	}
};

int main()
{
	Rect rc; // 화면 출력 결과 예측해 보세요

	// Rect 객체 생성 시
	// 1. 멤버의 생성자가 먼저 호출되고
	// 2. Rect 생성자가 호출됨
}

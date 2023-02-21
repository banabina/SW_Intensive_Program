#include <iostream>

// 핵심: 타입을 만들 때 상태를 나타내는 데이터와 상태를 가지고 연산을 수행하는
//		 함수를 묶어서 만들자!

// C 구조체: 함수를 포함할 수 없음
// C++ 구조체: 함수를 포함할 수 있음

// 왜 구조체 안에 함수를 넣는가?
// 1. 함수에 별도의 데이터(Rect)를 보낼 필요 없음
// 2. 다양한 C++ 문법을 활용해서 안전한 타입을 만들 수 있음

struct Rect
{
	// 멤버 데이터
	int left;
	int right;
	int top;
	int bottom;

	// 멤버 함수
	int getArea()
	{
		return (right - left) * (bottom - top);
	}

	void draw()
	{
		std::cout << "draw rect" << std::endl;
	}

};

int main()
{
	Rect rc = { 1, 1, 10, 10 };		// C++ 스타일
	int n1 = rc.getArea();		// 객체지향 스타일
	rc.draw();					// "rc! 그려봐!"
}
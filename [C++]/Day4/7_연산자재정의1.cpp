//  5_연산자재정의 - 182page
#include <iostream>

class Point
{
	int x, y;
public:
	Point(int x = 0, int y = 0) : x(x), y(y) {}

	void print() const 	{ std::cout << x << ", " << y << std::endl;	}
};

int main()
{
	Point p1(1, 1);
	Point p2(2, 2);

	// 다음중 어떤 코드가 보기 좋을 까요 ?
	Point p3 = Add(p1, p2); // 일반 함수로 작성

	Point p4 = p1.Add(p2);  // 멤버 함수로 작성

	Point p5 = p1 + p2;     // 연산자를 사용할 수 있도록!

	// 연산자 재정의 개념
	// 1. 사용자 정의 타입 객체도 +, - 등의 연산자를 사용할 수 있게하자
	// 2. 원리 "+"를 사용하면 약속된 함수를 호출하는 것
}


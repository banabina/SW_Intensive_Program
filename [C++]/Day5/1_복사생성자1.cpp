// 2_복사생성자1.cpp
#include <iostream>

class Point
{
	int x, y;
public:
	Point()             : x(0), y(0) {} // 1
	Point(int a, int b) : x(a), y(b) {} // 2

	// 1. 복사 생성자란?
	// => 자신과 동일한 타입의 객체로 초기화 될때 사용되는 생성자
	// 2. 디폴트 복사생성자
	// => 사용자가 만들지 않으면 컴파일러가 제공
	// 3. 컴파일러가 만드는 복사 생성자 모양
	// => 모든 멤버를 복사해 줌
	Point(const Point& pt) : x(pt.x), y(pt.y) {}
};

int main()
{
	// 아래 4줄에 대해서 생각해 봅시다.
	Point p1;		// 1번 생성자 호출
	// Point p2(1);    // 컴파일 에러
	Point p3(1,2);	// 2번 생성자 호출
	Point p4(p3);   // Point(Point) 모양의 생성자 필요
					// => 복사 생성자
					// => 사용자가 만들지 않으면 컴파일러가 제공

}
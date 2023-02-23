#include <iostream>

class Point
{
	int x, y;
public:
	Point(int x = 0, int y = 0) : x(x), y(y) {}

	void print() const { std::cout << x << ", " << y << std::endl; }

	Point operator+(const Point& pt) const
	{
		std::cout << "member operator+" << std::endl;

		Point temp(x + pt.x, y + pt.y);
		return temp;
	}
};

int main()
{
	Point p1(1, 1);
	Point p2(2, 2);
	Point p3 = p1 + p2; 
	
	// 위 코드는
	// operator+(p1, p2) (일반 함수)또는
	// p1.operator+(p2) (멤버 함수)를 찾게 됨
	Point p4 = p1.operator+(p2);

	/*
	* 1. 멤버와 비멤버를 모두 만들면 에러. 한개만 만들자
	* 2. 멤버가 좋을까? 비멤버가 좋을까?
	*	 멤버가 좋다는 주장: private 접근하기 편함
	*	 비멤버가 좋다는 주장: 멤버로 만들 수 없을 때가 있음
	*/
	int n = 0;
	Point p5 = p1 + p2;
	Point p6 = p1 + n;
	Point p7 = n + p2;		// n.operator+(Point) 인데 n은 primitive. 멤버로 만들 수 없음
							// operator+(int, Point)는 가능

	//연산자 재정의를 지원하는 모든 언어의 원리는 동일
	// 약속된 함수 호출
	// C++: operator+
	// C#: 함수 이름이 +
	// Python: __add__
}
// 189page
#include <iostream>

class Point
{
	int x;
	int y;
public:
	Point(int x = 0, int y = 0) : x(x), y(y) {}
	friend std::ostream& operator<<(std::ostream& os, const Point& pt);
};

std::ostream& operator<<(std::ostream& os, const Point& pt)
{
	os << "<" << pt.x << ", " << pt.y << ">";
	return os;
}

int main()
{
	Point p(1, 2);

	std::cout << p ; // cout.operator<<(Point)가 있으면 됨
					 // => 그런데, 표준인 ostream에 사용자가 멤버함수를 추가할 수 없음
					 // operator<<(cout, p)가 있어도 됨
					 // operator<<(ostream, Point)
					
					
					
}



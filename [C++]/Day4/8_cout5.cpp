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

	std::cout << p ; // cout.operator<<(Point)�� ������ ��
					 // => �׷���, ǥ���� ostream�� ����ڰ� ����Լ��� �߰��� �� ����
					 // operator<<(cout, p)�� �־ ��
					 // operator<<(ostream, Point)
					
					
					
}


#include <iostream>

class Point
{
	int x, y;
public:
	Point(int x = 0, int y = 0) : x(x), y(y) {}

	void print() const { std::cout << x << ", " << y << std::endl; }

	friend Point operator+(const Point& p1, const Point& p2);
};

Point operator+(const Point& p1, const Point& p2)
{
	std::cout << "operator+(p1, p2)" << std::endl;
	Point temp(p1.x + p2.x, p1.y + p2.y);
	return temp;
}

int main()
{
	Point p1(1, 1);
	Point p2(2, 2);
	Point p3 = p1 + p2; // operator+(p1, p2)가 필요
						// 또는 p1.operator+(p2)가 있어도 가능
	p3.print();

	Point p4 = operator+(p1, p2); // 직접 이름으로 호출해도 됨
}


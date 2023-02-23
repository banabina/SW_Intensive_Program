// 예제1     152 page
#include <iostream>
#include <vector>

// 1. 모든 도형을 타입으로 설계하면 편리함
class Rect
{
	int left, top, right, bottom;
public:
	Rect(int l, int t, int r, int b)
		: left(l), top(t), right(r), bottom(b) {}

	void draw() const { std::cout << "draw rect" << std::endl; }
};

class Circle
{
	int left, top, right, bottom;
public:
	Circle(int l, int t, int r, int b)
		: left(l), top(t), right(r), bottom(b) {}

	void draw() const { std::cout << "draw circle" << std::endl; }
};

int main()
{
	const Rect rc(1, 1, 10, 10);
	rc.draw(); // 되야 한다!
}

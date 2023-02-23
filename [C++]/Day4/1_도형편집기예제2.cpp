#include <iostream>
#include <vector>

// 핵심 2. 모든 도형의 공통의 특징을 담은 기반 클래스(Shape)가 있다면 
//		   Shape*로 모든 도형 객체의 주소를 담을 수 있음
class Shape
{
public:
	virtual ~Shape() {} // 모든 기반 클래스는 소멸자가 가상함수여야 함
};

class Rect : public Shape
{
	int left, top, right, bottom;
public:
	Rect(int l, int t, int r, int b)
		: left(l), top(t), right(r), bottom(b) {}

	void draw() const { std::cout << "draw rect" << std::endl; }
};

class Circle : public Shape
{
	int left, top, right, bottom;
public:
	Circle(int l, int t, int r, int b)
		: left(l), top(t), right(r), bottom(b) {}

	void draw() const { std::cout << "draw circle" << std::endl; }
};

int main()
{
	// 사용자가 1을 입력하면 사각형을 만들고
	//			2를 입력하면 원을 만들고 싶음
	int cmd;
	std::cin >> cmd;
	Shape* p = nullptr;

	if (cmd == 1)
	{
		p = new Rect(1, 1, 10, 10);
	}
	else if (cmd == 2)
	{
		p = new Circle(1, 1, 10, 10);
	}
}

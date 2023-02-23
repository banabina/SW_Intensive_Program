#include <iostream>
#include <vector>

// 핵심 3. 모든 파생 클래스(도형)의 공통의 특징이 있다면
//		   반드시 기반 클래스(Shape)에도 있어야 함
//		   문법적 규칙이 아니라, 디자인 규칙!
//		   그래야 Shape*로 모든 도형을 묶어서 관리할 때 해당 기능을 사용할 수 있음

// 핵심 4. 기반 클래스가 가진 멤버 함수 중에서
//		   파생 클래스가 재정의(override)하는 것은
//		   반드시 가상함수 이어야 함

class Shape
{
	int color; // 모든 도형은 색상이 있음
public:
	virtual void draw() const { std::cout << "draw shape" << std::endl; }
	void set_color(int c) { color = c; } // 가상화 할 필요 없음!
	// 파생 클래스가 재정의 할 필요 없음. non-virtual
	// virtual 해도 되지만 virtual은 느림
	virtual int get_area() { return -1; }
	virtual ~Shape() {}
};

class Rect : public Shape
{
	int left, top, right, bottom;
public:
	Rect(int l, int t, int r, int b)
		: left(l), top(t), right(r), bottom(b) {}

	virtual void draw() const override { std::cout << "draw rect" << std::endl; }
};

class Circle : public Shape
{
	int left, top, right, bottom;
public:
	Circle(int l, int t, int r, int b)
		: left(l), top(t), right(r), bottom(b) {}

	virtual void draw() const override { std::cout << "draw circle" << std::endl; }
};

int main()
{
	std::vector<Shape*> v; 
	v.reserve(100);
	int cmd;
	while (1)
	{
		std::cin >> cmd;
		if (cmd == -1)
			break;

		if (cmd == 1)
		{
			v.push_back(new Rect(1, 1, 10, 10));
		}
		else if (cmd == 2)
		{
			v.push_back(new Circle(1, 1, 10, 10));
		}
	}

	for (auto p : v) // 핵심: p는 Shape* 임
	{				 
		p->draw();
	}

}

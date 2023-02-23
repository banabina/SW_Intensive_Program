#include <iostream>
#include <vector>
/*
* 핵심 1. 모든 도형을 타입으로 설계하자
* 핵심 2. 모든 도형의 기반 클래스(Shape)가 있으면 모든 도형을 하나의 컨테이너로 관리할 수 있음
*		  std::vector<Shape*>
* 핵심 3. 모든 도형의 공통 특징(draw)은 반드시 기반 클래스에도 있어야 함
*		  그래야 Shape*로 draw() 호출 가능
* 핵심 4. 기반 클래스 멤버 함수 중에서 파생 클래스가 재정의하게되는 것은 가상함수로 만들어야 함
*/
class Shape
{
	int color; 
public:
	virtual void draw() const { std::cout << "draw shape" << std::endl; }
	void set_color(int c) { color = c; } 
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

	for (auto p : v) 
	{
		p->draw();
	}

}

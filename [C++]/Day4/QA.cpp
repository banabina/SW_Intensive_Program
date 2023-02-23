//QA
#include <iostream>
class Shape
{
public:
	virtual void draw() const
	{
		std::cout << "draw shape" << std::endl;
	}
	virtual ~Shape() {}
};

class Rect : public Shape
{
public:
	// 가상함수 재정의시
	// 1. virtual 있어도 되고 없어도 됨
	// 2. override 있어도 되고 없어도 됨
	// 하지만 override 붙이는 것 권장
	virtual void draw() const
	{
		std::cout << "draw rect" << std::endl;
	}
};


class ChildRect : public Rect
{
public:
	// Rect의 파생 클래스 있어도 규칙은 위와 동일
	virtual void draw() const override
	{
		std::cout << "draw childrect" << std::endl;
	}
};

int main()
{
	Shape* p1 = new Rect;
	p1->draw();
	Shape* p2 = new ChildRect;
	Rect* p3 = new ChildRect;
	p1->draw();
	p2->draw();
	p3->draw();

	delete p1;
	delete p2;
	delete p3;
}
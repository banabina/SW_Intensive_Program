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
	// �����Լ� �����ǽ�
	// 1. virtual �־ �ǰ� ��� ��
	// 2. override �־ �ǰ� ��� ��
	// ������ override ���̴� �� ����
	virtual void draw() const
	{
		std::cout << "draw rect" << std::endl;
	}
};


class ChildRect : public Rect
{
public:
	// Rect�� �Ļ� Ŭ���� �־ ��Ģ�� ���� ����
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
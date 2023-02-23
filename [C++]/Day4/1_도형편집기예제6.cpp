#include <iostream>
#include <vector>

/*
* 객체지향 SW 설계의 5대 원칙
* SRP, OCP, LSP, ISP, DIP => 약자로 SOLID라고 함
* OCP: 개방 폐쇄의 법칙 (Open Close Principle)
* 기능 확장에는 열려 있고 (Open, 클래스가 나중에 추가되어도)
* 코드 수정에는 닫혀 있어야 (Close, 기존 코드는 수정되지 않게)
* 한다는 원칙 (Principle)
* 다형성 기반의 코드는 OCP를 만족하는 좋은 코드
*/

/*
* C언어는 어떻게 구현할까? 가 중심이 됨
* C++은 유지 보수까지 생각한 좋은 디자인을 고민
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

class Triangle : public Shape
{
public:
	virtual void draw() const override { std::cout << "draw triangle" << std::endl; }
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
		else if (cmd == 3)
		{
			v.push_back(new Triangle());
		}
	}

	for (auto p : v)
	{
		p->draw(); // 핵심
	}

}
// p->draw(); <== 이 코드는
// 동일한 표현식(함수 호출)인데, 상황(실제 객체)에 따라 다르게 동작
// 다형성(Polymorphism) 이라고 함
// 객체지향 언어의 3대 특징: 캡슐화, 상속, 다형성
#include <iostream>
#include <vector>

class Shape
{
	int color;
public:
	void set_color(int c) { color = c; }

	// 가상함수: 파생 클래스가 반드시 재정의할 필요 없음
	//			재정의 안하면 기본 구현 제공해줄게
	// 순수 가상함수: 반드시 특정함수를 만들라고 지시
	virtual void draw() const = 0; //{ std::cout << "draw shape" << std::endl; }
	
	// get_area를 
	// 1. 순수 가상함수로 하면 모든 파생클래스는 반드시 재정의해야 함
	// 2. 가상함수로 하고 -1을 반환 한후..
	//	  매뉴얼에 "반환값이 -1"이 나오면 면적구할 수 없음을 의미한다고 작성
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

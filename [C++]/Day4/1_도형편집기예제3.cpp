#include <iostream>
#include <vector>

class Shape
{
public:
	virtual ~Shape() {}
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
	std::vector<Shape*> v; // 핵심: Shape* 타입을 보관하면 모든 도형 객체를 보관가능
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

	for (auto i : v)
	{

	}
	
}

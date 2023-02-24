#include <iostream>

class Point
{
public:
	int x, y;

	Point(int a, int b) { std::cout << "Point()" << std::endl; }
	~Point() { std::cout << "~Point()" << std::endl; }
};
/*
void f1(Point  pt) {} // call by value: 복사본 생성
void f2(Point& pt) {} // call by reference: 복사본 생성 안됨

int main()
{
	Point p(0, 0);
	f1(p);
	f2(p);
}
*/
Point pt(1, 2);

Point foo()		// return by value
{				// pt의 복사본을 만들어서 반환. 리턴용 임시객체
	return pt;
}

Point& boo()		// return by reference
{				
	return pt;
}

int main()
{
	foo().x = 10; // 에러. 리턴용임시객체.x = 10;
	boo().x = 10; // ok. pt.x = 10;
}

// 주의 사항: 지역변수는 절대 reference 반환하면 안됨




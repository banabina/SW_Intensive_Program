#include <iostream>
class Base
{
public:
	virtual void f1() {}
	virtual void f2() {}
	virtual void f3() {}
};

class Derived : public Base
{
	int y;
public:
	void f2() override {}
};

int main()
{
	Base b;
	Derived d;
	
	std::cout << sizeof(b) << std::endl; // 4 + 가상함수 테이블 포인터 크기(4)
	std::cout << sizeof(d) << std::endl; // 4 + 가상함수 테이블 포인터 크기(4)
}
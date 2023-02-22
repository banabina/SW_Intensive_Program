#include <iostream>

class A
{
	int a;
public:
	void foo() { std::cout << "foo" << std::endl; }
};
class B   // 주의 상속관계 아닙니다.
{
	int b;
public:
	void goo() { std::cout << "goo" << std::endl; }
};
int main()
{
	A aaa;
	B* p = &aaa;
	p->goo();  // ?
			
}


#include <iostream>

class Test
{
public:
	// 핵심 1. 동일이름의 함수를 상수 멤버 함수와
	//		   비상수 멤버함수로 동시에 제공가능
	// 의도: 객체가 상수 일때와 상수가 아닐때 다르게 동작하고 싶을 때 사용
	//		=> 자주 사용하지는 않고, 가끔 사용
	void foo()       { std::cout << "foo" << std::endl; }
	void foo() const { std::cout << "foo const" << std::endl; }
};

int main()
{
	// 핵심 2. 
	Test t;		// 상수 객체가 아니면
	t.foo();	// 1. 비 상수 멤버함수를 호출, 1이 없다면 상수 멤버 함수 호출

	const Test ct; // 상수 객체
	ct.foo();	   // 상수 멤버함수(foo() const)만 호출가능
}


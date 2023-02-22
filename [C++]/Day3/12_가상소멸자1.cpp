#include <iostream>
// 페이지 143
class Base
{
public:
	Base()  {  }

	// 핵심: 모든 기반 클래스의 소멸자는 반드시(되도록) 가상함수로 해야 함
	//		 고급 기법으로 가상함수가 아닌데 해결 방법도 있음
	virtual ~Base() {  }
};
class Derived : public Base
{
public:
	Derived()  { std::cout << "Derived()" << std::endl; }
	virtual ~Derived() override { std::cout << "~Derived()" << std::endl; }
};

int main()
{
	//Derived d; // ok. 생성자/소멸자 호출 잘됨
	//Derived* p = new Derived; // 이 순간 생성자 호출
	//delete p;				  // 이 순간 소멸자 호출

	Base* p = new Derived; // 이 순간 생성자 호출
	delete p;			   // 이 순간 소멸자 호출
						   // 즉, 소멸자라는 함수 호출
						   // static 바인딩 또는 dynamic 바인딩해야 함
}
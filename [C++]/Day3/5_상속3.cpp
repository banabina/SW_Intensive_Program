// 상속과 생성자.   135page ~
#include <iostream>

class Base
{
	int x;
public:
	Base()      { std::cout << "Base()"  << std::endl; }
	Base(int a) { std::cout << "Base(int)" << std::endl; }
	~Base()     { std::cout << "~Base()" << std::endl; }
};

class Derived : public Base
{
	int y;
public:
	// 상속에서 생성자 호출의 정확한 원리 - 136 page
	// => 컴파일러가 코드를 추가하는 것

	// 사용자 코드			// 컴파일러가 변경한 코드
	Derived()				// Derived() : Base()
	{
		std::cout << "Derived()" << std::endl;
	} 
	Derived(int a)			// Derived(int a) : Base()
	{ 
		std::cout << "Derived(int)" << std::endl;
	}
	~Derived()      
	{ 
		std::cout << "~Derived()" << std::endl; 

		// ~Base()
	}
};

int main()
{
	//Derived d;	
	Derived d2(5); // call Derived::Derived(5)
}





#include <iostream>

class Car
{
public:
	// 다음중 에러는 ?
	void foo()
	{
		std::cout << this << std::endl; // 1
	}
	// 핵심: static 멤버 함수에서는 this를 사용할 수 없음
	//		 static 멤버 함수는 객체없이 호출 가능
	static void goo() 
	{
		std::cout << this << std::endl; // 2
	}
};

int main()
{
	Car::goo();
}

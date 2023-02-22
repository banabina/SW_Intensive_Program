// 7_가상함수1  144 page ~
#include <iostream>

class Animal
{
public:
	void Cry1() { std::cout << "Animal Cry1" << std::endl; } // 1
};

class Dog : public Animal
{
public:
	// override : 기반 클래스 멤버 함수를 파생클래스가 다시 만드는 것
	// overloading과 헷갈리지 말자
	// => square(int), square(double)
	void Cry1() { std::cout << "Dog Cry" << std::endl; }  // 2
};

int main()
{
	Animal a; a.Cry1(); // Animal Cry1() 호출
	Dog    d; d.Cry1(); // Dog    Cry1() 호출

	Animal* p = &d;		

	p->Cry1(); // Dog Cry1()이 논리적으로 맞음
			   // C++, C#: Animal Cry1
			   // Java, Swift, Python: Animal Cry1
}


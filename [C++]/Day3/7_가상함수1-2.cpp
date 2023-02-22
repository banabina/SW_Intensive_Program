// 7_가상함수1  144 page ~
#include <iostream>

class Animal
{
public:
	// 일반 멤버 함수: static biding 하라는 의미
	void Cry1() { std::cout << "Animal Cry1" << std::endl; } 

	// 가상함수(virtual function): dynamic binding 하라는 의미
	virtual void Cry2() { std::cout << "Animal Cry2" << std::endl; } 
};

class Dog : public Animal
{
public:
	void Cry1() { std::cout << "Dog Cry" << std::endl; }  
	virtual void Cry2() { std::cout << "Dog Cry2" << std::endl; }
};

int main()
{
	Animal a;
	Dog    d;

	Animal* p = &d;
	p->Cry1();	// Animal Cry1, 컴파일 시 포인터 타입으로 호출 결정
	p->Cry2();	// Dog	  Cry2, 실행 시 메모리르 조사해서 호출 결정
}

// godbolt.org
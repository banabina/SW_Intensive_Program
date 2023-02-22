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
	void Cry1() { std::cout << "Dog Cry" << std::endl; }  // 2
};

int main()
{
	Animal a; a.Cry1(); 
	Dog    d; d.Cry1(); 

	Animal* p = &d;
	int n;
	std::cin >> n;
	if (n == 1) 
		p = &a;
	// 위 처럼 실행시간에 p가 가리키는 객체가 변경될 수 있음
	// 핵심: 컴파일 시간에는 p가 가리키는 객체가 어떤 객체인지 알 수 없음

	p->Cry1(); 
}

// 161 페이지 함수 바인딩

// p->Cry1() 의 코드를 어느 함수로 연결할 것인가? - 함수 바인딩 문제

// 1. static binding: 컴파일 시간에 컴파일러가 함수 호출 결정
// 컴파일 시간에는 p가 가리키는 객체가 어떤 객체인지 알 수 없음
// 컴파일러는 p의 타입만 알수 있음 "Animal*"
// 따라서, 컴파일러가 함수 호출을 결정하면 p의 타입 (Animal*)로 호출 결정 => Animal Cry1() 호출
// 빠르지만 비 논리적
// C++의 기본 정책
// (static: 컴파일 시간에 이루어지는 걸 내포)

// 2. dynamic binding: 
//		컴파일 시에 p가 가리키는 메모리를 조사하는 기계어 코드 생성
//		실행할 때 메모리를 조사해서 함수 호출을 결정
//		p가 Dog를 가리키면 Dog Cry 호출
// 느리지만 논리적
// java, swift, python

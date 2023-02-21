#include <iostream>

// 방법 3.


class Car
{
	int color;
	int speed;
	static int cnt;	// private 이므로 Car만 사용가능한 전역변수로 생각

public:
	Car() { ++cnt; }
	~Car() { --cnt; }

	//int get_count() { return cnt; } 
	// => 일반 멤버 함수
	// => 객체가 있어야 호출 가능 "c1.get_count()" 처럼 사용해야 함
	
	static int get_count() { return cnt; }
	// => static 멤버 함수
	// => 객체가 없어도 호출 가능
	// => "Car::get_count()" 로 호출
	// => "c1.get_count()"로 호출 가능, 권장 안함
};

int Car::cnt = 0; // private 이라도, 외부 초기화는 가능함

int main()
{
	std::cout << Car::get_count() << std::endl;

	Car c1;
	Car c2;
	Car c3;

	std::cout << Car::get_count() << std::endl;
}

// 115 page 아래
// static 멤버 데이터:
// 1. 객체가 없어도 메모리에 생성됨
// 2. 모든 객체가 공유
// 
// static 멤버 함수:
// 1. 객체 없이 호출 가능


class Car
{
	int speed;		// (인스턴스, instance) 멤버 데이터
	static int cnt; // 정적 멤버 데이터
					// 메모리 위치: static 멤버 데이터. 전역변수와 동일
};

// C++: 멤버 데이터, 멤버 함수
// java, C#: 필드,	메소드
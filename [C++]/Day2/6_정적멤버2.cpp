#include <iostream>

// 방법 2. 전역변수 사용
// => 객체 갯수에 상관없이 오직 한개만 메모리에 존재하고 누구나 접근 가능

// 문제점
// => 전역변수는 누구나 접근 가능
// => 안전하지 않음
// => 접근지정자(private)으로 보호 할 수 없을까?

int cnt = 0;

class Car
{
	int color;
	int speed;
public:
	Car() { ++cnt; }
	~Car() { --cnt; }
};

int main()
{
	Car c1;
	Car c2;

	// 자동차 객체를 몇 개 만들었는지 갯수를 파악하고 싶음

	std::cout << cnt << std::endl;  // 2

	cnt = -10; // 단점: 전역변수는 누구나 접근가능함
}


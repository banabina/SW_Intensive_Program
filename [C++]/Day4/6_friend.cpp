#include <iostream>

class Bike
{
	int gear = 0;
public:
	// friend 함수
	// => 멤버 함수는 아니지만 private에 접근 가능

	// QA1. 멤버 함수로 하면 되지 않나요?
	// => 멤버 함수로 할 수 없는 경우가 있음 - 연산자 재정의에서

	// QA2. get_gear(), set_gear() 등을 만들면 되지 않나요?
	// => 2개 함수를 만드는 것은 모두에게 접근을 허용하는 것!
	// => friend는 한개의 함수에만 접근 가능
	friend void fixBike();
};

void fixBike()
{
	Bike b;
	b.gear = 10;
}

int main()
{
	fixBike();
}
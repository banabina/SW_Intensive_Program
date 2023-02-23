#include <iostream>

int main()
{
	std::cout << "A" << std::endl;

	// cout도 객체이므로 멤버 함수가 있음
	// => 자주 사용하지는 않음
	// => 단 cin의 멤버함수는 가끔 사용함
	std::cout.flush(); // fflush(stdout)
}
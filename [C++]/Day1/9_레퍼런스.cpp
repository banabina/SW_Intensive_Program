// 1_레퍼런스.cpp    41 page

#include <iostream>

int main()
{
	int n1 = 10;
	
	int* p1 = &n1;

	int& r1 = n1; // n1 변수에 또 다른 이름 r1을 부여. alias

	r1 = 30;

	std::cout << n1  << std::endl; // 30
	
	std::cout << &r1 << std::endl;
	std::cout << &n1 << std::endl; // 위와 동일한 주소

	// 주의 사항 정리
	// 1. & 연산자에 대해
	int* p = &n1; // 주소 연산자의 의미
				  // n1 변수의 주소 구하기
	int& r = n1;  // reference 만들 때 사용하는 연산자

	// 2. 포인터는 주소로 초기화, 레퍼런스는 변수 명으로 초기화
	// 위 코드 참고.
}




// 5_반복자1
#include <iostream>
#include <vector>
#include <list>

int main()
{
	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };

	// 배열의 시작 주소를 알면 모든 요소를 열거할수 있습니다
	int* p1 = x;


	std::list<int> s = { 1,2,3,4,5,6,7,8,9,10 };

	// 반복자 (iterator): 컨테이너의 모든 요소를 열거할 때 사용하는 객체
	// C++에서는 포인터처럼 사용할 수 있도록 연산자 재정의되어 있음
	auto p2 = s.begin();

	++p2; // p2.operator++() 함수가 호출됨
	std::cout << *p2 << std::endl; // 2

}
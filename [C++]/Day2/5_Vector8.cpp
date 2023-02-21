#include <iostream>

// 객체지향 핵심: 필요한 타입을 먼저 만들어라

// 1. 개발자가 필요한 타입을 만들 수도 있고
// 2. 자주 사용되는 유용한 타입은 이미 C++ 표준에 만들어져 있음
// => STL 이라 함
// => Standard Template Library
#include <vector> // class vector{};
#include <string> // class string{};

int main()
{
	int x[5] = { 1, 2, 3, 4, 5 };
	x[0] = 3;
	// 1. 배열은 생성 후에 크기 변경이 안됨
	//	  vector는 크기 변경이 가능
	std::vector<int> v1 = { 1,2,3,4,5 };
	v1[0] = 3;		// v1.operator[](0) = 3의 원리 (4일차)
	v1.resize(10);

	// 2. 배열은 멤버 함수가 없지만
	//	  vector는 유용한 멤버함수가 많음
	std::vector<int> v2; // 크기가 0인 vector

	v2.push_back(5);
	v2.push_back(3);
	std::cout << v2.size() << std::endl;	// 2
}

// C++을 배우는 것
// 1. vector 같은 타입을 만드는 법을 배우는 것		- class 문법
// 2. vecctor 같은 타입을 사용하는 것을 배우는 것
#include <iostream>
#include "vector.h"

// 클래스를 만드는 2가지 방법
// 1. 클래스 선언에 멤버 함수 구현까지 포함하는 방법
// 2. 클래스 선언에는 멤버함수를 선언만하고
//    멤버 함수의 구현은 별도의 소스 파일에 작성

int main()
{
	vector v(4);

	v.set_at(2, 3);

	v.resize(8);

	int n = v.get_at(2);

	std::cout << n << std::endl; // 3

}
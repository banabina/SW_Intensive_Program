#include <iostream>
#include "Car.h"

// 핵심: 클래스 관련된 각 문법이 
//		 헤더와 소스로 분리되어 작성될 때
//		 어떻게 표기되는지를 알야아 함 - 꽤 복잡함

// C++
// 1. 클래스 안에 멤버함수 구현을 포함해도 되고
// 2. 선언과 구현 파일로 분리해서 작업해도 됨

// java, C#, swift 등의 대부분의 다른 언어
//  => 클래스 안에 멤버함수를 포함해서 작성

int main()
{
	std::cout << Car::get_count() << std::endl; // 0

	Car c1;
	Car c2;

	std::cout << Car::get_count() << std::endl; // 2

}

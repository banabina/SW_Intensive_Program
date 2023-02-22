#include "Point.h"
#include <iostream>
// 핵심 2. 함수 인자의 디폴트 값은 선언부에만 표기해야 함
// 핵심 3. 초기화 리스트 코드는 구현부에 작성
Point::Point(int a/*=0*/, int b/*=0*/) : x(a), y(b) {}

void Point::set(int a, int b)
{
	x = a; y = b;
}

void Point::print() const
{
	std::cout << x << ", " << y << std::endl;
}

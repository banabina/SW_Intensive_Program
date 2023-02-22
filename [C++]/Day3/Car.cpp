#include "Car.h"
#include <iostream>
// 핵심 2. static 멤버 데이터의 외부 선언은 헤더가 아닌 소스 쪽에 포함되어야 함
//		   Car.cpp에 포함
int Car::cnt = 0;

Car::Car() { ++cnt; }
Car::~Car() { --cnt; }

void Car::go() { std::cout << "Car go" << std::endl; }

int Car::get_count() { return cnt; }

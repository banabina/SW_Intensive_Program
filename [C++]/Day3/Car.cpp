#include "Car.h"
#include <iostream>
// �ٽ� 2. static ��� �������� �ܺ� ������ ����� �ƴ� �ҽ� �ʿ� ���ԵǾ�� ��
//		   Car.cpp�� ����
int Car::cnt = 0;

Car::Car() { ++cnt; }
Car::~Car() { --cnt; }

void Car::go() { std::cout << "Car go" << std::endl; }

int Car::get_count() { return cnt; }
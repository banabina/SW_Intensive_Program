#include "Point.h"
#include <iostream>
// �ٽ� 2. �Լ� ������ ����Ʈ ���� ����ο��� ǥ���ؾ� ��
// �ٽ� 3. �ʱ�ȭ ����Ʈ �ڵ�� �����ο� �ۼ�
Point::Point(int a/*=0*/, int b/*=0*/) : x(a), y(b) {}

void Point::set(int a, int b)
{
	x = a; y = b;
}

void Point::print() const
{
	std::cout << x << ", " << y << std::endl;
}
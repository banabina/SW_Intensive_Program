#include <iostream>

int main()
{
	std::cout << "A" << std::endl;

	// cout�� ��ü�̹Ƿ� ��� �Լ��� ����
	// => ���� ��������� ����
	// => �� cin�� ����Լ��� ���� �����
	std::cout.flush(); // fflush(stdout)
}
#include <iostream>

int main()
{
	// cin�� �Է� ���ۿ��� ���� ���� ��
	int n = 0;

	std::cin >> n; // �� ���� 'a'�� �Է����� ��

	std::cout << n << std::endl;
	// ���: 0 �Է� ����!

	if (std::cin.fail())
		std::cout << "�Է� ����" << std::endl;
}
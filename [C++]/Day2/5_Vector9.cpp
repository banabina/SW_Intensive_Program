#include <iostream>
#include <vector>

int main()
{
	std::vector<int> v;
	int n = 0;
	while (1)
	{
		std::cin >> n;

		if (n == -1)
			break;
		v.push_back(n);
	}
	std::cout << "�Է� ���� ��: " << v.size() << std::endl;

	// vector�� ��� ��� ��ȸ�� ���ο� for ������ ����
	for (auto n : v)
		std::cout << n << " ";
}
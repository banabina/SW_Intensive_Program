#include <iostream>
#include "vector.h"

int main()
{
	// ����ڰ� -1�� �Է��Ҷ� ���� ��� �Է� �ް� �ͽ��ϴ�.
	// ��, �Էµ� ��� ���� �����Ǿ� �־�� �մϴ�.

	vector v(4);

	int cnt = 0;

	int n = 0;

	while (1)
	{
		std::cin >> n;
	
		if (n == -1)
			break;

		v.set_at(cnt, n);
		++cnt;
		if (cnt == v.size())
		{
			v.resize(cnt + 4);	// ũ�� �����ϴ� �ڵ带 �ٽ� �ۼ��� �ʿ� ����
		}
	}

	std::cout << "�Էµ� ����" << cnt << std::endl;
	std::cout << "vector ũ��" << v.size() << std::endl;

	for (int i = 0; i < cnt; ++i)
		std::cout << v.get_at(i) << std::endl;
}
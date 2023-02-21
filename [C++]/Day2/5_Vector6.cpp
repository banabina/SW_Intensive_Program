#include <iostream>
#include "vector.h"

int main()
{
	// 사용자가 -1을 입력할때 까지 계속 입력 받고 싶습니다.
	// 단, 입력된 모든 값은 보관되어 있어야 합니다.

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
			v.resize(cnt + 4);	// 크기 변경하는 코드를 다시 작성할 필요 없음
		}
	}

	std::cout << "입력된 갯수" << cnt << std::endl;
	std::cout << "vector 크기" << v.size() << std::endl;

	for (int i = 0; i < cnt; ++i)
		std::cout << v.get_at(i) << std::endl;
}
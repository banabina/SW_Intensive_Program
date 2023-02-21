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
	std::cout << "입력 받은 수: " << v.size() << std::endl;

	// vector의 모든 요소 순회는 새로운 for 문으로 가능
	for (auto n : v)
		std::cout << n << " ";
}
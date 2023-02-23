#include <iostream>

int main()
{
	// cin도 입력 버퍼에서 꺼내 오게 됨
	int n = 0;

	std::cin >> n; // 이 순간 'a'를 입력했을 때

	std::cout << n << std::endl;
	// 결과: 0 입력 실패!

	if (std::cin.fail())
		std::cout << "입력 실패" << std::endl;
}
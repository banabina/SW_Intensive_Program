#include <iostream>

int main()
{
	int n = 0;

	while (1)
	{
		std::cin >> n;

		if (std::cin.fail())
		{
			std::cout << "입력 실패" << std::endl;

			std::cin.clear(); // 상태 비트를 reset
			std::cin.ignore(); // 입력 버퍼를 비우고 다시 시도해야 함
			continue;
		}
		break;
	}
}
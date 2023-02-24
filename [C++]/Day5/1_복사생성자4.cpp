#include <vector>
#include <iostream>

int main()
{
	std::vector<int> v1 = { 1,2,3,4,5 };
	std::vector<int> v2 = v1; // 복사 생성자 호출
							  // 깊은 복사로 구현되어 있음

	std::cout << v1.size() << std::endl; // 5
	std::cout << v2.size() << std::endl; // 5

	std::vector<int> v3 = { 1,2,3,4,5 };
	std::vector<int> v4 = std::move(v3);  // C++11에서 도입된 이동의 개념
							  
	std::cout << v3.size() << std::endl; // 5
	std::cout << v4.size() << std::endl; // 5
}
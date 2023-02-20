#include <iostream>

// 반환값을 채우기가 어려움
// 그래서 "decltype"을 만들었음
template<typename T1, typename T2>
? Add(T1 a, T2 b)
{
	return a + b;
}

int main()
{
	// 정확한 표기법
	std::cout << Add<int, double>(1, 2.2) << std::endl;

}


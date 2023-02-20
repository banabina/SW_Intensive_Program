#include <iostream>

/*
template<typename T1, typename T2>
decltype(a + b) Add(T1 a, T2 b)	// error. a, b를 선언 전에 사용
{
	return a + b;
}
*/

template<typename T1, typename T2>
auto Add(T1 a, T2 b) -> decltype(a + b)
{
	return a + b;
}

int main()
{
	// 정확한 표기법
	std::cout << Add<int, double>(1, 2.2) << std::endl;

	/*
	a = 10; // error
	int a = 0;
	a = 10;
	*/
}


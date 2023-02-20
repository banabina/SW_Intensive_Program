#include <iostream>

template<typename T>
T Add(T a, T b)
{
	return a + b;
}

int main()
{
	// 정확한 표기법
	std::cout << Add<int>(1, 2) << std::endl;

	// 하지만 타입인자 생략도 가능. 대부분 이렇게 사용.
	std::cout << Add(1, 2) << std::endl;
	std::cout << Add(1.1, 2.2) << std::endl;

	// 아래 처럼 하면 컴파일러가 T의 타입을 결정할 수 없음
	// 그래서 error
	std::cout << Add(1, 2.2) << std::endl;

	// 아래 처럼 알려주면 됨
	std::cout << Add<double>(1, 2.2) << std::endl;

	// 하지만
	// 1. 타입을 매번 지정하면 불편하고
	// 2. 1, 2가 항상 같은 타입이라는 단점이 있음
}


#include <iostream>
#include <algorithm>

// Swap를 만들어 봅시다.
// 1. C 버전
// C언어에서의 swap은 아래 코드가 전형적인 코드
void Swap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

// 2. C++ 버전
// 1. 포인터 대신 reference 문법으로 
// 2. 함수가 아닌 함수를 생성하는 틀인 템플릿 사용
// 3. 인라인 치환으로 성능 향상
// 4. namespace 안에 넣어서 이름 충돌 방지

namespace Utils
{
	template<typename T>
	inline void swap(T& a, T& b)
	{
		T tmp = a;
		a = b;
		b = tmp;
	}
}
int main()
{
	int x = 4, y = 3;
	//Swap(&x, &y);
	// Utils::swap(x, y);

	std::swap(x, y); // 이미 C++ 표준에 template 버전의 swap이 있음
					 // 원리는 우리 코드와 거의 유사.
					 // <algorithm> 헤더 필요

	std::cout << x << std::endl;
	std::cout << y << std::endl;
	int& ii = x;
	ii = y;
}

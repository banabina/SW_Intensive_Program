#include <cstdio>		// C 스타일 입출력
#include <iostream>		// C++의 입출력 객체를 사용하기 위해

int main()
{
	int n = 10;

	// C style 입출력
	printf("n = %d\n", n); // C style
	// scanf("%d", &n);	   // 입력

	// C++ style
	std::cout << "n = " << n << std::endl; // std::endl: 개행

	// printf: 함수
	// std::cout: 객체. 지금은 사용법만 익히자. 금요일날 만드는 방법을 배움

	// 표준 입력
	scanf_s("%d ", &n); // C
	std::cin >> n;		// C++, &n 아님. n임.

	// 참고: C++23부터 아래 처럼 함
	// std::println("{0} {1}", 10, n);
}

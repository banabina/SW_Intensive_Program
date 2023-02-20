// 1_namespace3.cpp - 9page 내용
// C 언어 헤더: .h로 되어 있음
// C++언어 헤더: .h가 없음
#include <algorithm>

// 핵심: C++ 표준의 모든 함수는 "std"라는 이름 공간안에 있음

int main()
{
	// int n = min(3, 2); // C++ 표준 함수. algorithm 헤더 필요
	int n = std::min(3, 2); // ok.
}

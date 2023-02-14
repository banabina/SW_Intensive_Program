#include <stdio.h>

// 핵심: 변수와 상수
int main()
{
	int n = 10; // 변수 입니다. 값 변경 가능
	const int c = 10; // 상수 입니다. 값 변경 안됨

	n = 20; // ok
	c = 20; // error
}
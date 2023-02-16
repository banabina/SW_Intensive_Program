#include <stdio.h>

int main()
{
	// 1. 모든 변수는 타입이 있음
	//	  선언문에서 초기값과 변수 이름을 제외하면 타입만 남음

	int n;	  // 변수 이름: n 타입: int
	double d; // 변수 이름: d 타입: double
	int x[3]; // 변수 이름: x 타입: int[3]
								// => 배열 타입이라고 함
	// 2. 모든 변수 이름 앞에 &를 붙이면 변수 주소가 나옴
	printf("%p\n", &n);
	printf("%p\n", &d);
	printf("%p\n", &x);
	// 핵심 배열의 주소는 &x
}
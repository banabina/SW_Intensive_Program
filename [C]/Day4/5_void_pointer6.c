#include <stdio.h>

// 핵심 1. 함수 인자를 void*로 받으면 모든 타입의 주소를 받을 수 있음

// 2. void*는 *p 연산이 안됨. 다른 타입(가장 작은 타입)의 포인터로 변경

// 3. 변수의 크기를 전달해서 1바이트씩 교환하는 것을 변수 크기 만큼 반복.

// 아래 코드가 모든 타입을 swap 하는 함수
// => "Generic(일반화된, 모든 타입에 대해 동작) Swap" 이라 부름
void swap(void* p1, void* p2, int sz)
{
	char* p3 = (char*)p1;
	char* p4 = (char*)p2;

	char temp = 0;
	for (int i = 0; i < sz; ++i)
	{
		temp = *(p3 + i);
		*(p3 + i) = *(p4 + i);
		*(p4 + i) = temp;
	}
}

int main()
{
	double x = 2.1;
	double y = 3.4;

	swap(&x, &y, sizeof x);

	printf("%lf\n", x);
	printf("%lf\n", y);

}
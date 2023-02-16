#include <stdio.h>

int main()
{
	int n = 0;

	void* p1 = &n;
	void* p2 = &n;
	// 핵심 1. void*는 상등연산 (==, !=)만 가능함
	*p1 = 20; // *p1를 할 수 있으려면, 주소와 타입 정보(메모리 크기)가 필요
			  // error. void*는 주소만 있다. 타입 정보가 없음
	p1 + 1;	  // error. 대상체의 크기만큼 증가해야 하는데 타입 정보가 없음

	if (p1 == p2) {} // ok.
}
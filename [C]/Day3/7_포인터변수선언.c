#include <stdio.h>

int main()
{
	int n1, n2; // n1: int 타입, n2: int 타입

	int* p; // C언어: *를 변수 쪽에 붙이자고 주장
	int* p; // C++: *를 타입쪽에 붙이자고 주장

	// C언어의 주장: 아래처럼 사용하면 헷갈림.
	int* p1, p2; // p1: int 포인터 타입, p2: int 타입
	int *p1, p2; // 보기 좋다.

	// C++ 주장: 왜 한줄로 하니? 그냥 2줄로 해!
	int* p1;
	int p2;
}
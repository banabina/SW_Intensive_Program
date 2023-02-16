#include <stdio.h>
#include <stdlib.h>

void foo(int(*p4)[2])
{

}

int main()
{
	int x[2] = { 1, 2 };

	int(*p1)[3] = &x; // 배열의 주소
	int* p2 = x;	  // 1번째 요소의 주소

	int y[3][2] = { {1,2} ,{3,4}, {5,6} };

	int(*p3)[3][2] = &y;
	int(*p4)[2] = y;

	foo(y);

	// 동적 메모리를 1차 배열로 사용하겠다
	int* pp1 = malloc(6 * sizeof(int));

	// 동적 메모리를 [3][2] 배열로 사용
	int(*pp2)[2] = malloc(6 * sizeof(int))
}
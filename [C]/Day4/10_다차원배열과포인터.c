#include <stdio.h>

void foo(int** p)
{
	p[0][0] = 10;
}

int main()
{
	int x[3][2] = { 1,2,3,4,5,6 };
	foo(x); // 위에서 받아 보세요

	// ? p = malloc(6); // 동적할당된 메모리를 
	// p[0][0] = 10;	// 2차원 배열 처럼 사용하고 싶다면?
	int* p = (int*)malloc(sizeof(int) * 6);
}
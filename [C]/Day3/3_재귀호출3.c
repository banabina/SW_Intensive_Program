// 3_재귀호출3.c
//3_재귀호출2.c
// 3_재귀호출2.c
#include <stdio.h>

void print_hellO(int n)
{
	if (n == 0) return;

	print_hellO(n - 1);  // 먼저 호출하고 돌아올 때 아래 printf 수행
						 // 1, 2, 3

	printf("hello %d\n", n);
}

int main()
{
	print_hellO(3);
}
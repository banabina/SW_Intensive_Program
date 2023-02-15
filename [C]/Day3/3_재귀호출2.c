//3_¿Á±Õ»£√‚2.c
// 3_¿Á±Õ»£√‚2.c
#include <stdio.h>

void print_hellO(int n)
{
	if (n == 0) return;

	printf("hello %d\n", n);

	print_hellO(n - 1);
}

int main()
{
	print_hellO(3);
}
#include <stdio.h>

int array_sum(int* p, int sz)
{
	int ret = 0;
	for (int i = 0; i < sz; ++i)
		ret += *(p + i);
	return ret;
}

int main()
{
	int x[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int s = array_sum(x, 10);
	printf("%d\n", s);
}
#include <stdio.h>

void swap(int* px, int* py)
{
	int temp = *px;
	*px = *py;
	*py = temp;
}

int main()
{
	int x = 10;
	int y = 20;

	/*
	// x, y 값 서로 교환해보기
	int temp = x;
	x = y;
	y = temp;
	*/
	swap(&x, &y);

	printf("%d\n", x);
	printf("%d\n", y);
}
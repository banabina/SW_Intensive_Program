#include <stdio.h>

// 함수의 다양한 모양

// 1. 인자도 없고, 반환 값도 없는 경우
void f1()
{
	printf("f1\n");
}

// 2. 반환 값이 정수인 함수
int f2()
{
	printf("f2\n");
	return 10;
}

// 3. 인자와 반환 값이 모두 있는 경우
int f3(int a, int b)
{
	printf("f3\n");
	return a + b;
}


int main()
{
	f1();

	int ret1 = f2();
	printf("%d\n", ret1);

	int ret2 = f3(10, 3);
	printf("%d\n", ret2);
}
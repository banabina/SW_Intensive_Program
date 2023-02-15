// 3_재귀호출4.c
#include <stdio.h>

int factorial(int n)
{
	if (n == 1) return 1; // 재귀의 종료! 모든 재귀 호출은 반드시 종료조건 필요
	return n * factorial(n - 1);
}
// 왜 재귀 호출을 사용하나요?
// => 일부 알고리즘 문제해결 시 재귀 호출을 사용하면 편리함
// => 그런데, 재귀 호출로 만든 코드는 루프로도 만들수 있음

int factorial_loop(int n)
{
	int ret = 1;
	for (int i = 1; i <= n; ++i)
	{
		ret = ret * i;
	}
	return ret;
}

int main()
{
	int ret = factorial(5);
	printf("%d\n", ret);
	printf("%d\n", factorial_loop(5));
}
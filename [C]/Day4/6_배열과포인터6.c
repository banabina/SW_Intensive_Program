#include <stdio.h>

// void foo(int x[7]) // 7개 짜리 배열 아님. 포인터임
//void foo(int* x)	  // 이 코드가 오히려 가독성이 좋음

// 배열을 함수 인자로 받을 때는, 1번째 요소 주소와 갯수를받는 것이 관례
void foo(int* p, int sz)
{
	for (int i = 0; i < sz; ++i)
	{
		printf("%d\n", p[i]);
	}
}

int main()
{
	int x[5] = { 1, 2, 3, 4, 5 };
	int y[3] = { 1, 2, 3 };

	// foo의 인자는 int* 이므로 x, y 모두 전달 가능함
	foo(x, 5);
	foo(y, 3);
}
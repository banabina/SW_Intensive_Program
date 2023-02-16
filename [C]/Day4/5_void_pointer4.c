#include <stdio.h>

// 인자로 받은 변수 값을 교환(swap)하는 함수
// 아래 처럼 인자를 값으로 받으면 (call by value)
// main 함수에서 만든 변수 (x, y)의 값을 변경할 수 없음

void swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}

int main()
{
	int x = 10;
	int y = 20;

	swap(x, y);
	printf("%d\n", x);
	printf("%d\n", y);

}
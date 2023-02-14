#include <stdio.h>

// 함수의 다양한 모양

// 1. 인자도 없고, 반환 값도 없는 경우
void f1()			// 정확한 표기법: void f1(void)
{					// 인자의 void는 생략 가능. 대부분의 다른 언어는 인자 void 사용 안함.
	printf("f1\n");

	// 리턴 값이 없는 경우
	return; // 이렇게 해도 되고, return 자체를 생략해도 됨
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

	f2(); // 리턴 값이 있지만, 받지 않아도 됨. 필요 없다는 의미

	int ret2 = f3(10, 3);
	printf("%d\n", ret2);
}
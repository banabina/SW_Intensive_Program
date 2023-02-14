#include <stdio.h>

// 모든 C 프로그램은 main 함수의 첫 번째 줄 부터 순차적으로 실행됨
// 실행 순서를 변경하려면 제어문 사용
// 조건문: if, switch 등 2개
// 반복문: while, do-while, for 등 3개

int main()
{
	int age = 20;
	if (age > 18)
	{
		printf("성인\n");
	}
	else
	{
		printf("성인 아님\n");
	}
	printf("이 부분은 항상 실행됨\n");
}
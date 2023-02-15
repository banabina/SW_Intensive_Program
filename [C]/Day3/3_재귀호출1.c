// 3_재귀호출.c
#include <stdio.h>

// 재귀 호출 (recursive call): 함수가 자신을 다시 호출하는 것
//			반드시 끝나는 조건이 있어야 함
//			끝나는 조건이 없이 계속 호출되면 메모리 부족으로 비정상 종료됨

// 참고) 함수 호출 시 돌아올 주소를 알려주기 위해 "메모리를 사용" 함 (스택 메모리)

void print_hellO()
{
	printf("hello\n");

	print_hellO();
}

int main()
{
	print_hellO();
}
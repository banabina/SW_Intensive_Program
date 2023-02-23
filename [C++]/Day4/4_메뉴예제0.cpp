#include <iostream>

// C 언어가 바라보는 프로그램은 절차 지향적 프로그램 (Procedure program)
// 1. main 함수 1번째 줄부터 순차적으로 실행되는 실행 흐름
// 2. 실행 흐름을 변경하려면 반복문 또는 조건문 사용
// 3.기능별로 분리하려면 함수 사용

// 장점: 빠르고 이해하기 쉬움
// 단점: 유지보수가 어렵고, 새로운 기능추가가 어려움

// 새로운 메뉴를 추가하려면 아래 코드에서 2곳 추가
// 하위 메뉴가 있다면? (ex 김밥의 종류)

int main()
{
	printf("1. 김밥\n");
	printf("2. 라면\n");
	printf("3. 우동\n");
	printf("메뉴를 선택 하세요 >> ");

	int cmd;
	scanf("%d", &cmd);

	switch (cmd)
	{
	case 1: break;
	case 2: break;
	case 3: break;
	}	
}

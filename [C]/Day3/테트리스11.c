#include <stdio.h>
#include <conio.h>

int main()
{
	int n = 0;

	// 사용자 입력 1. scanf_s => 엔터 키를 눌러야 입력됨
	// scanf_s("%d", &n);

	// 사용자 입력 2. 
	int n1 = _getch(); // conio.h 필요. 엔터 키 입력 안해도 됨
	//n1 = _getch();
	printf("입력된 키보드: %d\n", n1);
	
}
/*
	* 위: 72
	* 아래: 80
	* 왼: 75
	* 오른: 77
	* _getch(): enter 없이도, 키보드 누르면 바로 번호 반환 (아스키 코드)
	* 특수키: 기능키(F1, F2), 화살표키
	*   => 224가 먼저 나오고, 해당하는 키보드 번호가 발생
	*   => _getch()를 2번 사용
*/
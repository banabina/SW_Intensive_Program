#include <stdio.h>


// 출력: printf, 입력: scanf 또는 scanf_s 사용 (scanf_s 권장)
int main()
{
	// 사용자에게 값을 입력 받으려면
	// 1. 입력된 값을 보관할 변수 선언
	int n = 0;

	// 2. scanf 함수를 사용해서 입력
	scanf_s("%d", &n);  // 핵심: 반드시 주소를 전달해야 함
						// 이유는 포인터 개념 배울 때

	printf("%d", n);
}
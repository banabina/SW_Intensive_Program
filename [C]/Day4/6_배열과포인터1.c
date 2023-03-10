#include <stdio.h>

int main()
{
	int x[5] = { 1, 2, 3, 4, 5 };
	// 1. 배열의 1번째 요소의 주소만 포인터 변수에 담으면 
	//	  배열의 모든 항목에 접근 가능
	int* p = &x[0];

	*(p + 2) = 10;

	printf("%d\n", x[2]); // 10

	// 2. 포인터의 배열 연산 사용 가능함
	p[2] = 20;
	printf("%d\n", x[2]);  // 20
	
	// 3. 배열의 이름도 * 연산 됨
	//	  배열을 포인터처럼 사용 가능
	// => 배열의 이름은 배열의 1번째 요소의 주소로 변환됨
	*(x + 2) = 30; // x[2] = 30과 동일

	// 4. 배열과 포인터의 차이점
	// 포인터: 변수 자체를 변경 가능. sizeof() 했을때 32 비트는 무조건 4
	// 배열: 배열이름 자체는 변경안됨. sizeof() 했을 때 메모리 크기
}
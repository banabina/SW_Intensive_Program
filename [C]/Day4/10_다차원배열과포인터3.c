#include <stdio.h>

int main()
{
	int n;	  
	double d; 
	int x[3]; 

	// n의 주소를 담는 포인터 변수는
	// => n과 동일한 타입의 변수를 선언하고
	// => 변수이름 앞에 *를 붙이면 됨

	int* p1 = &n;
	double* p2 = &d;
	//int* p3[3] = &x;		// 연산자 우선순위가 * 보다 [ 가 높음
							// 배열로 해석
	// 아래 코드가 int[3] 배열을 가리키는 포인터
	int (*p3)[3] = &x;
	
}
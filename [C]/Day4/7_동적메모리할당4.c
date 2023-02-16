#include <stdio.h>
#include <stdlib.h>

int main()
{ 
	int n = 0;

	// 1. 모든 주소는 void*에 경고(에러) 없이 들어갈 수 있음
	void* p1 = &n;  // ok. 항상 가능
 	// int* p2 = p1;   // void* => 다른 타입 *
					// C++ 에러. C는 가능하짐나 환경에 따라 경고
	int* p2 = (int*)p1; // ok

	// 2. 아래 2줄은 완벽히동일한 크기의 메모리를 할당함
	// => 동일한 메모리를 어떻게 사용할지는 어느 포인터로 담는가에 따라 달라짐
	int* p3 = (int*)malloc(40);
	double* p4 = (double*)mallco(40);
	free(p3);
	free(p4);

	// 가끔 가독성을 위해 아래 처럼 코딩하라고 함
	int* p5 = (int*)malloc(sizeof(int) * 10);
				// => malloc(40)과 완벽히 동일한 코드
	free(p5);
}
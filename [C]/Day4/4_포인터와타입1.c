#include <stdio.h>

int main()
{
	printf("%zu\n", sizeof(char));		// 1byte
	printf("%zu\n", sizeof(int));		// 4byte
	printf("%zu\n", sizeof(double));	// 8byte

	// 핵심 1. 모든 타입의 포인터 변수는 크기가 동일
	//		   => 결국 주소를 담게 되므로
	//		   => 32 bit 환경: 4byte, 64 bit 환경: 8byte
	printf("%zu\n", sizeof(char*));		// 1byte
	printf("%zu\n", sizeof(int*));		// 4byte
	printf("%zu\n", sizeof(double*));	// 8byte

	int n1 = 10; // 10진수 리터럴
	int n2 = 0x10; // 16진수 리터럴. 결국 10진수로 16

	int n = 0x11223344;
	
	// 핵심 2. 포인터 변수의 타입이 가지는 의미.
	int* p1 = &n;
	char* p2 = &n;

	// 포인터의 타입은
	// => 주소가 가리키는 메모리를 해석하는 방법을 의미함

	// n의 주소가 1000번지 일때
	printf("%p, %x\n", p1, *p1);	// 1000
									// int* 이므로 1000번지에서 4바이트 읽기
	printf("%p, %x\n", p2, *p2);	// 1000
									// char* 이므로 1000번지에서 1바이트 읽기

	// int 변수의 주소를 char* 타입에 담는 것은
	// 메모리의 해석 방식을 변경하겠다는 의미 (107page)
}
#include <stdio.h>

int main()
{
	int n = 0;

	char* p1 = &n;

	*(p1 + 2) = 0x88;
	printf("%x\n", n);  // 결과 예측
						// 00880000
	// 77880000 나오게 p를 사용해서 넣어 보기
	*(p1 + 3) = 0x77;
	printf("%x\n", n);

	// 핵심 2.
	int a = 0;
	double* p2 = &a;

	*p2 = 3.4;   // 어떻게 될 지 잘 생각해 보세요
				 // 메모리 그림을 생각하세요
				 // 4바이트 메모리에 8바이트를 쓰게 되므로 잘못된 코드. 아주 위험!
	printf("%d", a);
}
#include <stdio.h>

int main()
{
	// 변수의 주소를 다른 타입의 포인터에 담는 것은 아주 위험함
	
	int n = 0;
	char* p1 = &n;		// C언어: 경고, C++: 컴파일 에러

	char* p2 = (char*)&n;	// 명시적 캐스팅. 개발자의 의도적인 코드이므로 에러 내지 말라!

	double* p3 = (double*)&n; // 역시 에러(경고) 아니지만 절대 사용 금지. 너무 위험
}
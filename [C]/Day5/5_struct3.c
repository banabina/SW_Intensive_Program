#include <stdio.h>

struct COMPLEX
{
	double re;
	double im;
};

typedef struct COMPLEX Complex;

int main()
{
	// 핵심 1. 구조체 변수를 선언할때는 struct 키워드 필요
	struct COMPLEX c1;

	// 핵심 2. typedef 해서 사용하면 struct 없어도 됩니다.
	Complex c2; // 초기화 하지 않은 경우, 각 멤버가 쓰레기값
	Complex c3 = { 1,1 };

	printf("%lf, %lf\n", c3.re, c3.im);
}
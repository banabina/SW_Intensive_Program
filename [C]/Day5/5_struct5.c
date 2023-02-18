#include <stdio.h>

struct COMPLEX
{
	double re;
	double im;
};
typedef struct COMPLEX Complex;

int main()
{
	Complex c1 = { 1, 1 };

	Complex* p1 = &c1;

	// 구조체 멤버에 접근하는 2가지 방법
	// 1. 변수이름.멤버
	c1.re = 10;

	// 2. 포인터->멤버
	p1->im = 20;

}

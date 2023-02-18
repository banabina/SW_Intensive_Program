#include <stdio.h>

struct COMPLEX
{
	double re;
	double im;
};
typedef struct COMPLEX Complex;

// 복소수 2개를 받아서 합을 구하는 함수

Complex add(Complex c1, Complex c2)
{
	Complex temp;

	temp.re = c1.re + c2.re;
	temp.im = c1.im + c2.im;

	return temp;
}

int main()
{
	Complex c1 = { 1, 1 };
	Complex c2 = { 2, 2 };

	Complex c3 = add(c1, c2);

	printf("%lf, %lf\n", c3.re, c3.im);
}

// 모든 프로그래밍언어의 공통된 용어
// 
// primitive type : 언어 자체가 제공하는 기본 타입
//					=> int, char, double, float .....

// user define type ( UDT ) : struct 문법으로 만든 타입
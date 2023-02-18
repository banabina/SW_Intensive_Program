#include <stdio.h>

// struct : 연관된 데이타를 묶어서 새로운 타입을 만드는 문법

struct COMPLEX
{
	// 변수를 선언하는 모양으로 연관된 타입을 넣으세요
	double re;
	double im;
};

int main()
{
	// 핵심 1. 구조체 변수를 선언할때는 struct 키워드 필요
	struct COMPLEX c1;

	// 핵심 2. 각 멤버에 접근할 때는 . 사용
	c1.re = 1.1;
	c1.im = 2.2;

	// 핵심 3. 초기화는 {} 사용
	struct COMPLEX c2 = { 1, 1 };
}
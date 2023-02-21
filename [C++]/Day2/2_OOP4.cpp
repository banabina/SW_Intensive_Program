#include <iostream>

struct Rect
{
	int left;
	int top;
	int right;
	int bottom;

	int getArea() { return (right - left) * (bottom - top); }
	void draw() { std::cout << "draw rect" << std::endl; }
};
int main()
{
	// 핵심 1. 메모리 layout
	// 1. Rect 변수를 2개 생성하면
	// => 멤버 데이터만 각각 stack 메모리에 놓이게 됨
	// => 멤버 함수는 코드 메모리에 한 개만 존재
	//	  Rect 형 변수가 10개라도 함수는 한 개임
	Rect r1 = { 1,1,10,10 };
	Rect r2 = { 1,1,10,10 };

	std::cout << sizeof(r1) << std::endl; // 16

	// 2. 용어 정리
	int n = 10;
	n = 20;			// n은 "변" 하는 "수". 변수(variable)이라고 함

	Rect r = { 1, 1, 10, 10 };
					// r은 변수라고 하지 않고 "객체(object)"라고 함

	// 객체(object): 세상에 존재하는 모든 것!
	//				 원, 사각형, 사람, 날짜, ... 

	// primitve type을 메모리에 만든 것: 변수
	// user define type을 메모리에 만든 것: 객체

	// Rect r에서 "Rect"는 타입, "r"는 객체
}

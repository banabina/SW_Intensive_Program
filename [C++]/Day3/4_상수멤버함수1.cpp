// 4_상수멤버함수1.cpp    119 page ~
#include <iostream>
class Point
{
public:
	int x, y;

	Point(int a = 0, int b = 0) : x(a), y(b) {}

	void set(int a, int b)
	{ 
		x = a; y = b; 
	}

	// 상수 멤버 함수: 멤버 함수 () 뒤에 const를 붙이는 문법
	//				=> 해당 멤버 함수 안에서는 멤버 데이터를 변경하지 
	//				   않겠다고 컴파일러에게 알려주는 것
	//				=> 상수 멤버 함수에서는 멤버변수 변경 안됨
	//				=> 상수 객체는 상수 멤버 함수만 호출 가능
	// void print()
	void print() const
	{	
		//x = 10;		// 에러. 상수 멤버 함수에서는 멤버변수 변경 안됨
		std::cout << x << ", " << y << std::endl;
	}
};
int main() 
{
	// Point p(1, 2);
	const Point p(1, 2);	// 핵심! 상수 객체
	//p.x = 10;				// 에러. x는 public이지만 상수이므로
	//p.set(10, 20);		// 에러. x는 public이지만 상수이므로
	p.print();				// 파일 분할로 인해 헤더 파일에서는 const인지 알 수 없음
							// 선언만 봐서는 코드 변경이 있는지 알수 없음
}


#include <iostream>

class Point
{
	int x, y;
public:
	//Point()				: x(0), y(0) { std::cout << "Point()" << std::endl; }
	Point(int a, int b) : x(a), y(b) { std::cout << "Point(int, int)" << std::endl; }
};

// Point p1; // error 디폴트 생성자 없음
// Point p2(0,0) // ok

class Rect
{
	Point ptFrom;
	Point ptTo;
public:
	// 사용자 코드	// 컴파일러가 추가한 코드
	// Rect()		// : ptFrom(), ptTo()

	// 디폴트 생성자가 없는 타입이 멤버 데이터로 있다면
	// 아래처럼 반드시 초기화 리스트로 다른 생성자를 호출하도록 표기해야 함
	Rect() : ptFrom(0, 0), ptTo(0, 0)
	{
		std::cout << "Rect()" << std::endl;
	}
};
int main()
{
	Rect r; 
}





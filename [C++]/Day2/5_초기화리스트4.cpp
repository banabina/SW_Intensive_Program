#include <iostream>

// member field initialization
class Point
{
	// C++11 부터 멤버 데이터를 직접 초기화 할 수 있음
	int x = 0;
	int y = 0;
public:
	Point() {}
	Point(int a) : y(a) {}
};

// 위 코드가 컴파일 되면 아래처럼 변경됨
class Point
{
	int x; // = 0;
	int y; // = 0;
public:
	// 위 초기값을 보고, 컴파일러가 생성자를 아래처럼 변경
	Point() : x(0), y(0) {}
	Point(int a) : x(0), y(a) {}
};

int main()
{

}





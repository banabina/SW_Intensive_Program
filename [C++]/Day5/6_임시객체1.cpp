#include <iostream>

class Point
{
public:
	int x, y;

	Point(int a, int b) :x(a), y(b)	{ std::cout << "Point()" << std::endl;	}
	~Point()            { std::cout << "~Point()" << std::endl;	}
};
int main()
{
	// Point pt(1, 2); // 이름 있는 객체 (named object)
					// 수명: 자신을 선언한 블록을 벗어날 때 파괴
	
	Point (1, 2);	// 이름 없는 객체 (unnamed object)
					// 수명: 자신을 선언한 문장의 끝
					// "임시 객체", "temporary" 라고도 함

	std::cout << "-------" << std::endl;
}






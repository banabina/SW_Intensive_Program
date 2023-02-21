#include <iostream>

class Point
{
public:
	int x, y;
	// 초기화 리스트는 코드가 놓인 순서가 아니라, 
	// 멤버가 선언도니 순서로 초기화 됨
	// 아래 코드에서는
	//		   (2)	 (1)
	Point() : y(0), x(y)
	{
	}
	// 결론: 초기화 리스트 작성 시 멤버가 놓인 순서로 초기화 하자
};
int main()
{
	Point pt;

	std::cout << pt.x << std::endl; // 쓰레기 값
	std::cout << pt.y << std::endl; // 0
}





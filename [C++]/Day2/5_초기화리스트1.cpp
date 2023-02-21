// 6_초기화리스트1    85page ~
#include <iostream>

class Point
{
	int x, y;
public:
	// 멤버 초기화 리스트 (member initializer list)
	// => 생성자 () 뒤에 : 을 적고 멤버 데이터를 초기화하는 것
	Point(int a, int b) : x(a), y(b)  // good
	{
//		x = a; // 이렇게 초기화하는 것은 나쁜 코드 (bad)
//		y = b; 
	}
};
int main()
{
	Point pt(0, 0);
}





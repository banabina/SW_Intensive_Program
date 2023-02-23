// 2_복사생성자1.cpp
#include <iostream>

class Point
{
	int x, y;
public:
	Point()             : x(0), y(0) {} // 1
	Point(int a, int b) : x(a), y(b) {} // 2
};
int main()
{
	// 아래 4줄에 대해서 생각해 봅시다.
	Point p1;		
	Point p2(1);    
	Point p3(1,2);	
	Point p4(p3);   
}
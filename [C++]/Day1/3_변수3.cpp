#include <iostream>

struct Point
{
	int x, y;
};
void foo(int n)    {} 
void goo(Point pt) {}

int main()
{
	Point p = { 1,2 };

	foo(3);		// int n = 3;
	foo({ 3 }); // ok. int n = {3}의 의미
	goo(p);	
	goo({ 1, 2 }); // ok. Point pt = {1, 2}
}






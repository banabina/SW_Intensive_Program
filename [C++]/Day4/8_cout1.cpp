// 6_cout - 187(136)page
#include <iostream>

// cout 의 원리
int main()
{
	int    n = 10;
	double d = 3.4;

	// std::cout << n;	// cout.operator<<(int)이 호출
	// std::cout << d; // cout.operator<<(double)이 호출
	
	std::cout.operator<<(n);
}



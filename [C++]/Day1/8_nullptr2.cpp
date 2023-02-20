#include <iostream>

void foo(int* p) { std::cout << "int*" << std::endl;}
void foo(int n)   { std::cout << "int" << std::endl; }

//void goo(char* p) { std::cout << "goo" << std::endl; }

int main()
{
	foo(0);			// int. 0은 정수임
	foo((int*)0);	// int* 캐스팅
	foo(nullptr);	// C++11부터는 이 코드 사용
}

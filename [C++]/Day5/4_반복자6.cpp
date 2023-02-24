// 5_반복자1
#include <iostream>
#include <vector>
#include <list>

int main()
{
	//std::vector<int> s = { 1,2,3,4,5,6,7,8,9,10 };

	int s[10] = { 1,2,3,4,5,6,7,8,9,10 };

	// auto p1 = s.begin(); // C++98 스타일
						 // s가 배열이면 error
	auto p1 = std::begin(s); // C++11 부터는 이렇게도 반복자를 꺼낼수 있음
	// 장점: s가 배열이라도 가능
	// 
}
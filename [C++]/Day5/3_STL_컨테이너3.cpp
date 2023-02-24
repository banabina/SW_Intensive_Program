// 5_STL_컨테이너4
#include <iostream>
#include <vector>
#include <list>
#include <deque>

int main()
{
	std::vector<int> v = { 1,2,3,4,5 };
	std::list<int>   s = { 1,2,3,4,5 };

	// 1. 제거와 반환을 동시에 하는 멤버 함수는 없다.
	//   => 예외 안정성의 강력 보장이라는 것을 지키려면
	//		반환과 제거를 분리할 수 밖에 없음
	int n = v.back(); // 반환만
	v.pop_back();	  // 제거만, 반환은 안됨. 리턴 타입이 void	

	std::cout << n << std::endl;
}

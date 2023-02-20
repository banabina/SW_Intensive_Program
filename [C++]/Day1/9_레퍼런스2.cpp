// 1_레퍼런스2
#include <iostream>
// 43 page - 그림이 중요. 꼭 완벽히 이해

/*
* reference 는 포인터와 유사
*  => 함수 인자로 전달 시 모두 원본 수정이 가능
*  => 그런데, 레퍼런스가 좀더 편하고 안전함
*  => 레퍼런스 없어도 포인터로 유사하게 구현 가능
*     레퍼런스는 편리한 포인터
*/

void inc1(int n)  { ++n; }
void inc2(int* p) { ++(*p); }
void inc3(int& r) { ++r; }

int main()
{
	int a = 1, b = 1, c = 1;

	inc1(a);
	inc2(&b);
	inc3(c);

	std::cout << a << std::endl; // call by value. 복사본 생성되어서 받게됨
								 // a 증가 실패
	std::cout << b << std::endl; // call by pointer(address)
								 // b 증가 성공
	std::cout << c << std::endl; // call by reference
								 // c 증가 성공
}

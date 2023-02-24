#include <iostream>
#include <vector>
#include <list>
#include <deque>

int main()
{
	// 연속된 메모리 사용
	// 장점: 모든 요소의 순환이 빠름
	// 단점: 중간에 삽입/삭제가 느림
	std::vector<int> v = { 1,2,3,4,5 };		

	// 모든 요소가 떨어진 메모리 사용
	// 장점: 삽입/삭제가 빠름
	// 단점: 요소 순환이 느림
	std::list<int>   s = { 1,2,3,4,5 }; 

	// 덱: list와 vector의 혼합 형태
	// 각 기능이 중간 정도의 성능
	std::deque<int>  d = { 1,2,3,4,5 }; 

	// 핵심 1. 대부분의 멤버 함수는 이름이 동일합니다.
	v.push_back(10);
	s.push_back(10);
	d.push_back(10);

	// 핵심 2. 사용법이 다르면 의도적인 설계
	//        => vector만 앞에 삽입할수 없습니다.
	s.push_front(10);
	d.push_front(10);
	v.push_front(10); // error. 연속된 메모리 앞에 추가하는 것은 너무 느림. 
					  // 다른 타입을 사용하라는 의도

	// 핵심 3. [] 연산자는 vector와 deque만 가능합니다.(연속된 메모리와 유사한것만)
	v[0] = 0;
	d[0] = 0;
	s[0] = 0;	// error


	// 핵심 4. 대부분의 멤버 함수이름이 유사하므로 컨테이너를 변경해가면서 성능 테스트 할수 있습니다.
	std::vector<int> c = { 1,2,3 };

	c.push_back(10);
	int n = c.back();
}

/*
* PC 환경에서는 대부분의 경우 vector가 좋음
*  => 캐시 적중률이 높음
* 
* container
*  => 여러 개의 요소를 저장하는 클래스
*  => 다른 언어는 "collection"이라는 용어 사용
*/



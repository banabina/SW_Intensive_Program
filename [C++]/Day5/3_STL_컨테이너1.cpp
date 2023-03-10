// 4_STL_컨테이너1.cpp
#include <iostream>
#include <vector>

// stack: 지역변수가 사용하는 메모리
// => 순차적으로 사용함
// => 기존 할당한 메모리의 크기 변경 불가
// => 파괴 순서도 정해져 있음. 할당의 역순으로 파괴
// => 메모리 파편화가 없고 할당이 빠름

// heap 메모리: malloc 또는 new
// => 할당/해지 속도가 느림( 빈 공간을 찾아야 함 )
// => 메모리 파편화가 발생할 수 있음
// => 빈 공간을 어떻게 관리할지가 OS 만드는 사람들의 핵심 기술

* stack: 지역변수가 사용하는 메모리
	* 순차적으로 사용함
	* 기존 할당한 메모리의 크기 변경 불가
	* 파괴 순서도 정해져 있음. 할당의 역순으로 파괴
	* 메모리 파편화가 없고 할당이 빠름

* heap 메모리: malloc 또는 new
	* 할당/해지 속도가 느림( 빈 공간을 찾아야 함 )
	* 메모리 파편화가 발생할 수 있음
	* 빈 공간을 어떻게 관리할지가 OS 만드는 사람들의 핵심 기술

int main()
{
	// 배열: 연속된 메모리 사용, [] 접근
	//		 크기 변경이 안됨. 지역변수라면 스택 사용
	int x[5] = { 1,2,3,4,5 };
	int n = 0;

	// vector: 연속된 메모리, v 자체는 stack이지만 데이터는 힙에 보관
	//			크기 변경 가능
	std::vector<int> v = { 1,2,3,4,5 };

	// 2. 배열과 vector는 요소 접근은 동일
	std::cout << x[0] << std::endl;
	std::cout << v[0] << std::endl;

	// 3. 하지만 vector는 크기 변경이 가능하고
	//	  다양한 멤버 함수가 있어서 편리함
	v.resize(10);

	std::cout << v.size() << std::endl; // 10
}
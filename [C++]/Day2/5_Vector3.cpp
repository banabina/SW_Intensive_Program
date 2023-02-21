#include <iostream>

// 필요한 타입을 먼저 만들자
// => 동적할당되는 메모리를 자동으로 관리하는 타입이 필요

// 크기 조절이 가능한 동적 할당된 메모리를 관리하는 vector라는 타입을 설계
class vector
{
private:
	int* ptr;
	int sz;
public:
	vector(int size)
	{
		sz = size;
		ptr = new int[size];
	}
	~vector()
	{
		delete[] ptr;
	}

};

int main()
{
	vector v(10); // 10개 할당

	// v.resize(20);	 // 20개로 늘려달라
}
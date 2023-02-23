#include <iostream>
// 필요한 타입을 먼저 만들어라!!
// => 동적 할당되는 메모리는 관리하는 타입이 필요 하다.

// 크기 조절이 가능한 동적 할당된 메모리를 관리하는
// vector 라는 타입을 설계해 봅시다.

class vector
{
private:
	int* ptr;
	int  sz;

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
	vector v1(4);
	vector v2 = v1;


}
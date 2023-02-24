#include <iostream>

/*
* 복사 생성자가 왜 중요한가요?
* 그냥 컴파일러가 만들어 주는 거 사용하면 되는 거 아닌가요?
*  => 대부분 그렇다
* 
* 그런데, 컴파일러가 만드는 구현이 위험할 때가 있음
*  => 아래 예제
*/

/*
* 얕은 복사 (Shallow Copy): 클래스가 내부적으로 포인터 멤버가 있고 
* 동적 메모리 할당했을 때 메모리 자체를 복사하지 않고, 주소만 복사하는 현상
* 사용자가 복사 생성자를 만들어서 해결해야 함
*/

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
	vector v2 = v1; // vector v2(v1);


}
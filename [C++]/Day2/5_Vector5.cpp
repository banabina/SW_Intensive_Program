#include <iostream>

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

	void set_at(int idx, int value)
	{
		// 0 <= idx < sz 를 확인하는 것이 좋음
		ptr[idx] = value;
	}

	int get_at(int idx)
	{
		return ptr[idx];
	}

	void resize(int newsize)
	{
		if (newsize > sz)
		{
			// 1. 새로운 메모리 할당
			int* temp = new int[newsize];

			// 2. 기존 버퍼의 데이터 복사
			for (int i = 0; i < sz; ++i)
			{
				temp[i] = ptr[i];
			}
			// 3. 기존 버퍼 제거
			delete[] ptr;

			// 4. 멤버 데이터 ptr이 새로운 버퍼 사용
			ptr = temp;

			// 5. 크기 변수 변경
			sz = newsize;
		}
		else
		{
			sz = newsize;
		}
	}

	int size() { return sz; }
};

int main()
{
	vector v(4);
	v.set_at(2, 3); 

	v.resize(8);

	int n = v.get_at(2);

	std::cout << n << std::endl;	
	std::cout << v.size() << std::endl;
}
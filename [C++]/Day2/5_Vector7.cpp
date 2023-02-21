#include <iostream>

// 함수 뿐 아니라 클래스도 틀(template)으로 만들 수 있음

template<typename T>
class vector
{
private:
	T* ptr;
	int sz;
public:
	vector(int size)
	{
		sz = size;
		ptr = new T[size];
	}
	~vector()
	{
		delete[] ptr;
	}

	void set_at(int idx, T value)
	{
		// 0 <= idx < sz 를 확인하는 것이 좋음
		ptr[idx] = value;
	}

	T get_at(int idx)
	{
		return ptr[idx];
	}

	void resize(int newsize)
	{
		if (newsize > sz)
		{
			T* temp = new T[newsize];

			for (int i = 0; i < sz; ++i)
			{
				temp[i] = ptr[i];
			}

			delete[] ptr;

			ptr = temp;
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
	//vector v(4);
	vector<int> v(4);
	// => 클래스 템플릿 사용 시는 반드시 타입을 전달해야 함

	vector<double> v2(5);
	
	v.set_at(2, 3);

	v.resize(8);

	int n = v.get_at(2);

	std::cout << n << std::endl;
	std::cout << v.size() << std::endl;
}
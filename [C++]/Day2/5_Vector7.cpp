#include <iostream>

// �Լ� �� �ƴ϶� Ŭ������ Ʋ(template)���� ���� �� ����

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
		// 0 <= idx < sz �� Ȯ���ϴ� ���� ����
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
	// => Ŭ���� ���ø� ��� �ô� �ݵ�� Ÿ���� �����ؾ� ��

	vector<double> v2(5);
	
	v.set_at(2, 3);

	v.resize(8);

	int n = v.get_at(2);

	std::cout << n << std::endl;
	std::cout << v.size() << std::endl;
}
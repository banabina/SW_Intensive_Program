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
		// 0 <= idx < sz �� Ȯ���ϴ� ���� ����
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
			// 1. ���ο� �޸� �Ҵ�
			int* temp = new int[newsize];

			// 2. ���� ������ ������ ����
			for (int i = 0; i < sz; ++i)
			{
				temp[i] = ptr[i];
			}
			// 3. ���� ���� ����
			delete[] ptr;

			// 4. ��� ������ ptr�� ���ο� ���� ���
			ptr = temp;

			// 5. ũ�� ���� ����
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
#include "vector.h"

vector::vector(int size)
{
	sz = size;
	ptr = new int[size];
}
vector::~vector()
{
	delete[] ptr;
}

void vector::set_at(int idx, int value)
{
	ptr[idx] = value;
}

int vector::get_at(int idx) const
{
	return ptr[idx];
}

void vector::resize(int newsize)
{
	if (newsize > sz)
	{
		int* tmp = new int[newsize];

		for (int i = 0; i < sz; i++)
		{
			tmp[i] = ptr[i];
		}

		delete[] ptr;

		ptr = tmp;

		sz = newsize;
	}
}
int vector::size() const
{
	return sz;
}

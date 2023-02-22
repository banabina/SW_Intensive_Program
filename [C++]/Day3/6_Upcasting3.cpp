// 6_Upcasting1.cpp      140 page ~
#include <vector>
#include <iostream>
class Animal
{
public:	int age;
};
class Dog : public Animal
{
public:	int color;
};
class Cat : public Animal
{
public:	int speed;
};

int main()
{
	// ���α׷����� ������ ��� ���� ��ü�� �����ϰ� ����
	std::vector<Dog*> v1; // Dog Ÿ���� ��ü�� ����
	std::vector<Animal*> v; // ��� ������ ����
							// ������ �����ϴ� �����̳�
							// ���� ��� Ŭ������ ���� �Ļ��� ��ü�� ����

	while (1)
	{
		int n;
		std::cin >> n;
		if (n == -1)break;
		Animal* newAnimal = nullptr; // �̷��� �ϸ� ��� ���� ��ü�� �ּҸ� ���� �� ����
		if (n == 1)
		{
			newAnimal = new Dog();
		}
		else if (n == 2)
		{
			newAnimal = new Cat();
		}
		v.push_back(newAnimal);
	}

	for (int i = 0; i < v.size(); ++i)
		delete v[i];
}

// ��� ���� ��ü�� ���ذ� �Ǹ� �Ʒ� �Լ��� ���޵�
void happy_new_year(Animal* p)
{
	++(p->age);
}
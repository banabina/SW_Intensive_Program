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
	// 프로그램에서 생성한 모든 동물 객체를 보관하고 싶음
	std::vector<Dog*> v1; // Dog 타입의 객체만 보관
	std::vector<Animal*> v; // 모든 동물을 보관
							// 동종을 보관하는 컨테이너
							// 동일 기반 클래스로 부터 파생된 객체를 보관

	while (1)
	{
		int n;
		std::cin >> n;
		if (n == -1)break;
		Animal* newAnimal = nullptr; // 이렇게 하면 모든 동물 객체의 주소를 담을 수 있음
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

// 모든 동물 객체는 새해가 되면 아래 함수로 전달됨
void happy_new_year(Animal* p)
{
	++(p->age);
}
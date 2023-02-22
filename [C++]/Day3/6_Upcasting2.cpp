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
	// Upcasting 활용/장점
	std::vector<Dog*> v1;
	
	int n;
	std::cin >> n;
	Animal* newAnimal = nullptr; // 이렇게 하면 모든 동물 객체의 주소를 담을 수 있음
	if (n == 1)
	{
		newAnimal = new Dog();
	}
	else if (n == 2)
	{
		newAnimal = new Cat();
	}

	// 문제: 여기서 newAnimal을 사용하면 Animal 멤버만 접근 가능함
	// => Dog가 추가한 고유 멤버는 어떻게 접근하나요?
	// => 내일의 주제!

	// 사용 후에는 꼭 제거!
	delete newAnimal;
}

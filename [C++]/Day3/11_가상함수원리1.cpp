#include <iostream>

//가상함수 원리   164page ~

class Animal
{
	int age;
public: 
	virtual void Cry() {}
	virtual void Run() {}
};
//--------------------
class Dog : public Animal
{
	int color;
public:	
	virtual void Cry() {}
};

int main()
{
	Animal a;
	Dog    d;
	Animal* p = &d;
	p->Cry();  
}



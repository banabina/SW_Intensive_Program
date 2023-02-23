//QA
#include <iostream>
class Shape
{
public:
	virtual void draw() const;
	virtual ~Shape();
};

//virtual void Shape::draw() const
void Shape::draw() const
{
	std::cout << "draw shape" << std::endl;
}
int main()
{
	std::cout << "hi" << std::endl;
}
// 7_가상함수2.cpp  147 page ~

class Shape
{
public:
	virtual void Draw() {};
	virtual void Clone() const {};
	virtual void Move() {};
};
class Rect : public Shape
{
public:
	// 1. 가상함수 override 할 때 virtual은 붙여도 되고 없어도 됨
	//		void Draw() {};		// ok.
	virtual void Draw() {};		// ok. 이 코드가 가독성 좋음

	virtual void draw()  {};
	virtual void Clone() {};
	virtual void Move(int n) {};
};

class Circle : public Shape
{
public:
	// 2. 가상함수 재정의 시 실수(오타)가 있으면 에러 아님 => 새로운 가상함수라 생각
	// 예전에 이 현상 때문에 버그가 너무 많이 발생
	// virtual void draw() {};		

	// 3. 위 문제를 해결하기 위해 C++11 부터 override 키워드 도입
	// => 새로운 함수가 아니라 재정의 한다고 알리는 것
	// override를 표기하면 virtual이 없어도 가독성이 나쁘지 않음
	virtual void draw() override {};
};
int main()
{

}

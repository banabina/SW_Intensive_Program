// 3_추상클래스 - 168(216)page

// 2. 추상 클래스: 순수 가상 함수가 한 개 이상 있는 클래스
// => 특징: 객체를 생성할 수 없음
// => 의도: 파생 클래스에게 특정 함수를 반드시 만들라고 지시하는 것
//			만들지 않으면 객체 생성 못함
class Shape
{
public:
	//1. 순수 가상함수 (pure virtual function)
	// => 구현부가 없고, =0 으로 표기
	virtual void draw()  = 0; 
};
class Rect : public Shape
{
public:
	//Shape로 부터 물려받은
	// draw()의 구현을 제공하지 않으면 Rect도 추상
	// draw()의 구현을 제공하면 추상 아님
};
int main()
{
	Shape s; // 에러. 추상클래스는 객체 생성 안됨
	Rect  r; // ?
}



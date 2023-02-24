class Vector
{
public:
	// explicit 생성자
	// => 직접 초기화만 사용가능하고
	// => 복사 초기화는 에러
	explicit Vector(int sz) {}
};

// 함수에 인자를 전달하는 것은 "복사 초기화" 임
void f(Vector v) {} // Vector v = 10

int main()
{
	// 인자가 int 한 개인 생성자가 있다면 아래 처럼 사용 가능함
	Vector v1(10);	// 직접(direct) 초기화
	Vector v2 = 10; // 복사(copy) 초기화

	f(10);
}
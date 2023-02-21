// 시험 문제 나옴
class Car
{
	int color;
	static int cnt;
public:
	// 다음중 에러를 모두 골라 보세요
	// 1. static 멤버 데이터는 객체가 없어도 메모리에 있음
	// 2. static 멤버 함수는 객체없이 호출 가능
	void foo()	
	{
		color = 0;	// 1.
		cnt = 0;	// 2.
		goo();		// 3
	}
	static void goo()	
	{
		color = 0;	// 4. error. 객체가 있어야 메모리에 존재
		cnt = 0;	// 5. ok. cnt는 항상 메모리에 존재
		foo();		// 6. error. 객체가 있어야만 불릴 수 있음
	}
};
int Car::cnt;

int main()
{
	Car::goo();
}
// 핵심: static 멤버 함수에서는 static 멤버만 접근 가능함
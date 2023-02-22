
// gibub.com/webkit
// webkit/wtf/wtf/seconds.h 열어보자

// 상수 멤버 함수는 "선택"이 아닌 "필수" 문법

// 객체의 상태를 변경하지 않는 모든 멤버 함수는 "반드시" 상수 멤버 함수로 해야함

class Rect
{
	int x, y, w, h;
public:
	Rect(int a, int b, int c, int d)
		: x(a), y(b), w(c), h(d) {}

	//int getArea() { return w * h; } // 잘 못 만든 코드
	int getArea() const { return w * h; }
};
// void foo(Rect r) // bad. 사용자 정의 타입은 call by value 사용하지 말자
void foo(const Rect& r) // good. 사용자 정의 타입은 const&로 받자
{
	int n = r.getArea();
}

int main()
{
	Rect r(1, 1, 10, 10); // 상수 객체 아님.

	int n = r.getArea();  // ok

	foo(r);
}




// 핵심 1. call by value는 항상 복사본을 생성함
// 핵심 2. 사용자 정의 타입(struct 또는 class)은 일반적으로 
//		   크기가 큼

// 핵심 3. 사용자 정의 타입을 함수에서 받을 때는 
//			call by value 대신 call by reference 사용하자
struct Rect
{
	int left, top, right, bottom;
};

void f1(int n) {}

void f2(Rect& r) {} // r을 사용해서 원본 수정 가능
void f2(const Rect& r) {} // r을 사용해서 원본 수정 불가


int main()
{
	int x = 10;
	f1(x);

	Rect rc = { 1, 1, 10, 10 };
}
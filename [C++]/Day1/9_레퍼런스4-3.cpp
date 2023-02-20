// 인자로 받은 것을 읽기만 하려고 함
// 다음 중 좋은 코드는? => f1이 좋은 코드

void f1(int x) { int a = x; }
void f2(const int& x) { int a = x; } // int a = *p; // 역참조 과정에서 성능이 떨어짐

int main()
{
	int n = 10;
	f1(n);
	f2(n);
}


// 총정리: 아래 규칙 외우자
// A. 함수가 원본 인자를 수정하려면 
// 1. 포인터를 사용해도 되고: void swap(int* a, int b)
// 2. 참조를 사용해도 됨: void swap(int& a, int& b)
//  => 요즘은 참조를 권장

// B. 함수가 원본 인자를 수정하지 않는다면
// primitive type인 경우 (char, short, long, double, float 등)
// => call by value
// => f1(int n)

// user define type: struct나 클래스로 만든 타입
// => 사용자가 직접 만들거나(Rect)
// => 표준 라이브러리로 제공(std::string) 되는 것들
// => const& 사용
// => f1(const Rect& rc)
// => f1(const std::string& s)

// std::string도 아래 처럼 미리 만들어져 있는 것
struct string
{
	// .. 문자열 보관
};

// 구글: C++ core guideline 검색
// https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines
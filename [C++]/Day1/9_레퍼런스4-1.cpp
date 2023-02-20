// 45 페이지. 아주 중요 .반드시 이해해야 함

struct Rect
{
	int left, top, right, bottom;
};

//void f1(Rect rc) // call by vale: 원본 수정 안됨
				 // => 하지만 복사본 생성에 따른 오버헤드가 있음

//void f1(Rect &rc) // call by reference: 복사본 없음
				  // 메모리 오버헤드 없음.

void f1(const Rect &rc) // C++에서 가장 널리 사용하는 코드!
{
	// rc = { 2, 2, 20, 20 }; // 에러. 상수 참조이므로

}

int main()
{
	Rect rc = { 1, 1, 10, 10 };

	// f1은 절대 rc의 상태를 변경하면 안됨
	f1(rc);
}
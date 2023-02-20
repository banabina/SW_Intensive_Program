// 45 페이지. 아주 중요 .반드시 이해해야 함

struct Rect
{
	int left, top, right, bottom;
};

// call by value는 원본을 수정하지 않겠다는 약속 (복사본 생성)
void f1(int n)
{
	n = 20; // 복사본만 변경. 원본 x는 수정 안됨.
}

int main()
{
	int x = 10;
	f1(x); // f1 함수는 절대로 x 값을 변경하면 안됨
}
// 각기 다른 함수에서는 같은 이름의 변수를 사용해도 됩니다.

void foo()
{
	int week_of_day = 0;	// 함수가 실행될 때 생성
							// 함수가 종료될 때 파괴
}

int main()
{
	int week_of_day = 0;

	foo();
	foo();
}
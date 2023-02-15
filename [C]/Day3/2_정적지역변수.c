//2_정적지역변수.c
#include <stdio.h>

// int cnt = 0; // 프로그램 종료 시 까지 항상 메모리에 있음
			 // 그런데, 모든 함수가 접근 가능 => 위험함

// 식당에서 대기표를 발행하는 함수
int get_wait_number(int count)
{
	// count 인원의 고객이 왔다는 것을 지배인에 알리고 대기 번호 반환
//	int cnt = 0; // 지역변수: 함수 호출 종료 시 파괴
	static int cnt = 0; // 정적 지역변수. 함수 호출이 종료되어도 파괴되지 않음
						// 초기화는 함수 호출 최초 한번만 되고 그 다음부터는 되지 않음
	++cnt;
	return cnt;
}

int main()
{
	printf("%d\n", get_wait_number(4)); // 1
	printf("%d\n", get_wait_number(3)); // 2
	printf("%d\n", get_wait_number(3)); // 3
}
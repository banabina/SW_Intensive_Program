#include <stdio.h>
#include <stdlib.h> // rand() 함수

int main()
{
	// rand() 함수를 사용하려면 난수 초기화 필요
	// time(): 현재 시간을 구해서 srand(현재 시간)을 난수 구할 때 초기값으로 사용
	srand(time(0)); 

	for (int i = 0; i < 5; ++i)
	{
		int n = rand() % 7; // 난수 (무작위 숫자)를 구하는 함수

		printf("%d\n", n);
	}
}

// cppreference.com 에 접속해서 rand 검색하세요
// 헤더 파일 무엇이 필요한지 보세요
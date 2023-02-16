#include <stdio.h>
#include <stdlib.h>

// 1. 사용자가 -1을 입력할 때 까지 계속 입력 받기
// 2. 입력된 값은 나중에 사용하기 위해 모두 저장되어야 함
int main()
{
	int n = 0;
	int score[4] = { 0 }; // 이렇게 하면 5개 이상 입력 시 오류 발생
	int cnt = 0;
	while (1)
	{
		scanf_s("%d", &n);
		if (n == -1)
			break;
		score[cnt] = n;
		++cnt;
	}

}
#include <stdio.h>
#include <stdlib.h>

int main()
{
	// 1. 사용자에게 2개의 정수를 입력 받고 싶다 => 2개 변수 필요

	// 2. 사용자에게 10개의 정수를 입력 받고 싶다 => 크기가 10인 배열이 필요

	// 3. 실행시간에 사용자가 입력 한 크기의 메모리가 필요
	int cnt = 0;
	pritnf("학생 수는 몇명인가요 >> ");
	scanf_s("%d", &cnt);

	// 학생 수만큼 점수를 관리하기 위해 메모리 필요
	// 실행시간 결정된 크기로 메모리 할당을 하는 가장 안전한 방법은 "동적 메모리 할당"
	int* score = (int*)malloc(sizeof(int) * cnt);

	// score는 포인터지만 배열처럼 사용 가능
	score[0] = 10;
	score[1] = 20;

	// 사용 후 필요 없으면 꼭 지우세요.
	free(score);
}
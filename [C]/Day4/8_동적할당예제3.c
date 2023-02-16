#include <stdio.h>
#include <stdlib.h>

int main()
{
	int buf_size = 4;	// 버퍼 크기
	int n = 0;

	// int score[4] = { 0 }; // 이렇게 만들면 필요 없을 때 즉시 제거 안됨
	int* score = (int*)malloc(sizeof(int) * buf_size); // 이렇게 만들면 즉시 제거 가능

	int cnt = 0;
	while (1)
	{
		scanf_s("%d", &n);
		if (n == -1) break;
		score[cnt] = n;
		++cnt;
		if (cnt == buf_size)
		{
			buf_size += 4;
			int* tmp = (int*)malloc(sizeof(int) * buf_size);
			// 2. 기존 버퍼(메모리) 내용을 새로운 버퍼에 복사
			for (int i = 0; i < cnt; ++i)
			{
				tmp[i] = score[i];
			}
			// 3. 기존 버퍼 제거
			// => 아래 코드는 score의 제거가 아닌 score가 가리키는 메모리의 제거
			free(score);
			// 4. score 포인터 변수가 새로운 버퍼를 가리키도록
			score = tmp;

		}
	}
	printf("입력된 갯수: %d\n", cnt);
	printf("할당된 버퍼: %d\n", buf_size);

	for (int i = 0; i < cnt; ++i)
	{
		printf("%d, ", score[i]);
	}
	printf("\n");
	free(score);
}

// 자료구조(data structure) 란?

// => 프로그램 실행중에 생성되는 데이터를 메모리에 어떻게 보관할 것인가? 를 배우는 학문
// => 위 코드가 "동적 배열(흔히 vector)" 임
//	  크기 변경이 가능한 배열이라는 의미
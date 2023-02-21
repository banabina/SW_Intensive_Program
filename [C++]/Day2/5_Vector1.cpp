#include <iostream>

int main()
{
	int cnt = 0;
	std::cout << "학생수는 >> ";
	std::cin >> cnt;

	// 3. 입력된 학생수 만큼 다시 점수를 입력 받아야 합니다.
	// int score[cnt]; // error
	
	// 실행시간에 결정된 크기의 메모리가 필요하면 동적메모리 할당해야 함
	int* score = (int*)malloc(sizeof(int) * cnt);
	free(score);

	// C++은 아래 처럼
	int* score2 = new int[cnt];
	delete[] score2;
}
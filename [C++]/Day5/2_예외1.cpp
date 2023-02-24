// 3_예외1 - 페이지 231
#include <iostream>

// 함수가 주어진 기능을 수행하다가 실패 했을 때 어떻게 처리할까?

// 방법 1. 함수에서 프로그램 종료
void db_backup()
{
	if (1) // 실패
		std::exit(-1); // 프로그램 종료
}

void db_remove() {}

int main()
{
	db_backup();
	db_remove();
	std::cout << "main continue" << std::endl;
}

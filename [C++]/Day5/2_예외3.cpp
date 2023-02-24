#include <iostream>

// 방법 3. 객체지향 언어의 "예외 문법" 사용
// 1. 함수가 실패하면 예외를 던진다 (throw)

// 장점 1. 반환 값과 실패의 전달이 완벽히 분리됨
//		2. 호출자는 던져진 예외를 반드시 처리해야 함
//		  => 처리되지 않으면 비정상 종료함
int db_backup()
{
	if (1) // 실패
		throw 1;

	return 100;
}

void db_remove() {}

int main()
{
	int ret = db_backup();
	if (ret == -1)
	{
		// ... 
	}
	db_remove();
	std::cout << "main continue" << std::endl;
}

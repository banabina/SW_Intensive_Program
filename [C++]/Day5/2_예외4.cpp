#include <iostream>

// 핵심 2. try ~ catch로 예외 잡기
int db_backup()
{
	if (1) // 실패
		throw 1;

	return 100;
}

void db_remove() {}

int main()
{
	// 1. 예외 가능성이 있는 함수 호출시 try{} 안에서 호출
	try
	{
		int ret = db_backup();

		// 이 부분은 예외가 발생 하지 않은 경우만 실행됨
		db_remove();
	}
	catch (int e)
	{
		// 실패의 이유를 확인한 후
		// 1. 오류 수정이 어려우면 사용자에게 알리고
		//    std::exit() 등으로 종료
		// 2. 그렇지 않은 경우 프로그램은 계속 실행됨
		std::cout << "catch .. " << std::endl;
	}
	
	std::cout << "main continue" << std::endl;
}

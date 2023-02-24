#include <iostream>
#include <string>

// 실패의 이유를 담은 전용 타입을 설계
class file_error
{
	std::string file_name;
	// 그 외에 실패의 정보 관련된 다양한 멤버 데이터
public:
	file_error(const std::string& s)
		: file_name(s)
	{
	}
	// 다양한 도움 함수들...
};

// 특별한 멤버가 없어도 클래스 이름 자체로 좋은 설명이 됨
class network_error {};

int db_backup()
{
	if (1)
	{
		file_error e("a.txt");
		throw e;
	}
	else if (2) // 다른 이유로 실패
	{
		network_error e;
		throw e;
	}

	return 100;
}

void db_remove() {}

int main()
{
	try
	{
		int ret = db_backup();
		db_remove();
	}
	catch (const file_error& e)
	{
		
		std::cout << "file error .. " << std::endl;
	}
	catch (const network_error& e)
	{

		std::cout << "network error .. " << std::endl;
	}
	catch (...) // 위에서 잡히지 않은 모든 예외를 잡겠다
	{
		std::cout << "..." << std::endl;
	}

	std::cout << "main continue" << std::endl;
}

// 예외: 객제지향 언어에서 주로 사용하는 에러 처리 방식
// 장점
// 1. 반드시 던져진 예외를 처리해야 함 (강제성)
// 2. 반환값과 실패가 분리됨

// 단점
// 1. 코드가 좀 복잡해짐
// 2. 예외 사용 시 기계어 코드가 복잡해 짐 - 성능의 이슈

// java, C#, python: 예외를 아주 많이 사용
// C++: 심각한 오류는 예외, 가벼운 오류는 반환 값으로 하는 경우가 많음'
//		임베디드 분야 등의 일부 분야는 예외 사용 안함
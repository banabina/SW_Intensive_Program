#include <iostream>
// 요즘 널리 사용하는 오류 전달 방법
// => 예외 번호와 함수 결과를 담은 구조체 설계
template<typename T>
struct Result
{
	int error_code;
	T value;
};

// 약소: 모든 함수는 Resut<T>를 반환하기로 하자
// => 실패 시 에러는 error_code에 기록되고
// => 성공 시 value에 반환 값 저장

// attribut: 컴파일러에게 지시하는 문장
// [[nodiscard]]: 리턴 값을 받지 않으면 경고나게 해달라
[[nodiscard]]
Result<int> db_backup()
{
	Result<int> ret = { 0, 100 };
	return ret;
}

int main()
{
	//Result<int> ret = 
	db_backup();
}
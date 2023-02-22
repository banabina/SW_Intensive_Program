#pragma once
// vector.h 추가해서 아래 클래스 선언부 넣기
class vector
{
private:
	int* ptr;
	int  sz;

public:
	// 1. 생성자 소멸자는 "상수 멤버 함수"가 될 수 없음
	vector(int size);
	~vector();

	// 2. 객체의 상태 변경(멤버 데이터 변경) 하지 않으면
	//	  반드시 상수 멤버 함수로 하세요
	void set_at(int idx, int value);
	int get_at (int idx) const;

	void resize(int newsize);
	int size() const;
};
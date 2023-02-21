#include <iostream>

// 프로그램에서 날짜를 다루는 경우가 많음
// => "Date"라는 타입을 만들면 좋음
// 단일 책임의 원칙. 하나의 클래스는 하나의 기능만
class Date
{
private:
	int year;
	int month;
	int day;

	// int days[12]; // 날짜 객체마다 따로 생성
	static const int days[12];

public:
	Date(int y, int m, int d)
		: year(y), month(m), day(d)
	{

	}

	// getter, setter
	void set_year(int y) { if(y > 0) year = y; }
	int get_year() { return year; }

	// 이제 날짜 관련 사용자들이 편리하게 사용할 수 있는 다양한 멤버 함수를
	// 제공해보자

	Date after_days(int ds)
	{
		Date temp(year, month, day + ds);
			// 잘못된 구현
			// 숙제로 제대로 구현해보기
		return temp; // 반환
	}

	// 아래 함수는 특정 날짜가 없어도 되는 함수
	// 객체 없이 호출 가능하게 하는 것이 좋음
	static int how_many_days(int m, int y = -1)
	{
		if (y != -1 && m == 2)
		{
			// 연도를 보냈고, 2월 달이면
			// 윤년인지를 조사해서 반환
			// return days[1]  + 윤년이면 1, 아니면 0;
		}
		return days[m - 1]; 
	}

	// "내일"은 기준 날짜가 필요함
	// 객체를 가지고 호출해야함 - non static
	Date tomorrow()
	{
		Date temp(year, month, day + 1); // 잘못된 구현
		return temp;
	}
};
const int Date::days[12] = { 31, 28, 30 };

int main()
{
	Date d(2023, 2, 21);

	Date d2 = d.after_days(1000);

	// 3월이 몇일까지 있는지 알고 싶다
	int ds = Date::how_many_days(3);
	std::cout << ds << std::endl;

	// 내일 날짜를 알고 싶다
	Date d3 = d.tomorrow();	
}
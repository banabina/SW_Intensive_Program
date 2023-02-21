// 5_생성자3 - 78page ~
#include <iostream>

class Point
{
	int x;
	int y;
public:
	// 1. 생성자는 2개 이상 만들 수 있음
	//	  모든 객체를 생성하면 생성자가 호출됨
	
	// 2. 생성자를 한 개도 만들지 않으면 컴파일러가 인자 없는 생성자 제공
	//	  => 인자 없는 생성자: 디폴트 생성자

	Point()             { x=0; y=0; std::cout << "Point()"         << std::endl; } // 1
	Point(int a, int b) { x=a; y=b; std::cout << "Point(int, int)" << std::endl; } // 2
};
int main()
{
	Point p1;		
	Point p2(1, 2); 

	// 3. C++11 부터는 {} 사용 가능
	Point p3{ 1,2 };		// 보통은 이렇게 사용
	Point p4 = { 1,2 };

	// 4. 객체를 만들면 항상 생성자가 호출됨
	Point arr1[5];	// 인자 없는 생성자가 5회 호출
	Point arr2[5] = { {1,2},{2,3} }; // 인자 2개짜리 2회 호출
									 // 나머지 3회 인자없는 생성자

	Point* p; // 객체 생성이 아닌 포인터 변수 만든 것
			  // 생성자 호출 안됨

	p = (Point*)malloc( sizeof(Point) ); 
						// Point 객체를 만든 것이 아니라
						// Point 크기 (8바이트)만큼 메모리 할당
						// 생성자/소멸자 호출 안됨

	free(p);							

	p = new Point;		// 객체 생성. 디폴트 생성자 호출
	delete p;			// 소멸자 호출

	p = new Point(1, 1); // 인자가 2개인 생성자 호출
	delete p;
	
}
### C++ Day 1
#### 1. namespace
* 프로젝트의 구조를 논리적으로 분리.	이름 충돌 등을 막을 수 있음
* Qualified name: 완전한 이름. Audio::init(); Video::init();
* using 지시어 사용. using Audio::init; using namespace Audio;
* C++ 표준의 모든 함수는 "std"라는 이름 공간안에 있음

#### 2. 입출력
* std::cout, std::cin
* <iomanip>: 입출력 조정자 함수 
    * std::hex 16진수, std::dec 10진수

#### 3. 변수
* 일관된 초기화 (uniform initialization): 모든 종류의 변수는 {}로 일관되게 초기화 가능
* auto: 우변의 표현식을 보고 좌변 변수의 타입을 컴파일러에게 결정해 달라는 지시어   
* decltype(): () 안에 있는 타입을 조사
* structure binding: 구조체의 각 항목을 꺼내오는 기술
    * auto [a1, a2] = pt;
 
#### 4. 함수
* 디폴트 인자
    * 함수를 선언과 구현 분리 시, 디폴트 값은 선언에만 표기해야 함
    * 디폴트 값은 마지막 인자부터 차례대로 지정 가능
* 함수 오버로딩:  인자의 갯수나 타입이 다르면 동일이름의 함수를 여러 개 만들 수 있음
* 인라인: 호출하는 코드를 작성하면 "실제 호출이 아니라" 해당 위치에 기계어 코드를 치환해 달라
    * 장점: 빠름. 단점: 실행 파일 크기가 커질 수 있음
* 후위반환: auto square(int a) -> int
 
#### 5. 함수 템플릿
* template(typename T>
* template<typename T1, typename T2>
* auto Add(T1 a, T2 b) -> decltype(a + b)

#### 6. 반복문
* 새로운 for 문 - "range for"
    * for (auto n : x)

#### 8. nullptr
* C++11 부터는 포인터 초기화는 0대신 nullptr 사용

#### 9. 레퍼런스
* 포인터는 주소로 초기화, 레퍼런스는 변수 명으로 초기화
* f(const Rect&) 인자 모양 알아 두기
* 함수가 원본 인자를 수정하면
    * 포인터를 사용해도 되고, 참조를 사용해도 됨
* 함수가 원본 인자를 수정하지 않는다면 
    * primitive type인 경우 call by value
    * user define typ인 경우 const& 사용
* f() = 10이 되려면 f는 참조 반환

#### 나중에
메모리 할당,  캐스팅

#### 11. 예제
* swap 함수 C 버전, C++ 버전 차이점 느껴 보기

#### 참고
* 구글: C++ core guideline 검색
    * https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines

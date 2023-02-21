## C++ Day 1
1. namespace
   * 프로젝트의 구조를 논리적으로 분리.	이름 충돌 등을 막을 수 있음

2. 입출력
   * std::cout, std::cin

3. 변수
   * "{} 초기화", "auto"는 꼭 기억하자
 
4. 함수
   * 디폴트인자, 오버로딩, 인라인, 템플릿, 후위 반환 타입, 함수 삭제
   * 함수를 선언과 구현 분리 시, 디폴트 값은 선언에만 표기해야 함
   * 디폴트 값은 마지막 인자부터 차례대로 지정 가능
   * 함수 오버로딩:  인자의 갯수나 타입이 다르면 동일이름의 함수를 여러 개 만들 수 있음
   * 인라인: 호출하는 코드를 작성하면 "실제 호출이 아니라" 해당 위치에 기계어 코드를 치환해 달라
   * 후위반환: auto square(int a) -> int
 
5. 함수 템플릿

6. 반복문
   * 새로운 for 문 - "range for"

7. 캐스팅 -> 나중에

8. nullptr
   * C++11 부터는 포인터 초기화는 0대신 nullptr 사용

9. 레퍼런스
   * swap 함수 C 버전, C++ 버전 차이점 느껴 보기
   * f(const Rect&) 인자 모양 알아 두기
   * f() = 10이 되려면 f는 참조 반환
   * 함수가 원본 인자를 수정하지 않는다면 
      * primitive type인 경우 call by value
      * user define typ인 경우 const& 사용

10. 메모리 할당 -> 나중에

11. 예제

* 참고
구글: C++ core guideline 검색
https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines

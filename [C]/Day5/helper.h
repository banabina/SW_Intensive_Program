// helper.h

// 헤더 파일 안에는
// 1. 다른 파일에 있는 함수의 선언이나
// 2. 자주 사용하는 매크로
// 3. 구조체 정의 등을 넣게 됩니다. - 오늘 오후!

// 188 page
// include guard : 
//#ifndef HELPER_H
//#define HELPER_H

#pragma once  // 2번 include 되어도 한번만 컴파일 해달라는
				// 최신 매크로.

#define WIDTH	10
#define HEIGHT	10

int add(int a, int b) { return a + b; }

//#endif
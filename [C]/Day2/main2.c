#include <stdio.h>
#include "add.h" 
#include "sub.h"

int main()
{
	int ret1 = add(1, 2);
	int ret2 = sub(1, 2);

	printf("result = %d, %d\n", ret1, ret2);
}

// 1. sub.h		sub.c 만드세요
// 2. 명령 프로프트 안에서 3개의 서스 (main2.c, add.c, sub.c)를 각각 컴파일
// 3. 링킹해서 실행파일 만들고 실행해보기.

/*
* 잘 만들어진 함수가 담긴 파일을 배포하는 방법
* 
* 1. 소스 파일로 배포
*    소스 2개와 add.c, sub.c와 헤더 2개(add.h sub.h)
*    => 사용자가 소스를 컴파일해서 사용
*	 => cl add.c /c 등으로 한 후 link 사용
* 
* 2. 미리 컴파일해서 obj 파일 배포
*	 => 2개의 object(add.obj, sub.obj)와 2개의 헤더
*	 => 사용자는헤더를 include한 후 link만 하면 된다
*	 => link main2.c add.obj sub.obj
* 
* 3. 연관된 obj를 묶어서 한 개의 파일로 배포 => .lib 파일
*    => 명령 프롬프트에서 "lib add.obj sub.obj /out:my.lib"
*	 => 리눅스: archive add.o sub.o
* 라이브러리는 obj는 묶은 것. 왜? 배포하기 편하라고
*	 => 사용자는 설계자에게 2개의 헤더 (add.h, sub.h)와 1개의 라이브러리(my.lib)를 받아야 함
*		(헤더를 한개로 묶기도 함)
*	 cl main2. /c	main 컴파일
*	 link main2.obj my.lib
* 
*	 또는 아래처럼 한줄로!!
*	 cl main2.c my.lib
* 
*    구글 C zib library
*/

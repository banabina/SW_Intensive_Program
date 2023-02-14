#include <stdio.h>
#include "add.h"

int main()
{
	int ret = add(1, 2);

	printf("result = %d\n", ret);
}

/*
* 1. main.c와 add.c 를 만들고 저장
* 
* 2. cl main.c 빌드해서 에러 읽어보기 => add 찾을 수 없다.
*    cl add.c 빌드해서 에러 읽어보기 => 진입점이 없다. (main이 없다는 것)
* 
* 3. 링크 하지 말고 컴파일만 수행하기
*    cl main.c /c		=> main.obj 생성됨
*    cl add.c /c		=> add.obj 생성됨
* 
* 컴파일러는 파일 별로 따로 컴파일해서 오브젝트 파일을 생성
* 
* 4. 링크 하기
*	link main.obj add.obj  => main.exe로 생성됨
*							  main 함수가 있는 object 이름
*							  모든 object 중에 오직 한개만 main이 있어야 함.
* 
* 5. 위 과정을 편리하게 하려면 아래 처럼 하면 됨
*   cl main.c add.c
*/
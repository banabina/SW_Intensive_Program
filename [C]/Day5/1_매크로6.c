// 파일구조가 복잡하면 헤더 파일이 2번 include 될수있습니다
#include "helper.h"
#include "helper.h"


#ifndef HELPER_H
#define HELPER_H

#define WIDTH	10
#define HEIGHT	10

int add(int a, int b) { return a + b; }

#endif


#ifndef HELPER_H
#define HELPER_H

#define WIDTH	10
#define HEIGHT	10

int add(int a, int b) { return a + b; }

#endif



int board[WIDTH][HEIGHT] = { 0 };

int main()
{
}
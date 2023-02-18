#include <stdio.h>
#include <string.h>

int main()
{
	// 1. 한글은 어떻게 해야 할까 ?
	// SBCS : Single Byte Char Set
	// DBCS : Double Byte Char Set ( 영어 1바이트, 한글 2바이트)
	// 현재 아래 코드가 DBCS
	char s[] = "ABCD가나다라";

	printf("%d, %d\n", sizeof(s), strlen(s)); // 13, 12

	printf("%d, %d, %d, %d\n", s[3], s[4], s[5], s[6]);
							// 68(D) 220

}
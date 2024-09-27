//put.c
#include <stdio.h>

int main(void)
{
	char* name = "Aaron";

	// 문자 출력
	putc(name, stdout);
	putchar(10);
	putchar(name); // => putc(name, stdout);
	
	putchar(10);
	putchar(65);
	putchar(97);
	putchar(10);

	// 문자열 출력
	puts(name);
	puts("65");
	puts("97");
	puts("10");

	printf(name);

	return 0;
}
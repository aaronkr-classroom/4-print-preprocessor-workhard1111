//put2.c
#include <stdio.h>

#define MESSAGE "Hello, World" // 세미콜론 없다

int main(void)
{
	// 1. puts()
	puts("Using puts() : ");
	puts(MESSAGE); // puts() 상용할 때 자동으로 줄바꿈 있음

	// 2.putchar()
	puts("\nUsing putchar() : ");
	for (int i = 0; MESSAGE[i] != '\0'; i++)
	{
		putchar(MESSAGE[i]);
	}
	putchar('\n'); // putchar() 사용할 때 줄바꿈 없음

	// 3. putc()
	puts("\nUsing putc() : ");
	for (int i = 0; MESSAGE[i] != '\0'; i++)
	{
		putc(MESSAGE[i], stdout);
	}
	putc('\n', stdout); //putc() 사용할 때 줄바꿈 없음

	return 0;
}
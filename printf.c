//printf.c
#include <stdio.h>

int main(void)
{
	int data1 = -1;
	unsigned int data2 = 4294967295;
	printf("%d, %u, %d, %u", data1, data1, data2, data2);

	return 0;
}
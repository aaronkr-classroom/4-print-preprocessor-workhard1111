// calc_main.c
#include <stdio.h>
#include "calc.h"

int main(void)
{
	double x = 2, y = 0;


	printf("x: %.1f + y: %.1f = %.1f\n", x, y, sum(x, y));

	printf("x: %.1f - y: %.1f = %.1f\n", x, y, sub(x, y));

	printf("x: %.1f * y: %.1f = %.1f\n", x, y, mul(x, y));

	printf("x: %.1f / y: %.1f = %.6f\n", x, y, div(x, y));

	printf("x: %d %% y: %d = %d\n", (int)x, (int)y, rem((int)x, (int)y));

	// �߰� �κ�
	printf("x: %.1f ^ y: %.1f = %.1f", power(x, y));
	printf("sqrt of x: %.1f = %.1f", x, squareRoot(x));
	printf("area of x:.1f = %.1f", x, area0fCircle(x));
	printf("circ of x: %.1f = %.1f", x, circumference0fCircle(x));

	return 0;
}
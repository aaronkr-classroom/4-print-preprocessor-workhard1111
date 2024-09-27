#include <stdio.h>
// #include <math.h> // M_PI는 여기에 있어야 하지만 없으면
#include "calc.h" // 우리 만든 .h 함수
// 큰 따옴표를 사용해야함




//더하기
double sum(double value1, double value2)
{
	return value1 + value2;
}

// 빼기(sub())
double sub(double value1, double value2)
{
	return value1 - value2;
}

// 나머지
double  mul(double value1, double value2)
{
	return value1 * value2;
}

// 몫
double div(double value1, double value2)
{
	if (value2 != 0)
		return value1 / value2;
	else
	{
		printf("Error: Divide by 0!");
		return 0;
	}

}

// ������
int rem(int value1, int value2)
{
	if (value2 != 0)
		return value1 % value2;
	else
	{
		printf("Error: Divide by 0!");
		return 0;
	}
}

//����
double power(double base, double exponent)
{
	return pow(base, exponent);
}

//������
double squareRoot(double num)
{
	if (num >= 0)
		return sqrt(num); //math.h���� �ִ� sqrt()�Լ�
	else
	{
		printf("Error: Negative number!");
		return 1;
	}
}

//�κ�
double area0fCircle(double radius)
{
	return M_PI * radius * radius; //M_PI �����ؾ���
}

//�ѷ�
double circumference0fCircle(double radius)
{
	return 2 * M_PI * radius;
}
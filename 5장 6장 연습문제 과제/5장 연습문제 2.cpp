#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	double kilogram;

	printf("���Ը� �Է��Ͻÿ�(kg): ");
	scanf("%lf", &kilogram);

	printf("%.3lf �Ŀ��", kilogram * 0.453592);

	return 0;

}
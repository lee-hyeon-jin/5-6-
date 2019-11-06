#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	double kilogram;

	printf("무게를 입력하시오(kg): ");
	scanf("%lf", &kilogram);

	printf("%.3lf 파운드", kilogram * 0.453592);

	return 0;

}
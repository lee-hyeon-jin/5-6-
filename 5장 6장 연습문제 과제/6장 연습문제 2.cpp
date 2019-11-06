#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	double a, b;

	printf("두 실수 입력: ");
	scanf("%lf %lf", &a, &b);

	int number;

	printf("연산종류 번호선택 1(+), 2(-), 3(*), 4(/): ");
	scanf("%d", &number);


	if (number == 1)
		printf("%.2lf + %.2lf = %.2lf", a, b, a + b);
	else if (number == 2)
		printf("%.2lf - %.2lf = %.2lf", a, b, a - b);
	else if (number == 3)
		printf("%.2lf * %.2lf = %.2lf", a, b, a * b);
	else if (number == 4)
		printf("%.2lf / %.2lf = %.2lf", a, b, a / b);
	else
		printf("연산번호를 잘못 입력하셨습니다.\n");

	return 0;
}
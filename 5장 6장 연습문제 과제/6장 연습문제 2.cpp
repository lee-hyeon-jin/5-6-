#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	double a, b;

	printf("�� �Ǽ� �Է�: ");
	scanf("%lf %lf", &a, &b);

	int number;

	printf("�������� ��ȣ���� 1(+), 2(-), 3(*), 4(/): ");
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
		printf("�����ȣ�� �߸� �Է��ϼ̽��ϴ�.\n");

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int a, b;

	printf("�� ������ �Է��Ͻÿ�: ");
	scanf("%d %d", &a, &b);

	if (a > b)
		if (b == 0)
			printf("0���� ���� �� �����.");
		else
			printf("%d, %d", a / b, a % b);
	else if (a < b)
		if (b == 0)
			printf("0���� ���� �� �����.");
		else
			printf("%d, %d", b / a, b % a);
	else
		printf("1, 0");

	return 0;
}

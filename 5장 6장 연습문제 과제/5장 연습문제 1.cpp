#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int a, b;

	printf("두 정수를 입력하시오: ");
	scanf("%d %d", &a, &b);

	if (a > b)
		if (b == 0)
			printf("0으로 나눌 수 없어요.");
		else
			printf("%d, %d", a / b, a % b);
	else if (a < b)
		if (b == 0)
			printf("0으로 나눌 수 없어요.");
		else
			printf("%d, %d", b / a, b % a);
	else
		printf("1, 0");

	return 0;
}

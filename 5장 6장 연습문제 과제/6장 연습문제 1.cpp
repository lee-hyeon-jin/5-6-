#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int angle;

	printf("������ �Է��Ͻÿ�(0-360): ");
	scanf("%d", &angle);

	if (angle == 0)
		printf("���� X��");
	else if (angle > 0 and angle < 90)
		printf("1��и�");
	else if (angle == 90)
		printf("���� Y��");
	else if (angle > 90 and angle < 180)
		printf("2��и�");
	else if (angle == 180)
		printf("���� X��");
	else if (angle > 180 and angle < 270)
		printf("3��и�");
	else if (angle == 90)
		printf("���� Y��");
	else if (angle > 270 and angle < 360)
		printf("4��и�");
	else
		printf("�ش����� �ʽ��ϴ�.");

	return 0;
}
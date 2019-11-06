#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int angle;

	printf("각도를 입력하시오(0-360): ");
	scanf("%d", &angle);

	if (angle == 0)
		printf("양의 X축");
	else if (angle > 0 and angle < 90)
		printf("1사분면");
	else if (angle == 90)
		printf("양의 Y축");
	else if (angle > 90 and angle < 180)
		printf("2사분면");
	else if (angle == 180)
		printf("음의 X축");
	else if (angle > 180 and angle < 270)
		printf("3사분면");
	else if (angle == 90)
		printf("음의 Y축");
	else if (angle > 270 and angle < 360)
		printf("4사분면");
	else
		printf("해당하지 않습니다.");

	return 0;
}
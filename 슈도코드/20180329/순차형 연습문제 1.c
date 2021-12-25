#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	printf("201844082 박훈희");
	int c, d; // a = 기본 요금, b = 가산 요금, c = 주행 거리, d = 주행 요금
	scanf("%d", &d);
	c = (d - 3000) / 600 * 400 + 2000; //주행 요금 = (주행 요금 - 기본요금) / 가산 요금 * 가산 거리 +기본 거리
	printf("%d", c);
}
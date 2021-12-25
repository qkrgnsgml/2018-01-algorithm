#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	printf("201844082 박훈희");
	float a, b, c, d, e, f; // a = 가로의 비, b = 세로의 비, c = 실습실의 둘레, d = 실습실의 넓이, e = 가로, f = 세로
	scanf("%f", &a);
	scanf("%f", &b);
	scanf("%f", &c);
	e = c / 2 * a / (a + b); // 가로 = 실습실의 둘레 / 2 * 가로의 비 / (가로의 비 + 세로의 비)
	f = c / 2 * b / (a + b); // 세로 = 실습실의 둘레 / 2 * 세로의 비 / (가로의 비 + 세로의 비)
	d = e * f;  // 실습실의 넓이 = 가로 * 세로
	printf("%f", d);
}
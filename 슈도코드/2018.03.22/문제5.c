#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	float h, r, C, A, v; // h는 높이 r은 반지름 C는 원 둘레 A는 원 넓이 v는 원뿔의 부피
	scanf("%f %f", &h, &r);
	C = 2 * 3.14 * r;
	A = 3.14 * r * r;
	v = 0.333 * r * r * h;
	printf("%f %f %f \n", C, A, v);
}
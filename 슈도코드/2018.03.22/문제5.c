#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	float h, r, C, A, v; // h�� ���� r�� ������ C�� �� �ѷ� A�� �� ���� v�� ������ ����
	scanf("%f %f", &h, &r);
	C = 2 * 3.14 * r;
	A = 3.14 * r * r;
	v = 0.333 * r * r * h;
	printf("%f %f %f \n", C, A, v);
}
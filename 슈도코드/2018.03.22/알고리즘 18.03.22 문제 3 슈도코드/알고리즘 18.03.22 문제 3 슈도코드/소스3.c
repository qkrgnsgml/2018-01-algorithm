#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	float a = 6; //���� ���α��� = a
	float b = 1.667; //���� ���α��� =b
	float p = 1.333; //���Ե� ����Ʈ�� = p
	float x, y; //1L�� ����Ʈ�� ĥ�� ���� ���� = x, 1m�� ���� ĥ�ϴµ� �� ����Ʈ�� �� = y
	int c = a*b; // ���� ���� = c
	x = c / p;
	y = p / c;
	printf("1L�� ����Ʈ�� ĥ�� ���� ���� : %f \n", x);
	printf("1m�� ���� ĥ�ϴµ� �� ����Ʈ�� �� : %f \n", y);
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	printf("201844082 ������");
	int x, y, z, a, b, c, d;
	scanf("%d", &x);
	scanf("%d", &y);
	scanf("%d", &z);
	a = (x > y) ? x : y; // x, y�߿� ū �� a
	b = (a > z) ? a : z; // ���� ū �� b
	c = (x < y) ? x : y; // x, y�߿� ���� �� c
	d = (c < z) ? c : z; // ���� ���� �� d
	if (b > x && x > d) // x �� �߰����ϋ�
	{
		printf("1��°�� ū ���� %d�̰� 2��°�� ū ���� %d�̰� ���� ���� ���� %d�̴�.", b, x, d);
	}
	else if (b > y && y > d) // y�� �߰����ϋ�
	{
		printf("1��°�� ū ���� %d�̰� 2��°�� ū ���� %d�̰� ���� ���� ���� %d�̴�.", b, y, d);
	}
	else if (b > z && z > d) // z�� �߰����ϋ�
	{
		printf("1��°�� ū ���� %d�̰� 2��°�� ū ���� %d�̰� ���� ���� ���� %d�̴�.", b, z, d);
	}
}
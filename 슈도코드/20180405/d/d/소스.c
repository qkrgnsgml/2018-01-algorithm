#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	printf("201844082 ������");
	int x, y, z;
	scanf("%d", &x);
	scanf("%d", &y);
	scanf("%d", &z);
	if (x > y && y > z)
	{
		printf("1��°�� ū ���� %d�̰� 2��°�� ū ���� %d�̰� ���� ���� ���� %d�̴�.", x, y, z);
	}
	else if (x > z&&  z > y)
	{
		printf("1��°�� ū ���� %d�̰� 2��°�� ū ���� %d�̰� ���� ���� ���� %d�̴�.", x, z, y);
	}
	else if (y > z&&z > x)
	{
		printf("1��°�� ū ���� %d�̰� 2��°�� ū ���� %d�̰� ���� ���� ���� %d�̴�.", y, z, x);
	}
	else if (y > x && x > z)
	{
		printf("1��°�� ū ���� %d�̰� 2��°�� ū ���� %d�̰� ���� ���� ���� %d�̴�.", y, x, z);
	}
	else if (z > y && y > x)
	{
		printf("1��°�� ū ���� %d�̰� 2��°�� ū ���� %d�̰� ���� ���� ���� %d�̴�.", z, y, x);
	}
	else if (z > x&&x > y)
		printf("1��°�� ū ���� %d�̰� 2��°�� ū ���� %d�̰� ���� ���� ���� %d�̴�.", z, x, y);
}
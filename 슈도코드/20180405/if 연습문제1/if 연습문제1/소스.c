#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	printf("201844082 ������");
	int x, y, z;
	scanf("%d", &x);
	scanf("%d", &y);
	scanf("%d", &z);
	if (x > y) // x>y
	{
		if (x > z)
		{
			if (y > z)// x>y>z
			{
				printf("1��°�� ū ���� %d�̰� 2��°�� ū ���� %d�̰� ���� ���� ���� %d�̴�.", x, y, z);
			}
			else// x>z>y
				printf("1��°�� ū ���� %d�̰� 2��°�� ū ���� %d�̰� ���� ���� ���� %d�̴�.", x, z, y);
		}
		else// z>x>y
		{
			printf("1��°�� ū ���� %d�̰� 2��°�� ū ���� %d�̰� ���� ���� ���� %d�̴�.", z, x, y);
		}
	}
	else//x < y
	{
		if (y > z) // y>z
		{
			if (x > z) // y>x>z
			{
				printf("1��°�� ū ���� %d�̰� 2��°�� ū ���� %d�̰� ���� ���� ���� %d�̴�.", y, x, z);
			}
			else// y>z>x
				printf("1��°�� ū ���� %d�̰� 2��°�� ū ���� %d�̰� ���� ���� ���� %d�̴�.", y, z, x);
		}
		else
		{
			printf("1��°�� ū ���� %d�̰� 2��°�� ū ���� %d�̰� ���� ���� ���� %d�̴�.", z, y, x);
		}
	}
}
	
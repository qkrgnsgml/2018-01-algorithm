#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	printf("201844082 박훈희");
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
				printf("1번째로 큰 수는 %d이고 2번째로 큰 수는 %d이고 가장 작은 수는 %d이다.", x, y, z);
			}
			else// x>z>y
				printf("1번째로 큰 수는 %d이고 2번째로 큰 수는 %d이고 가장 작은 수는 %d이다.", x, z, y);
		}
		else// z>x>y
		{
			printf("1번째로 큰 수는 %d이고 2번째로 큰 수는 %d이고 가장 작은 수는 %d이다.", z, x, y);
		}
	}
	else//x < y
	{
		if (y > z) // y>z
		{
			if (x > z) // y>x>z
			{
				printf("1번째로 큰 수는 %d이고 2번째로 큰 수는 %d이고 가장 작은 수는 %d이다.", y, x, z);
			}
			else// y>z>x
				printf("1번째로 큰 수는 %d이고 2번째로 큰 수는 %d이고 가장 작은 수는 %d이다.", y, z, x);
		}
		else
		{
			printf("1번째로 큰 수는 %d이고 2번째로 큰 수는 %d이고 가장 작은 수는 %d이다.", z, y, x);
		}
	}
}
	
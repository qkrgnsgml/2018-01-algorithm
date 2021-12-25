#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	printf("201844082 박훈희");
	int x, y, z;
	scanf("%d", &x);
	scanf("%d", &y);
	scanf("%d", &z);
	if (x > y && y > z)
	{
		printf("1번째로 큰 수는 %d이고 2번째로 큰 수는 %d이고 가장 작은 수는 %d이다.", x, y, z);
	}
	else if (x > z&&  z > y)
	{
		printf("1번째로 큰 수는 %d이고 2번째로 큰 수는 %d이고 가장 작은 수는 %d이다.", x, z, y);
	}
	else if (y > z&&z > x)
	{
		printf("1번째로 큰 수는 %d이고 2번째로 큰 수는 %d이고 가장 작은 수는 %d이다.", y, z, x);
	}
	else if (y > x && x > z)
	{
		printf("1번째로 큰 수는 %d이고 2번째로 큰 수는 %d이고 가장 작은 수는 %d이다.", y, x, z);
	}
	else if (z > y && y > x)
	{
		printf("1번째로 큰 수는 %d이고 2번째로 큰 수는 %d이고 가장 작은 수는 %d이다.", z, y, x);
	}
	else if (z > x&&x > y)
		printf("1번째로 큰 수는 %d이고 2번째로 큰 수는 %d이고 가장 작은 수는 %d이다.", z, x, y);
}
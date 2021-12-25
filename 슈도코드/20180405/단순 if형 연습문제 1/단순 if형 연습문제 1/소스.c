#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	printf("201844082 박훈희");
	int x, y, z, a, b, c, d;
	scanf("%d", &x);
	scanf("%d", &y);
	scanf("%d", &z);
	a = (x > y) ? x : y; // x, y중에 큰 수 a
	b = (a > z) ? a : z; // 가장 큰 수 b
	c = (x < y) ? x : y; // x, y중에 작은 수 c
	d = (c < z) ? c : z; // 가장 작은 수 d
	if (b > x && x > d) // x 가 중간값일떄
	{
		printf("1번째로 큰 수는 %d이고 2번째로 큰 수는 %d이고 가장 작은 수는 %d이다.", b, x, d);
	}
	else if (b > y && y > d) // y가 중간값일떄
	{
		printf("1번째로 큰 수는 %d이고 2번째로 큰 수는 %d이고 가장 작은 수는 %d이다.", b, y, d);
	}
	else if (b > z && z > d) // z가 중간값일떄
	{
		printf("1번째로 큰 수는 %d이고 2번째로 큰 수는 %d이고 가장 작은 수는 %d이다.", b, z, d);
	}
}
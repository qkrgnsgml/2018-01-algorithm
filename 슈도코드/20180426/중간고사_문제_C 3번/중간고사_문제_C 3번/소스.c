#include <stdio.h>

void main()
{
	printf("201844082������ \n");
	int x, y;
	scanf_s("%d %d", &x, &y);
	if ((170 <= x && x <= 190) && (30 <= y && y <= 130))
	{
		printf("�������1\n");
	}
	else if ((20 <= x && x <= 40) && (80 <= y && y <= 180))
	{
		printf("�������2\n");
	}
	else
	{
		printf("����\n");
	}
}
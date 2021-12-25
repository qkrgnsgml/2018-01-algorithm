#include <stdio.h>

void main()
{
	printf("201844082¹ÚÈÆÈñ \n");
	int x, y;
	scanf_s("%d %d", &x, &y);
	if ((170 <= x && x <= 190) && (30 <= y && y <= 130))
	{
		printf("»ó´ëÆÀ¿ø1\n");
	}
	else if ((20 <= x && x <= 40) && (80 <= y && y <= 180))
	{
		printf("»ó´ëÆÀ¿ø2\n");
	}
	else
	{
		printf("½ÇÆÐ\n");
	}
}
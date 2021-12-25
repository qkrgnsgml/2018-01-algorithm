#include <stdio.h>

void main()
{
	printf("201844082¹ÚÈÆÈñ\n");
	int x, y;
	scanf_s("%d", &x);
	scanf_s("%d",&y);
	if ((x > 30 && x < 60) && (y > 30 && y < 60))
		printf("¾ÛÀÌ ½ÇÇàµÊ\n");
	else
		printf("¾ÛÀÌ ½ÇÇà¾ÈµÊ\n");
}
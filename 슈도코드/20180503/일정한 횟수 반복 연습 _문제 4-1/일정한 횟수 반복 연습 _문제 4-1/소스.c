#include <stdio.h>

void main()
{
	printf("201844082¹ÚÈÆÈñ\n");
	int start, num, min, max,i;
	scanf_s("%d", &start);
	min = start;
	max = start;
	for (i = 1; i < 10; i = i + 1)
	{
		scanf_s("%d", &num);
		if (max < num)
		{
			max = num;
		}
		if (min > num)
		{
			min = num;
		}
	}
	printf("%d,%d", max, min);
}
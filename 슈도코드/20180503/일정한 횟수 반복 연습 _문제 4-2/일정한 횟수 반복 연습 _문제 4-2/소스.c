#include <stdio.h>

void main()
{
	printf("201844082¹ÚÈÆÈñ\n");
	int num, min, max, i; // ¹üÀ§ 0~10000
	min = 10000;
	max = 0;
	for (i = 1; i <= 10; i = i + 1)
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
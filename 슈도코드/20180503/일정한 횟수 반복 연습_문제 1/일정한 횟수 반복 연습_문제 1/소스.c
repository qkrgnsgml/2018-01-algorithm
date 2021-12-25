#include <stdio.h>

void main()
{
	printf("201844082박훈희\n");
	int i, sum = 0;
	for (i = 3; i <= 10; i = i + 3)
	{
		sum = sum + i;
	}
	printf("3의 배수의 합은 %d이다.", sum);
}
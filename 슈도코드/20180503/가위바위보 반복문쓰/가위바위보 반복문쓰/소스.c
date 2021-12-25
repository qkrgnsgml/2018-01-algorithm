#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void main()
{
	printf("201844082¹ÚÈÆÈס \n 0: °¡À§ 1: ¹ÙÀ§: 2: ÷¸\n"); // 1ÀÌ 0 ÀÌ±ט 2°¡ 1 ÀÌ±ט 2°¡ 0 Áü
	int user, i,j;
	for (j = 1; j <= 5; j = j + 1)
	{
		scanf_s("%d", &user);
		srand((unsigned)time(NULL));
		i = rand() % 3;
		printf("%d", i);
		if (user == i)
		{
			printf("{ ÷ס±ט }");
		}
		if (user == i + 1 || i == user + 2) //1ÀÌ 0 ÀÌ±ט 2°¡ 1 ÀÌ±ט, 0ÀÌ 2ÀÌ±ט
		{
			printf("{ »ח¿כÀÚ½Â }");
		}
		if (i == user + 1 || user == i + 2)
		{
			printf("{ ÄÄ½Â }"); //1ÀÌ 0 ÀÌ±ט 2°¡ 1 ÀÌ±ט, 0ÀÌ 2ÀÌ±ט
		}
	}
}
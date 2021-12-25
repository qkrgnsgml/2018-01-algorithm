#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	printf("201844082 박훈희\n");
	printf("수영기록을 입력해주세요\n");
	int min = 220, s;
	float max = 2.45, n;
	scanf("%d", &s);
	if (min > s)
	{
		min = s;
		printf("갱신된 수영기록은 %d입니다. \n", min);
	}
	printf("높이뛰기기록을 입력해주세요\n");
	scanf("%f", &n);
	if (n > max)
	{
		max = n;
		printf("갱신된 높이뛰기 기록은 %f입니다. \n", max);
	}
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	printf("201444092 이건우\n");
	int weight, force;
	float speed;
	scanf("%d", &weight);
	scanf("%d", &force);
	scanf("%f", &speed);
	if (speed <= 4.5 && weight >= 80 && force >= 500)
		printf("배영, 자유형, 잠영");
	else if (speed <= 5.0 && weight >= 70 && force >= 300)
		printf("자유형, 잠영");
	else if (speed <= 6.0 && (weight >= 50 && force >= 200))
		printf("잠영");
	else
		printf("가능한 종목이 없습니다.\n");
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	printf("201444092 �̰ǿ�\n");
	int weight, force;
	float speed;
	scanf("%d", &weight);
	scanf("%d", &force);
	scanf("%f", &speed);
	if (speed <= 4.5 && weight >= 80 && force >= 500)
		printf("�迵, ������, �῵");
	else if (speed <= 5.0 && weight >= 70 && force >= 300)
		printf("������, �῵");
	else if (speed <= 6.0 && (weight >= 50 && force >= 200))
		printf("�῵");
	else
		printf("������ ������ �����ϴ�.\n");
}
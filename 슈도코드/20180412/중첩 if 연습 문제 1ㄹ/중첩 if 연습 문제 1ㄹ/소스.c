#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	printf("201844082 ������ \n");
	int weight, force;
	float speed;
	scanf("%f", &speed);
	scanf("%d", &weight);
	scanf("%d", &force);
	if (speed <= 4.5 && weight >= 50 && force >= 200) //�迵
	{
		printf("�迵\n");
		if (weight >= 70 && force >= 300) //�迵,������
		{
			printf("������\n");
		}
		if (weight >= 80 && force >= 500) //�迵, ������, �῵
		{
			printf("�῵\n");
		}
	}
	else  if (speed <= 5.0 && weight >= 70 && force >= 300) //������
	{
		printf("������\n");
		if (speed <= 4.5 ) // ������, �迵
		{
			printf("�迵\n");
		}
		if ( weight >= 80 && force >= 500)  // ������ �迵 �῵
		{
			printf("�῵\n");
		}

	}
	else if (speed <= 6.0 && weight >= 80 && force >= 500)  //�῵
	{
		printf("�῵\n");
		if (speed <= 5.0) 
		{
			printf("������\n"); //�῵, ������
		}
		if (speed <= 4.5)
		{
			printf("�迵\n"); //�῵, ������, �迵
		}
		
	}
	else
	{
		printf("������ ������ �����ϴ�.\n");
	}
}
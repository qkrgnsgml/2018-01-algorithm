#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	printf("201844082 ������");
	int select; 
	float temp, result; 
	scanf("%d", &select);
	scanf("%f", &temp);
	if (select == 1)
	{
		result = (temp - 32) / 1.8;
		printf("ȭ�� %f���� ������ %f�� �Դϴ�.", temp, result);
	}
	else //ȭ���ڵ�
	{
		result = (temp*1.8) + 32;
		printf("���� %f���� ȭ���� %f�� �Դϴ�.", temp, result);
	}	
}
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

void main()
{
	printf("201844082������\n");
	int gender; //���ڴ� 1 ���ڴ� 2
	float weight, height, bmi;
	printf("������ �Է��ϼ��� ��:1 ��:2 \n");
	scanf_s("%d", &gender);
	scanf_s("%f %f", &weight, &height);
	if (gender == 1)
	{
		bmi = (1.1*weight) - 128.0 * (weight / height);
	}
	else if (gender == 2) 
	{
		bmi = (1.07	*weight) - 128.0 * (weight / height); 
	}
	if (bmi < 18.5)
		{
			printf("��ü��");
		}
		else if (bmi > 18.5 && bmi<23.0)
		{
			printf("����ü��");
		}
		else
		{
			printf("��ü��");
		}
}
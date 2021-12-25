#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

void main()
{
	printf("201844082박훈희\n");
	int gender; //남자는 1 여자는 2
	float weight, height, bmi;
	printf("성별을 입력하세요 남:1 여:2 \n");
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
			printf("저체중");
		}
		else if (bmi > 18.5 && bmi<23.0)
		{
			printf("정상체중");
		}
		else
		{
			printf("과체중");
		}
}
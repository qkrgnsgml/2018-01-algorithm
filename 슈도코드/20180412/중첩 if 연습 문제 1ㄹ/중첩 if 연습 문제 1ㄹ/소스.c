#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	printf("201844082 박훈희 \n");
	int weight, force;
	float speed;
	scanf("%f", &speed);
	scanf("%d", &weight);
	scanf("%d", &force);
	if (speed <= 4.5 && weight >= 50 && force >= 200) //배영
	{
		printf("배영\n");
		if (weight >= 70 && force >= 300) //배영,자유형
		{
			printf("자유형\n");
		}
		if (weight >= 80 && force >= 500) //배영, 자유형, 잠영
		{
			printf("잠영\n");
		}
	}
	else  if (speed <= 5.0 && weight >= 70 && force >= 300) //자유형
	{
		printf("자유형\n");
		if (speed <= 4.5 ) // 자유형, 배영
		{
			printf("배영\n");
		}
		if ( weight >= 80 && force >= 500)  // 자유형 배영 잠영
		{
			printf("잠영\n");
		}

	}
	else if (speed <= 6.0 && weight >= 80 && force >= 500)  //잠영
	{
		printf("잠영\n");
		if (speed <= 5.0) 
		{
			printf("자유형\n"); //잠영, 자유형
		}
		if (speed <= 4.5)
		{
			printf("배영\n"); //잠영, 자유형, 배영
		}
		
	}
	else
	{
		printf("가능한 종목이 없습니다.\n");
	}
}
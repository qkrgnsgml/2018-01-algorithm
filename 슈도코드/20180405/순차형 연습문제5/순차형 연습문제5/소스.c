#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void main()
{
	printf("201844082 박훈희 \n");
	int garo = 40, sero = 38, oil, time; // garo 가로 sero 세로 oil a에서 b가는데에 든 연료, time 걸린 시간
	float ab;
	ab = sqrt(garo * garo + sero * sero); //sqrt 는 루트
	oil = ab / 5;
	time = ab / 25;
	printf("A지점에서 B지점 까지 이동하는데에 %dL의 연료와 %d시간이 필요합니다\n", oil, time);
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	printf("201844082 박훈희");
	float tayul, bantayul, ban, tasu, antasu;
	int gob;
	scanf("%d", &antasu);
	scanf("%d", &tasu);
	tayul = antasu / tasu; //타율은 안타수를 타수로 나눔
	ban = tayul + 0.005; // ban은 타율을 반올림함, 둘째자리 반올림 할거면 3째자리에 5 더해줌
	gob = ban * 100; // 둘째자리에서 짜르기 위해 100곱해주고 int 해서 정수부분만 짜름
	bantayul = gob / 100.00; // 다시 나눠줌
	printf("이 선수의 타율은 %.2f이다", bantayul); //나옴 헿
}
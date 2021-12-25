#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	printf("201844082 박훈희");
	float c, e, d, a, b; // a = 타수, b = 안타수, c = 안타수/타수, d = c 셋째자리 반올림, e = 최종 반올림한 타율
	int f; // f = 반올림 한 것에 100곱 
	scanf("%d", &b);
	scanf("%d", &a);
	c = b / a; //타율은 안타수를 타수로 나눔
	d = c + 0.005; // ban은 타율을 반올림함, 둘째자리 반올림 할거면 3째자리에 5 더해줌
	f = d * 100; // 둘째자리에서 짜르기 위해 100곱해주고 int 해서 정수부분만 짜름
	e = gob / 100.00; // 다시 나눠줌
	printf("이 선수의 타율은 %f이다", e); //나옴 헿
}
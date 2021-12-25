#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	printf("201844082 박훈희 \n");
	int a = 31230, b = 37540, c = 13, d, e, f, g, h; //a = 출발시간 초단위, b = 도착시간 초단위, c = 지나치는 역, d = 걸린시간 초단위
	// e = 역 사이 평균 시간, f = 통학 시간의 시간, g = 통학시간의 분, h = 통학시간의 초
	d = b - a; 
	e = d / c;
	f = d / 3600; // 1시간은 3600이라 나눠주고
	g = (d - f * 3600) / 60; // 시간만큼 빼고 남은 값은 분 60 초로 나눠줌
	h = d % 60;
	printf("역사이의 평균시간은 %d초입니다.\n", e);
	printf("학교까지의 통학시간은 %d시간 %d분 %d초입니다.\n", f, g, h);
}
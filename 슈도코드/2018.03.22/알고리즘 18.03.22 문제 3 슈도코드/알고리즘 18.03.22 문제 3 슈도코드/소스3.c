#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	float a = 6; //벽의 가로길이 = a
	float b = 1.667; //벽의 세로길이 =b
	float p = 1.333; //투입된 페인트양 = p
	float x, y; //1L의 페인트로 칠한 벽의 넓이 = x, 1m의 벽을 칠하는데 들어간 페인트의 양 = y
	int c = a*b; // 벽의 넓이 = c
	x = c / p;
	y = p / c;
	printf("1L의 페인트로 칠한 벽의 넓이 : %f \n", x);
	printf("1m의 벽을 칠하는데 들어간 페인트의 양 : %f \n", y);
}
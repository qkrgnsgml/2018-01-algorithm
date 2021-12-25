#include <stdio.h>

void main()
{
	printf("201844082 박훈희\n");
	float a, b, c, d; //a는 알고리즘, b는 C, c는 정통, d는 평균
	int T;
	scanf_s("%f %f %f %d\n", &a, &b, &c, &T);
	d = a + b + c / 3.0;
	if ((0.0 <= a && a <= 4.5) && (0.0 <= b && b <= 4.5) && (0.0 <= c && c <= 4.5) && (0 <= T && T <= 990))
	{
		printf("%f %f %f %d\n", a, b, c, T);
	}
	else
	{
		printf("입력 오류\n");
	}
	if (d >= 4.0 || d >= 3.5 && T >= 550)
	{
		printf("장학생선정\n");
	}
	else
	{
		printf("장학생 미선정\n");
	}
}
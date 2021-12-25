#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	printf("201844082¹ÚÈÆÈñ");
	int  a, b, c, d,T; //a = ÇÊ±â, b = ¸éÁ¢, c = ÇÐÁ¡, d = Æò±Õ, T = ÅäÀÍ
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	scanf("%d", &T);
	d = (a + b + c) / 3.0;
	if (d >= 80 || T >= 550)
		printf("ÇÕ°Ý\n");
}
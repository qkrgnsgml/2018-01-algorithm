#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	printf("201844082 ¹ÚÈÆÈñ");
	int select; 
	float temp, result; 
	scanf("%d", &select);
	scanf("%f", &temp);
	if (select == 1)
	{
		result = (temp - 32) / 1.8;
		printf("È­¾¾ %fµµ´Â ¼·¾¾·Î %fµµ ÀÔ´Ï´Ù.", temp, result);
	}
	else //È­¾¾ÄÚµå
	{
		result = (temp*1.8) + 32;
		printf("¼·¾¾ %fµµ´Â È­¾¾·Î %fµµ ÀÔ´Ï´Ù.", temp, result);
	}	
}
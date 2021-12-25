#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void main()
{
	printf("201444092ÀÌ°Ç¿ì \n"); 
	printf("0: °¡À§ 1: ¹ÙÀ§: 2º¸\n");
	int user, pc;
	scanf("%d", &user);
	srand((unsigned)time(NULL));
	pc = rand() % 3;
	printf("%d", pc);
	if (user == pc)
	{
		printf("{ ºñ±è }");
	}
	if (user == pc + 1 || pc == user + 2)
	{
		printf("{ »ç½Â }");
	}
	if (pc == user + 1 || user == pc + 2)
	{
		printf("{ ÄÄ½Â }"); 
	}
}
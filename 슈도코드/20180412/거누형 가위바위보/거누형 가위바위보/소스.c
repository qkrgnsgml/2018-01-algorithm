#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void main()
{
	printf("201444092�̰ǿ� \n"); 
	printf("0: ���� 1: ����: 2��\n");
	int user, pc;
	scanf("%d", &user);
	srand((unsigned)time(NULL));
	pc = rand() % 3;
	printf("%d", pc);
	if (user == pc)
	{
		printf("{ ��� }");
	}
	if (user == pc + 1 || pc == user + 2)
	{
		printf("{ ��� }");
	}
	if (pc == user + 1 || user == pc + 2)
	{
		printf("{ �Ľ� }"); 
	}
}
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void main()
{
	printf("201844082������ \n 0: ���� 1: ����: 2: ��\n"); // 1�� 0 �̱� 2�� 1 �̱� 2�� 0 ��
	int user, i,j;
	for (j = 1; j <= 5; j = j + 1)
	{
		scanf_s("%d", &user);
		srand((unsigned)time(NULL));
		i = rand() % 3;
		printf("%d", i);
		if (user == i)
		{
			printf("{ ��� }");
		}
		if (user == i + 1 || i == user + 2) //1�� 0 �̱� 2�� 1 �̱�, 0�� 2�̱�
		{
			printf("{ ����ڽ� }");
		}
		if (i == user + 1 || user == i + 2)
		{
			printf("{ �Ľ� }"); //1�� 0 �̱� 2�� 1 �̱�, 0�� 2�̱�
		}
	}
}
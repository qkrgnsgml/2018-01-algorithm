#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//����ڷκ��� ���������� �Է�(0���� 1 ���� 2��)
	//��ǻ�Ͱ� �������� ���������� ���� rand() %3 =>0~2
	//����� = ���� && ��ǻ�� = ���� { ��� } ��� 9����
	//������ �� ����#include <time.h> <stdlib.h> 
	//srand((unsigned)time(NULL)); // �ð��� �̿��� seed�� ���
	// i = rand() %10 ; // 0~ 9���� ������ ���� ����
void main()
{
	printf("201844082������ \n 0: ���� 1: ����: 2: ��\n"); // 1�� 0 �̱� 2�� 1 �̱� 2�� 0 ��
	int user, i;
	scanf("%d", &user);
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
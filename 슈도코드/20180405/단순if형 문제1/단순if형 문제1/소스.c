#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int x; // x�� 1�̸� ȭ���� ������ �ٲٰ� , 2�� ������ ȭ���� �ٲ۴�
	float C, F; //ó���� �������پ˰� C ���� Fȭ�� �޴µ� ���ϱ� C�� �Է� �µ��� F�� �ٲ� �µ�....
	scanf("%d", &x);
	scanf("%f", &C);
	if (x == 1)
	{
		F = (C - 32) / 1.8;
		printf("ȭ�� %f���� ������ %f�� �Դϴ�.", C, F);
	}
	if (x == 2)
	{
		F = (C*1.8) + 32;
		printf("���� %f���� ȭ���� %f�� �Դϴ�.", C, F);
	}
}
#include <stdio.h>

void main()
{
	printf("201844082������\n");
	int x, y;
	scanf_s("%d", &x);
	scanf_s("%d",&y);
	if ((x > 30 && x < 60) && (y > 30 && y < 60))
		printf("���� �����\n");
	else
		printf("���� ����ȵ�\n");
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	printf("201844082 ������\n");
	printf("��������� �Է����ּ���\n");
	int min = 220, s;
	float max = 2.45, n;
	scanf("%d", &s);
	if (min > s)
	{
		min = s;
		printf("���ŵ� ��������� %d�Դϴ�. \n", min);
	}
	printf("���̶ٱ����� �Է����ּ���\n");
	scanf("%f", &n);
	if (n > max)
	{
		max = n;
		printf("���ŵ� ���̶ٱ� ����� %f�Դϴ�. \n", max);
	}
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	printf("201844082 ������");
	int c, d; // a = �⺻ ���, b = ���� ���, c = ���� �Ÿ�, d = ���� ���
	scanf("%d", &d);
	c = (d - 3000) / 600 * 400 + 2000; //���� ��� = (���� ��� - �⺻���) / ���� ��� * ���� �Ÿ� +�⺻ �Ÿ�
	printf("%d", c);
}
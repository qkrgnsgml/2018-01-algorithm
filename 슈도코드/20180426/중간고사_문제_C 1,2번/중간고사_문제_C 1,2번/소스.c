#include <stdio.h>

void main()
{
	printf("201844082 ������\n");
	float a, b, c, d; //a�� �˰���, b�� C, c�� ����, d�� ���
	int T;
	scanf_s("%f %f %f %d\n", &a, &b, &c, &T);
	d = a + b + c / 3.0;
	if ((0.0 <= a && a <= 4.5) && (0.0 <= b && b <= 4.5) && (0.0 <= c && c <= 4.5) && (0 <= T && T <= 990))
	{
		printf("%f %f %f %d\n", a, b, c, T);
	}
	else
	{
		printf("�Է� ����\n");
	}
	if (d >= 4.0 || d >= 3.5 && T >= 550)
	{
		printf("���л�����\n");
	}
	else
	{
		printf("���л� �̼���\n");
	}
}
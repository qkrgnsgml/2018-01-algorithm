#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void main()
{
	printf("201844082 ������ \n");
	int garo = 40, sero = 38, oil, time; // garo ���� sero ���� oil a���� b���µ��� �� ����, time �ɸ� �ð�
	float ab;
	ab = sqrt(garo * garo + sero * sero); //sqrt �� ��Ʈ
	oil = ab / 5;
	time = ab / 25;
	printf("A�������� B���� ���� �̵��ϴµ��� %dL�� ����� %d�ð��� �ʿ��մϴ�\n", oil, time);
}
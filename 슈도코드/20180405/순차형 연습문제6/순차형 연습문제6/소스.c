#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	printf("201844082 ������");
	float tayul, bantayul, ban, tasu, antasu;
	int gob;
	scanf("%d", &antasu);
	scanf("%d", &tasu);
	tayul = antasu / tasu; //Ÿ���� ��Ÿ���� Ÿ���� ����
	ban = tayul + 0.005; // ban�� Ÿ���� �ݿø���, ��°�ڸ� �ݿø� �ҰŸ� 3°�ڸ��� 5 ������
	gob = ban * 100; // ��°�ڸ����� ¥���� ���� 100�����ְ� int �ؼ� �����κи� ¥��
	bantayul = gob / 100.00; // �ٽ� ������
	printf("�� ������ Ÿ���� %.2f�̴�", bantayul); //���� �m
}
#include <stdio.h>

int main()
{
	printf("201844079 �ڿ��\n");
	int b, c;// b = ������, c = ��
	float a;// a = ���ǵ�
	printf("���ǵ�=");
	scanf_s("%f", &a);
	printf("������=");
	scanf_s("%d", &b);
	printf("��=");
	scanf_s("%d", &c);
	if (a <= 4.5 && b >= 50 && c >= 200)
	{
		printf("�迵\n");
		if (a <= 5.0 && b >= 70 && c >= 300) {
			printf("������\n");
		}
		if (a <= 6.0 && b >= 80 && c >= 500) {
			printf("�῵\n");
		}
	}
	else  if (a <= 5.0 && b >= 70 && c >= 300) {
		printf("������\n");
		if (a <= 4.5 && b >= 50 && c >= 200)
		{
			printf("�迵\n");
		}
		if (a <= 6.0 && b >= 80 && c >= 500) {
			printf("�῵\n");
		}

	}
	else if (a <= 6.0 && b >= 80 && c >= 500) {
		printf("�῵\n");
		if (a <= 4.5 && b >= 50 && c >= 200)
		{
			printf("�迵\n");
		}
		if (a <= 5.0 && b >= 70 && c >= 300) {
			printf("������\n");
		}

	}
	else
	{
		printf("������ ������ �����ϴ�.\n");
	}
	return 0;
}
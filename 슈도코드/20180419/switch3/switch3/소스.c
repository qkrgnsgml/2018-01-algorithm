#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	printf("201844095 ������\n");
	int a, b;
	char op;//p=4Ģ ������
	printf("������ �Է����ּ���");
	scanf("%d%c%d", &a, &op, &b);
	switch (op)
	{
	case '+':
		printf("%d\n", a + b);
		break;
	case '-':
		printf("%d\n", a - b);
		break;
	case '*':
		printf("%d\n", a * b);
		break;
	case '/':
		printf("%d\n", a / b);
		break;
	default:printf("ã�� �� ���� �������Դϴ�.\n");
	}
}
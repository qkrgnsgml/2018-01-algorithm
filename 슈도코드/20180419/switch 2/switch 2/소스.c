#include <stdio.h>

void main()
{
	printf("201844082������\n");
	int a, b, c;
	char o;
	scanf_s("%d%c%d", &a, &o, &b);
	switch (o)
	{
	case '+':
		printf("a + b = %d", a + b);
		break;
	case '-':
		printf("a - b = %d", a - b);
		break;
	case '*':
		printf("a * b = %d", a * b);
		break;
	case '/':
		printf("a / b = %d", a / b);
		break;
	default:printf("ã�� �� ���� �������Դϴ�.\n");
	}
}
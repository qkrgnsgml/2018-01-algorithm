#include <stdio.h>

void main()
{
	printf("201844082������\n");
	int a, b, c;
	char op;
	scanf_s("%d", &a);
	scanf_s("%c", &op);
	scanf_s("%d", &b);
	switch (op)
	{
	case '+':
		c = a + b;
		break;
	case '-':
		c = a - b;
		break;
	case '*':
		c = a * b;
		break;
	case '/':
		c = a / b;
		break;
	default:printf("ã�� �� ���� �������Դϴ�.\n");
	}
	printf("%d%c%d=%d\n", a, op, b, c);
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{
	printf("201844095 ������\n");
	int a, b, c;
	char o;//0=4Ģ ������
	printf("a�Է�");
	scanf("%d", &a);
	printf("o�Է�");
	scanf("%c", &o);
	printf("b�Է�");
	scanf("%d", &b);
	switch (o)
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
	}
	printf("%d%c%d=%d\n", a, o, b, c);
}
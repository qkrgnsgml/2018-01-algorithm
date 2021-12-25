#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{
	printf("201844095 정수현\n");
	int a, b, c;
	char o;//0=4칙 연산자
	printf("a입력");
	scanf("%d", &a);
	printf("o입력");
	scanf("%c", &o);
	printf("b입력");
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
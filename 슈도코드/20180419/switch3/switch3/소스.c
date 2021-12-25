#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	printf("201844095 정수현\n");
	int a, b;
	char op;//p=4칙 연산자
	printf("수식을 입력해주세요");
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
	default:printf("찾을 수 없는 연산자입니다.\n");
	}
}
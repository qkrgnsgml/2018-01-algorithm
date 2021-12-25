#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	printf("201844082 박훈희");
	printf("도서 종류입력하고 그 도서의 구입 수를 입력하세요");
	int x, y, z, a, b, c, d; //x는 도서의 종류 y는 총도서,z는 4가지 도서중 책 하나의 구입 수, a는 교양도서, b는 전공도서, c는 취업도서, d는 기타
	scanf("%d ", &x); // 1은 교양,전공도서 2는 취업,기타도서 
	scanf(" %d ", &z);
	if (x == 1)
		y = z * 100 / 30;
	a = y * 30 / 100;
	b = y * 30 / 100;
	c = y * 20 / 100;
		d = y * 20 / 100;
		if (x == 2)
			y = z * 100 / 20;
		a = y * 30 / 100;
		b = y * 30 / 100;
		c = y * 20 / 100;
		d = y * 20 / 100;
	printf("교양:%d\n전공:%d\n취업:%d\n기타:%d\n총:%d\n", a, b, c, d, y);
}
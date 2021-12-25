#include <stdio.h>

void main()
{
	printf("201844082박훈희 \n금액을 입력하세요\n");
	int a, b, c, d, e; // a는 돈 , b는 5만원권 ,c는 만원권, d는 5천원권, e는 천원권
	scanf_s("%d", &a);
	b = a / 50000;
	c = (a % 50000) / 10000;
	d = (a % 10000) / 5000;
	e = (a % 5000) / 1000;
	printf("5만원권:%d장 \n1만원권:%d장 \n5천원권:%d장 \n천원권:%d장 \n", b, c, d, e);
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int su1, su2, su3, temp;
	scanf("%d %d %d", &su1, &su2, &su3);
	temp = su3;
	su3 = su2;
	su2 = su1;
	su1 = temp;
	printf("%d %d %d,", su1, su2, su3);
}
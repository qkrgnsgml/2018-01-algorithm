#include<stdio.h>
#include<math.h>

void main() {
	int x = 5, y = 5;
	int x1 = 45, y1 = 43, L;
	double c = 0;
	int a = 0;
	a = (x1 - x)*(x1 - x) + (y1 - y)*(y1 - y);
	c = sqrt(a);
	L = c / 5;
	c /= 25;
	printf("���� �⸧�� : %d , �ɸ� �ð� : %03f", L, c);
}
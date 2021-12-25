#include <stdio.h>

void main()
{
	printf("201844082¹ÚÈÆÈñ\n");
	int i, n1, n2, temp, sum = 0;
	scanf_s("%d %d", &n1, &n2);
	if (n1 < n2)
	{
		temp = n2;
		n2 = n1;
		n1 = temp;
	}
	for (i = 1; i <= n2; i = i + 1)
	{
		sum = sum + n1;
	}
	printf("°ö:%d\n",sum);
}
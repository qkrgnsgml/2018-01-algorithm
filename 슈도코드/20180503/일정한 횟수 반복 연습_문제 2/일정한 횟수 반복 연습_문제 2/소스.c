#include <stdio.h>

void main()
{
	printf("201844082������\n");
	int cnt = 0, tot = 0, ave, num, i;
	for (i = 0; i < 10; i = i + 1)
	{
		scanf_s("%d", &num);
		if (num > 0)
		{
			tot = tot + num;
			cnt = cnt + 1;
		}
	}	
	ave = tot / cnt;
	printf("����� %d�̰� ������ %d�̴�.", ave, cnt);
}
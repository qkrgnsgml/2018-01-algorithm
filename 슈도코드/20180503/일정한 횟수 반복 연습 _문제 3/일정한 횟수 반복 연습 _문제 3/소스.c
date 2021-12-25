#include <stdio.h>

void main()	
{
	printf("201844082¹ÚÈÆÈñ\n");
	int num, i, flag = 0;
	scanf_s("%d", &num);
	for (i = 2; i < num; i = i + 1)
	{
			if (num%i == 0)
		{
			flag = 1;
			break;
		}
	}
	if(flag==1)
	{
		printf("¼Ò¼ö ¾Æ´Ô\n");
	}
	else
	{
		printf("¼Ò¼ö\n");
	}
}
#include <stdio.h>

void main()
{
	printf("201844082������\n");
	int cnt = 1, tot = 0, ave, num, i, a, max, min;
	printf("�Է¹��� �������� ����(�������� ����: 0~100):");
	scanf_s("%d", &a);
	max = 0;
	min = 101;
	for (i = 0; i < a; i = i + 1)
	{
		printf("%d�� �л��� ���� : ",cnt);
		scanf_s("%d", &num);
			tot = tot + num;
			cnt = cnt + 1;
			if (max < num)
			{
				max = num;
			}
			if (min > num)
			{
				min = num;
			}
	}
	ave = tot / cnt;
	printf("���:%d �ִ�:%d, �ּڰ�:%d.", ave, max, min);
}
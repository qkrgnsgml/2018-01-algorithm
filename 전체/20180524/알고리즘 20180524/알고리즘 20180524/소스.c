#include <stdio.h>

void main()
{
	printf("201844082박훈희\n");
	int cnt = 1, tot = 0, ave, num, i, a, max, min;
	printf("입력받을 데이터의 개수(데이터의 범위: 0~100):");
	scanf_s("%d", &a);
	max = 0;
	min = 101;
	for (i = 0; i < a; i = i + 1)
	{
		printf("%d번 학생의 성적 : ",cnt);
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
	printf("평균:%d 최댓값:%d, 최솟값:%d.", ave, max, min);
}
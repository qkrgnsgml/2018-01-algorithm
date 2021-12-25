#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int x; // x가 1이면 화씨를 섭씨로 바꾸고 , 2면 섭씨를 화씨로 바꾼다
	float C, F; //처음에 따로인줄알고 C 섭씨 F화씨 햇는데 보니까 C는 입력 온도고 F는 바뀐 온도....
	scanf("%d", &x);
	scanf("%f", &C);
	if (x == 1)
	{
		F = (C - 32) / 1.8;
		printf("화씨 %f도는 섭씨로 %f도 입니다.", C, F);
	}
	if (x == 2)
	{
		F = (C*1.8) + 32;
		printf("섭씨 %f도는 화씨로 %f도 입니다.", C, F);
	}
}
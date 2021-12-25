#include <stdio.h>

int main()
{
	printf("201844079 박용수\n");
	int b, c;// b = 몸무게, c = 힘
	float a;// a = 스피드
	printf("스피드=");
	scanf_s("%f", &a);
	printf("몸무게=");
	scanf_s("%d", &b);
	printf("힘=");
	scanf_s("%d", &c);
	if (a <= 4.5 && b >= 50 && c >= 200)
	{
		printf("배영\n");
		if (a <= 5.0 && b >= 70 && c >= 300) {
			printf("자유형\n");
		}
		if (a <= 6.0 && b >= 80 && c >= 500) {
			printf("잠영\n");
		}
	}
	else  if (a <= 5.0 && b >= 70 && c >= 300) {
		printf("자유형\n");
		if (a <= 4.5 && b >= 50 && c >= 200)
		{
			printf("배영\n");
		}
		if (a <= 6.0 && b >= 80 && c >= 500) {
			printf("잠영\n");
		}

	}
	else if (a <= 6.0 && b >= 80 && c >= 500) {
		printf("잠영\n");
		if (a <= 4.5 && b >= 50 && c >= 200)
		{
			printf("배영\n");
		}
		if (a <= 5.0 && b >= 70 && c >= 300) {
			printf("자유형\n");
		}

	}
	else
	{
		printf("가능한 종목이 없습니다.\n");
	}
	return 0;
}
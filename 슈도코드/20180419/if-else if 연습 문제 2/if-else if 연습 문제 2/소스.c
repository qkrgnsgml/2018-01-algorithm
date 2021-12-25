#include <stdio.h>

void main()
{
	printf("201844082 박훈희\n 성적은 알고리즘, C, 영어 순으로 입력하세요.\n");
	int a, b, c; // a 알고리즘, b C언어, c 영어 
	float d , e, f, g; // d 알고리즘 평점, e C언어 평점, f 영어 평점, g 총학점
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &c);
	switch (a / 5) 
	{
	case 20:
	case 19: d = 4.5; break;
	case 18: d = 4; break;
	case 17: d = 3.5; break;
	case 16: d = 3; break;
	case 15: d = 2.5; break;
	case 14: d = 2; break;
	case 13: d = 1.5; break;
	case 12: d = 1; break;
	default: d = 0; break;
	}
	switch (b / 5)
	{
	case 20:
	case 19: e = 4.5; break;
	case 18: e = 4; break;
	case 17: e = 3.5; break;
	case 16: e = 3; break;
	case 15: e = 2.5; break;
	case 14: e = 2; break;
	case 13: e = 1.5; break;
	case 12: e = 1; break;
	default: e = 0; break;
	}
	switch (c / 5)
	{
	case 20:
	case 19: f = 4.5; break;
	case 18: f = 4; break;
	case 17: f = 3.5; break;
	case 16: f = 3; break;
	case 15: f = 2.5; break;
	case 14: f = 2; break;
	case 13: f = 1.5; break;
	case 12: f = 1; break;
	default: f = 0; break;
	}
	g = (3 * d + 3 * e + 2 * f) / 8;
	printf("총 학점 = %f ", g);
}

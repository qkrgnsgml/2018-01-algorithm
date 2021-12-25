#include<stdio.h>

void main() 
{
	printf("201444092 이건우\n");
	int schoolTime, avg, hour, min, sec;
	int START = (3600 * 8) + (60 * 40) + 30;
	int ARRIVE = (3600 * 10) + (60 * 25) + 40;
	schoolTime = ARRIVE - START;
	avg = schoolTime / 13;
	hour = schoolTime / 3600;
	min = schoolTime % 3600 / 60;
	sec = schoolTime % 3600 % 60;
	printf("통학시간은 %d 시간 %d분 %d초입니다 \n", hour, min, sec);
	printf("역 사이의 평균시간은 %d초입니다.\n", avg);
}
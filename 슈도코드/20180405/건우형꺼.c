#include<stdio.h>

void main() 
{
	printf("201444092 �̰ǿ�\n");
	int schoolTime, avg, hour, min, sec;
	int START = (3600 * 8) + (60 * 40) + 30;
	int ARRIVE = (3600 * 10) + (60 * 25) + 40;
	schoolTime = ARRIVE - START;
	avg = schoolTime / 13;
	hour = schoolTime / 3600;
	min = schoolTime % 3600 / 60;
	sec = schoolTime % 3600 % 60;
	printf("���нð��� %d �ð� %d�� %d���Դϴ� \n", hour, min, sec);
	printf("�� ������ ��սð��� %d���Դϴ�.\n", avg);
}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void main() {
	printf("201444092 이건우\n");
	int student[3] = { 0,0,0 };
	int temp = 0;
	for (int i = 0; i<3; i++) {
		printf("%d번째 학생의 점수를 입력하시요", i + 1);
		scanf("%d", &student[i]);
	}
	for (int i = 0; i<2; i++) {
		if (student[i] < student[i + 1]) {
			temp = student[i];
			student[i] = student[i + 1];
			student[i + 1] = temp;
		}
	}

	for (int j = 0; j<3; j++) {
		printf("%3d", student[j]);
	}
}
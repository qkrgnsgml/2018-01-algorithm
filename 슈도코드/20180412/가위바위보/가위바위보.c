#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//사용자로부터 가위바위보 입력(0가위 1 바위 2보)
	//컴퓨터가 랜덤으로 가위바위보 생성 rand() %3 =>0~2
	//사용자 = 가위 && 컴퓨터 = 가위 { 비김 } 등등 9가지
	//임의의 수 생성#include <time.h> <stdlib.h> 
	//srand((unsigned)time(NULL)); // 시간을 이용한 seed값 사용
	// i = rand() %10 ; // 0~ 9까지 임의의 정수 생성
void main()
{
	printf("201844082박훈희 \n 0: 가위 1: 바위: 2: 보\n"); // 1이 0 이김 2가 1 이김 2가 0 짐
	int user, i;
	scanf("%d", &user);
	srand((unsigned)time(NULL)); 
	i = rand() % 3;
	printf("%d", i);
	if (user == i)
	{
		printf("{ 비김 }");
	}
	if (user == i + 1 || i == user + 2) //1이 0 이김 2가 1 이김, 0이 2이김
	{
		printf("{ 사용자승 }");
	}
	if (i == user + 1 || user == i + 2)
	{
		printf("{ 컴승 }"); //1이 0 이김 2가 1 이김, 0이 2이김
	}
}
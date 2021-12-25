#include <stdio.h>

void main()
{
	printf("201844082박훈희\n");
	int gibu[7] = { 0 }, i, min = 40001, max = 0, sum = 0, max2, min2, avg; //2. 변수선언 
	for (i = 0; i < 7; i++)//3. 반복문 시작 
	{
		scanf_s("%d", &gibu[i]);//3.1.1 scanf gibu[i]
		if (gibu[i] >= 200) { gibu[i] = 200; }
		if (gibu[i] < 10){ gibu[i] = gibu[i] * 50;} //3.1.2 if (gibu[i]<10) s = gibu[i] * 50
		else if (gibu[i] < 20) { gibu[i] = gibu[i] * 70; }//3.1.3 else if (gibu[i]<20) s = gibu[i] * 70
		else if (gibu[i] < 50) { gibu[i] = gibu[i] * 100; }//3.1.4 else if (gibu[i]<50) s = gibu[i] * 100
		else if (gibu[i] < 100) { gibu[i] = gibu[i] * 150; }//3.1.5 else if (gibu[i]<100) s = gibu[i] * 150
		else { gibu[i] = gibu[i] * 200; }//3.1.6 else s = gibu[i] * 200, printf s
		printf("%d\n", gibu[i]);
		sum += gibu[i];//3.1.7 sum += s
		if (gibu[i] > max) { max = gibu[i]; }//3.2.1 if s>max max = s
		if (gibu[i] < min) { min = gibu[i]; }//3.2.2 if s<min min = s
	}
	max2 = min; min2 = max, avg = sum / 7; //최대와 최소값을 범위로 다시 가둔다. 평균
	for (i = 0; i < 7; i++) // 5
	{
		if (gibu[i] > max2 && gibu[i]!=max) { max2 = gibu[i]; }// 5.1
		if (gibu[i] < min2 && gibu[i]!=min) { min2 = gibu[i]; }// 5.2
	}
	printf("최대: %d,최소: %d,총합: %d \n,2번째 큰 기부 금액: %d,2번째 작은 기부 금액: %d, 평균: %d", max,min,sum, max2, min2, avg);//6.출력 max min sum max2 min2,avg
}






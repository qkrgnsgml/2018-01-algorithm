#include <stdio.h>

void main()
{
	printf("201844082������\n");
	int gibu[7] = { 0 }, i, min = 40001, max = 0, sum = 0, max2, min2, avg; //2. �������� 
	for (i = 0; i < 7; i++)//3. �ݺ��� ���� 
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
	max2 = min; min2 = max, avg = sum / 7; //�ִ�� �ּҰ��� ������ �ٽ� ���д�. ���
	for (i = 0; i < 7; i++) // 5
	{
		if (gibu[i] > max2 && gibu[i]!=max) { max2 = gibu[i]; }// 5.1
		if (gibu[i] < min2 && gibu[i]!=min) { min2 = gibu[i]; }// 5.2
	}
	printf("�ִ�: %d,�ּ�: %d,����: %d \n,2��° ū ��� �ݾ�: %d,2��° ���� ��� �ݾ�: %d, ���: %d", max,min,sum, max2, min2, avg);//6.��� max min sum max2 min2,avg
}






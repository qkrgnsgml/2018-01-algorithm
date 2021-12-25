#include <stdio.h>

void main()
{
	int gibu[7] = { 0 }, i, s, min = 40001, max = 0, sum = 0; //2. 변수선언 
	for (i = 0; i < 7; i++)//3. 반복문 시작 
	{
		scanf("%d", &gibu[i]);//3.1.1 scanf gibu[i]
		if (gibu[i] < 10)
		{
			s = gibu[i] * 50;
		} //3.1.2 if (gibu[i]<10) s = gibu[i] * 50, printf s
		else if (gibu[i] < 20) { s = gibu[i] * 70; }//3.1.3 else if (gibu[i]<20) s = gibu[i] * 70, printf s
		else if (gibu[i] < 50) { s = gibu[i] * 100; }//3.1.4 else if (gibu[i]<50) s = gibu[i] * 100, printf s
		else if (gibu[i] < 100) { s = gibu[i] * 150; }//3.1.5 else if (gibu[i]<100) s = gibu[i] * 150, printf s
		else { s = gibu[i] * 200; }//3.1.6 else s = gibu[i] * 200, printf s
		printf("%d", s);
		sum += s;//3.1.7 sum += s
	}
	if (s > max) { max = s; }//3.2.1 if s>max max = s
	if (s < min) { min = s; }//3.2.2 if s<min min = s
	printf("%d,%d,%d", sum, max, min);
}


	
	
	
	//4. 출력 sum max min


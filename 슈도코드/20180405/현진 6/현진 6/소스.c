#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void main()
{
	float ta, anta, taul, du, a;
	int taul1;



	printf("Ÿ���� �Է��Ͻÿ�.\n");
	scanf("%d", &ta);
	printf("��Ÿ���� �Է��Ͻÿ�.\n");
	scanf("%d", &anta);

	taul = anta / ta;
	printf("%f\n", taul);
	du = (taul + 0.005);
	printf("%f\n", du);
	taul1 = du * 100;
	printf("%d\n", taul1);
	a = taul1 / 100.00;
	printf("%f\n", a);


	printf("�� ������ Ÿ���� %f �Դϴ�.\n\n", a);
	printf("201844077 ������\n\n");
	system("pause");
}
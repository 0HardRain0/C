//�迭�� ���� ������ �����Ͽ� �迭 ��� ���

/* #include<stdio.h>

int main()
{
	int ary[3];
	int i;

	*(ary + 0) = 10;
	*(ary + 1) = *(ary + 0) + 10;

	printf("�� ��° �迭 ��ҿ� Ű���� �Է�:");
	scanf_s("%d", ary + 2);

	for (i = 0; i < 3; i++)
	{
		printf("%5d", *(ary + i));
	}
	return 0;
}*/



// �迭��ó�� ���Ǵ� ������

/*#include<stdio.h>

int main()
{
	int ary[3];
	int *pa = ary;
	int i;

	*pa = 10;
	*(pa + 1) = 20;
	pa[2] = pa[0] + pa[1];

	for (i = 0; i < 3; i++)
	{
		printf("%5d", pa[i]);
	}
	return 0;
} */


//�����͸� �̿��� �迭�� �����

/* #include<stdio.h>

int main()
{
	int ary[3] = { 10,20,30 };
	int *pa = ary;
	int i;

	printf("�迭�� �� :");
	for (i = 0; i < 3; i++)
	{
		printf("%d ", *pa);
		pa++;
	}

	return 0;
} */


// �������� ������ ���� ����

/* #include<stdio.h>

int main()
{
	int ary[5] = { 10, 20, 30, 40, 50 };
	int *pa = ary;
	int *pb = pa + 3;

	printf("pa : %u\n", pa);
	printf("pb : %u\n", pb);
	pa++;
	printf("pb - pa : %u\n", pb - pa);

	printf("�տ� �ִ� �迭 ����� �� ��� :");
	if (pa < pb) printf("%d\n", *pa);
	else printf("%d\n", *pb);

	return 0;
}*/


// p.299 ��������(4)

/*#include<stdio.h>

int main()
{
	double ary[5] = { 1.2,3.5,7.4,0.5,10.0 };
	double *pa = ary;
	double total = 0.0;
	double avg = 0.0;
	int i;

	printf("�迭 ����� �� :");

	for(i = 0; i < 5;i++)
	{
		printf(" %.1f", *pa);
		total += *pa;
		pa++;
	}
	
	avg = total / 5.0;     // 5.0 ��� i�� ����. for�� ������ ��¿��� i = 5�̱� ����

	printf("\n��� : %.2f\n", avg);

	return 0;
}*/


// p.299 ��������(5)

#include<stdio.h>

int main()
{
	int ary[] = { 10,20,30,40,50 };
	int size = sizeof(ary) / sizeof(ary[0]);
	int *pa = ary;
	int *pb = ary + (size - 1);
	int temp, i;

	while (pa < pb)
	{
		temp = *pa;
		*pa = *pb;
		*pb = temp;
		pa++;
		pb--;
	}
	for (i = 0; i < size; i++)
	{
		printf("%d ", ary[i]);
	}

	return 0;
}
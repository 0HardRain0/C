// �迭�� ���� ����ϴ� �Լ�

/* #include<stdio.h>

void print_ary(int *pa);                   // �Լ� ����

int main()
{
	int ary[5] = { 10,20,30,40,50 };

	print_ary(ary);                        // �迭���� �ְ� �Լ� ȣ��

	return 0;
}

void print_ary(int *pa)                    // �Ű������� ������ ����
{
	int i;

	for (i = 0; i < 5; i++) 
	{
		printf("%d ", pa[i]);             // pa�� �迭 ��� ǥ���� ���
	}
}*/



// ũ�Ⱑ �ٸ� �迭�� ����ϴ� �Լ�.

/*#include<stdio.h>

void printf_ary(int *pa, int size);

int main()
{

	int ary1[5] = { 10,20,30,40,50 };
	int ary2[7] = { 10,20,30,40,50,60,70 };

	printf_ary(ary1, 5);
	printf("\n");
	printf_ary(ary2, 7);

	return 0;
}

void printf_ary(int *pa, int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		printf("%d ", pa[i]);
	}
}*/


// �迭�� ���� �Է��ϴ� �Լ�

/*#include<stdio.h>

void input_ary(double *pa, int size);
double find_max(double *pa, int size);

int main()
{
	double ary[5];
	double max;
	int size = sizeof(ary) / sizeof(ary[0]);

	input_ary(ary, size);
	max = find_max(ary, size);
	printf("�迭�� �ִ밪 : %.1f\n", max);

	return 0;

}

void input_ary(double *pa, int size)
{
	int i;

	printf("%d���� �Ǽ��� �Է� : ", size);
	for (i = 0; i < size; i++)
	{
		scanf_s("%lf", pa + i);
	}
}

double find_max(double *pa, int size)
{
	double max;
	int i;

	max = pa[0];
	for (i = 1; i < size; i++)
	{
		if (pa[i] > max) max = pa[i];
	}

	return max;
}*/




// p.310 ��������[�� ���� �ϼ��� ������ �迭. month[0]�� 1���̸� ÷�ڰ� ������ ������ �� ���� �Բ� ����.


/* #include<stdio.h>

int cnt_31(int *pm);
int change_29(int *pm);
int month_5(int *pm);


int main()
{
	int month[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	cnt_31(month);

	change_29(month);

	month_5(month);

	return 0;
}

int cnt_31(int *pm)
{
	int cnt = 0;
	int i;

	for (i = 0; i < 12; i++)
	{
		if (pm[i] == 31) cnt++;
	}
	
	return cnt;
}

int change_29(int *pm)
{
	pm[1] = 29;
}

int month_5(int *pm)
{
	int i;

	for (i = 0; i < 12; i++)
	{
		printf("%5d", pm[i]);
		if ((i + 1) % 5 == 0) printf("\n");
	}
}*/



// ��������(5)

#include<stdio.h>
void reverse(double *pa, int size);

int main()
{
	int i;
	double ary[] = { 1.5,20.1,16.4,2.3,3.5 };

	reverse(ary, sizeof(ary) / sizeof(*ary));
	
	for (i = 0; i < 5; i++)
	{
		printf("%.1lf ", ary[i]);
	}
	
	return 0;
}
void reverse(double *pa, int size)
{
	int i;
	double temp;

	for (i = 0; i < size / 2; i++)
	{
		temp = pa[i];
		pa[i] = pa[size - 1 - i];
		pa[size - 1 - i] = temp;
	}
}
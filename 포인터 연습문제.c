// p.264 ��������(2)

/* #include<stdio.h>

int main()
{
	int a = 10;
	int *p = &a;   //������p�� a ���� ���(10)
	*p = 20;       //������p�� ���� 10�� ������ ������ 20���� �ʱ�ȭ
	printf("%d\n", a); // a�� *p���� 20���� �ʱ�ȭ�Ǿ����Ƿ� ���� 20���� ���

	return 0;
} */



// ��������(5)

/* #include<stdio.h>

int main()
{
	int a = 10, b = 20, temp;
	int *pa = &a;
	int *pb = &b;
	
	temp = *pa;
	*pa = *pb;
	*pb = temp;
	printf("%d %d\n", *pa, *pb);

	return 0;
}*/

//���� ���� 1��

/* #include<stdio.h>

void func(int *mp, int *rp);

int main()
{
	int mod, rem;

	func(&mod, &rem);

	printf("�� : %d, ������ : %d", mod, rem);

	return 0;
}

void func(int *mp, int *rp)
{
	int num;

	printf("��� �Է� (�Է��� ���ڿ� 4�� ����) :");
	scanf_s("%d", &num);

	*mp = num / 4;
	*rp = num % 4;
} */


// ���� ���� 2��

/* #include<stdio.h>

void swap(double *pa, double *pb);
void line_up(double *maxp, double *midp, double *minp);

int main()
{
	double max, mid, min;
	
	printf("�Ǽ��� ���� �Է� :");
	scanf_s("%lf%lf%lf", &max, &mid, &min);
	line_up(&max, &mid, &min);
	printf("���ĵ� �� ��� : %.1lf, %.1lf, %.1lf\n", max, mid, min);

	return 0;
}

void swap(double *pa, double *pb)
{
	double temp;

	temp = *pa;
	*pa = *pb;
	*pb = temp;
}

void line_up(double *maxp, double *midp, double *minp)
{
	if (*maxp < *midp) swap(maxp, midp);
	if (*maxp < *minp) swap(maxp, minp);
	if (*midp < *minp) swap(midp, minp);
} */


// �������� 3��

/* #include<stdio.h>

void rotate(int *pa, int *pb, int *pc);

int main()
{

	int a = 1, b = 2, c = 3;
	char ch;
	
	printf("%d:%d:%d", a, b, c);
	while(1)
	{
		scanf_s("%c", &ch, sizeof(ch));
		if (ch != '\n')
		{
			break;
		}
		rotate(&a, &b, &c);
		printf("%d:%d:%d", a, b, c);
	}
	

	return 0;
}

void rotate(int *pa, int *pb, int *pc)
{
	int temp;

	temp = *pa;
	*pa = *pb;
	*pb = *pc;
	*pc = temp;
}*/

// 
// �ּҿ� �������� ũ��

/* #include<stdio.h>

int main()
{
	char ch;
	int in;
	double db;

	char *pc = &ch;
	int *pi = &in;
	double *pd = &db;

	printf("char�� ������ �ּ� ũ�� : %d\n", sizeof(&ch));
	printf("int�� ������ �ּ� ũ�� : %d\n", sizeof(&in));
	printf("double�� ������ �ּ� ũ�� : %d\n", sizeof(&db));

	printf("char * �������� ũ�� :%d\n", sizeof(pc));
	printf("int * �������� ũ�� : %d\n", sizeof(pi));
	printf("double * �������� ũ�� : %d\n", sizeof(pd));

	printf("char * �����Ͱ� ����Ű�� ������ ũ�� : %d\n", sizeof(*pc));
	printf("int * �����Ͱ� ����Ű�� ������ ũ�� : %d\n", sizeof(*pi));
	printf("double * �����Ͱ� ����Ű�� ������ ũ�� :%d\n", sizeof(*pd));

	return 0;
}
 */


// ������ �ʴ� �������� ����

/* #include<stdio.h>

int main()
{
	int a = 10;
	int *p = &a;
	double *pd;

	pd = p;
	printf("%lf\n", *pd);

	return 0;

} */


// �����͸� ����� �� ������ �� ��ȯ

/*#include<stdio.h>

void swap(int *pa, int *pb);

int main()
{
	int a = 10, b = 20;

	swap(&a, &b);
	printf("a:%d, b:%d\n", a, b);

	return 0;
}

void swap(int *pa, int *pb)
{
	int temp;

	temp = *pa;
	*pa = *pb;
	*pb = temp;
}*/


// �ٸ� �Լ��� ������ �̸����� ���

/* #include<stdio.h>

void swap();

int main()
{
	int a = 10, b = 20;                 // ���⼭ ����� �������� main�Լ������� ����
	printf("a:%d, b:%d\n", a, b);

	return 0;

}

void swap()
{
	int temp;

	temp = a;
	a = b;
	b = temp;
}*/

// ��� : ������ �������� ���� �߻�
//�ɰ���	�ڵ�	����	������Ʈ	����	��	��ǥ�� ����(Suppression) ����
//����(Ȱ��)	E0020	�ĺ��� "a"��(��) ���ǵǾ� ���� �ʽ��ϴ�.������(2)	C:\Users\��쿭\Documents\GitHub\Practice - C - 1\Practice - C - 1\������(2)\������(2).c	95
//����(Ȱ��)	E0020	�ĺ��� "b"��(��) ���ǵǾ� ���� �ʽ��ϴ�.������(2)	C:\Users\��쿭\Documents\GitHub\Practice - C - 1\Practice - C - 1\������(2)\������(2).c	96
//����	C2065	'a': ������� ���� �ĺ����Դϴ�.������(2)	c : \users\��쿭\documents\github\practice - c - 1\practice - c - 1\������(2)\������(2).c	95
//����	C2065	'a': ������� ���� �ĺ����Դϴ�.������(2)	c : \users\��쿭\documents\github\practice - c - 1\practice - c - 1\������(2)\������(2).c	96
//����	C2065	'b': ������� ���� �ĺ����Դϴ�.������(2)	c : \users\��쿭\documents\github\practice - c - 1\practice - c - 1\������(2)\������(2).c	96



// �迭�� ���� ������ �����Ͽ� �迭 ��� ���

#include<stdio.h>

int main()
{
	int ary[3];
	int i;

	*(ary + 0) = 10;
	*(ary + 1) = *(ary + 0) + 10;

	printf("�� ��° �迭 ��ҿ� Ű���� �Է� :");

	scanf_s("%d", ary + 2);

	for (i = 0; i < 3; i++)
	{
		printf("%5d", *(ary + i));
	}

	return 0;
}
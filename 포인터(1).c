//������ �޸� �ּ� Ȯ��

/* #include<stdio.h>

int main()
{
	int a;
	double b;
	char c;

	printf("int�� ������ �ּ� : %u\n", &a);     //�ּ� �����ڷ� �ּ� ���
	printf("double�� ������ �ּ� : %u\n", &b);
	printf("char�� ������ �ּ� : %u\n", &c);

	return 0;
}  */


// �������� ����� ���

/* #include<stdio.h>

int main()
{
	int a;
	int *pa;

	pa = &a;                                  //�����Ϳ� a�� �ּ� ����
	*pa = 10;                                 //�����ͷ� ���� a�� 10 ����

	printf("�����ͷ� a�� ��� : %d\n", *pa);
	printf("���������� a�� ��� : %d\n", a);  //���� a�� ���

	return 0;
} */


// �����͸� ����� �� ������ �հ� ��� ���

/* #include<stdio.h>

int main()
{
	int a = 10, b = 15, tot;
	double avg;
	int *pa, *pb;
	int *pt = &tot;
	double *pg = &avg;

	pa = &a;
	pb = &b;

	*pt = *pa + *pb;
	*pg = *pt / 2.0;

	printf("�� ������ �� : %d, %d\n", *pa, *pb);
	printf("�� ������ �� : %d\n", *pt);
	printf("�� ������ ��� : %.1lf\n", *pg);

	return 0;
} */



//const�� ����� ������

#include<stdio.h>

int main()
{
	int a = 10, b = 20;
	const int *pa = &a;

	printf("���� a�� : %d\n", *pa);
	pa = &b;
	printf("���� b�� : %d\n", *pa);
	pa = &a;                              // ���⼭ *pa = a(��: *pa = 20;)�� ���� �ٲٷ��� �ϸ� ���� �߻�.[error C2166: l-value�� const ��ü�� �����մϴ�.]
	a = 20;                               // a�� ���� �����Ͽ� ���� �ٲ�.
	printf("���� a�� : %d\n", *pa);

	return 0;
}
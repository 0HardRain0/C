// �Լ��� ������ ���� ���


//10�� ���ϱ� ���� ���� �μ��� �ִ� ���(���� �Ѱ���)

/* #include<stdio.h>

void add_ten(int a);


int main()
{
	int a = 10;

	add_ten(a);

	printf("a : %d\n", a);

	return 0;
}

void add_ten(int a)				// 7���� a�� �ٸ� �������� ���� ���� �Ҵ�
{
	a = a + 10;					// 15���� �Ű����� a�� 10�� ���Ѵ�.
}*/




// �����͸� �Ἥ ������ ���� 10�� ���ϴ� ��� (�ּҸ� �Ѱ���)


/* #include<stdio.h>

void add_ten(int *p);

int main()
{
	int a = 10;

	add_ten(&a);
	printf("a : %d\n", a);

	return 0;
}

void add_ten(int *p)
{
	*p = *p + 10;
}*/



//�ּҸ� ��ȯ�Ͽ� �� ������ �� ���(�ּҸ� ��ȯ����)


/* #include<stdio.h>

int *sum(int a, int b);							// int�� ������ �ּҸ� ��ȯ�ϴ� �Լ� ����

int main()
{
	int *p;										// ��ȯ���� ������ ������

	p = sum(10, 20);							// ��ȯ�� �ּҴ� p�� ����
	printf("�� ������ �� : %d\n", *p);			// p�� ����Ű�� ������ ���

	return 0;
}

int *sum(int a, int b)							// int�� ������ �ּҸ� ��ȯ�ϴ� �Լ�
{
	static int res;								// ���� ���� ����

	res = a + b;								// �� ������ ���� res�� ����

	return &res;								// ���� ���� ������ �ּ� ��ȯ
}*/



// �������� 4��


#include<stdio.h>

int quot(int a, int b, int *p);

int main()
{
	int a, b, res;

	printf("�� ���� �Է�:");
	scanf_s("%d%d", &a, &b);

	if (quot(a, b, &res) == -1)
	{
		printf("0���� ���� �� �����ϴ�!");
	}
	else
	{
		printf("%d�� %d�� ���� ���� %d�Դϴ�.", a, b, res);
	}

	return 0;
}

int quot(int a, int b, int *p)
{
	if (b == 0)
	{
		return -1;
	}
	else
	{
		*p = a / b;
		return 0;
	}
}


// ���� ��� ����


// �� �Լ����� ���� �̸��� ���� ������ ����� ���

/* #include<stdio.h>

void assign();

int main()
{
	auto int a = 0;

	assign();
	printf("main �Լ� a :%d\n", a);

	return 0;
}

void assign()
{
	auto int a;

	a = 10;
	printf("assign �Լ� a : %d\n", a);
}*/


//��� �ȿ� ���� ������ ����Ͽ� �� ������ ��ȯ�ϴ� ���α׷�

/* #include<stdio.h>

int main()
{
	int a = 10, b = 20;

	printf("��ȯ �� a�� b�� �� : %d, %d\n", a, b);
	{                                                       //��� ����
		int temp;											//temp ���� ����

		temp = a;
		a = b;
		b = temp;
	}														//��� ��
	printf("��ȯ �� a�� b�� �� : %d, %d\n", a, b);

	return 0;
}*/



//  ���� ������ ���


/* #include<stdio.h>

void assign10();
void assign20();

int a;

int main()
{
	printf("�Լ� ȣ�� �� a�� : %d\n", a);

	assign10();
	assign20();

	printf("�Լ� ȣ�� �� a�� : %d\n", a);
	return 0;
}

void assign10()
{
	a = 10;
}

void assign20()
{
	int a;
	a = 20;
}*/



//auto ���� ������ static ���� ������ ��

/* #include<stdio.h>

void auto_func();
void static_func();

int main()
{
	int i;

	printf("auto ���� ������ ����� �Լ�...\n");
	for (i = 0; i < 3; i++)
	{
		auto_func();
	}

	printf("static ���� ������ ����� �Լ�...\n");
	for (i = 0; i < 3; i++)
	{
		static_func();
	}

	return 0;
}

void auto_func()
{
	auto int a = 0;

	a++;
	printf("%d\n", a);
}

void static_func()
{
	static int a;

	a++;
	printf("%d\n", a);
} */



// �������� ������ �ݺ����� ����� ��


/* #include<stdio.h>

int main()
{
	register int i;
	auto int sum = 0;

	for (i = 1; i <= 10000; i++)
	{
		sum += i;
	}

	printf("%d\n", sum);

	return 0;
}*/



// p.394 �������� 2��

/* #include<stdio.h>

void func();
int a = 10;

int main()
{
	a = 20;
	func();
	printf("%d", a);	//��� ���� 30���� ���

	return 0;
}

void func()
{
	a = 30;
}*/


// �������� 3��


/* #include<stdio.h>

int func();

int main()
{
	int i, sum = 0;

	for (i = 0; i < 10; i++)
	{
		sum += func();
	}
	printf("%d", sum);

	return 0;
}

int func()
{
	static int a = 0;
	a++;

	return a;
}*/


// �������� 4��


/* #include<stdio.h>

int a;

int main()
{
	int b = 10;
	{
		static int a = 20;
		b = a;
	}
	a += b;
	printf("%d", a);

	return 0;
}*/



// �������� 5��

#include<stdio.h>

double get_next();
double ary[] = { 0.1,0.3,0.5,0.7,0.9 };

int main()
{
	double res = 0;
	int i;

	for (i = 0; i < 5; i++)
	{
		res += get_next();
	}
	printf("%.1lf", res);

	return 0;
}

double get_next()
{
	
	static int index = 0;                //ary�迭�� index�� ����� ����, static ��� �ʼ�
	double val;							 //ary�迭 ����� ���� ��� �����ϱ� ���� ����

	val = ary[index];					 //index ��ġ�� �迭 ��Ҹ� val�� ����
	index++;							 //get_next�� ������ ȣ��� �� ���� �迭 ��Ҹ� ��ȯ�ϱ� ���� index ����
	
	return val;							 //��� ������ �迭 ����� �� ��ȯ
} 
//while ���� ����� �ݺ���

/* #include<stdio.h>

int main()
{
	int a = 1;

	while (a < 10) // a�� 1���� �����Ƿ� ���ǽ��� ��
	{
		a = a * 2; // a�� 2�� ���Ͽ� a�� �ٽ� ����
	}
	printf("a : %d\n", a);

	return 0;
} */

// ��� a : 16

//for���� ����� �ݺ���

/* #include<stdio.h>

int main()
{
	int a = 1;
	int i;                      //�ݺ� Ƚ���� ���� ���� ����

	for (i = 0; i < 3; i++)     //i�� 0���� �ʱ�ȭ�� �Ŀ� 3���� ���� ���� �ϳ��� �����ϸ鼭 ���๮�� ����
	{     
		a = a * 2;
	}
	printf("a : %d\n", a);      //for���� ���������� a�� ���

	return 0;
} */

// ��� a : 8


//for���� while������ �ٲٴ� �͵� ����

//while��
/* #include<stdio.h>

int main()
{
	int i = 0;

	while (i < 9)
	{
		printf("Be Happy\n");
		i++;
	}
	return 0;
} */

//for��
/* #include<stdio.h>

int main()
{
	int i;

	for (i = 0; i < 9; i++)
	{
		printf("Be Happy\n");
	}
	return 0;
} */



// do ~ while���� ����� �ݺ���
// do ~ while���� ���ǽİ� ������� �ݺ��� ������ �ּ��� �� ���� ������.

/* #include<stdio.h>

int main()
{
	int a = 1;

	do                        // �ݺ��� ���� ��ġ
	{
		a = a * 2;            // a�� ���� 2��� �ø���.
	} while (a < 10);         // a�� 10���� ������ 9���� �ݺ�
	printf("a : %d\n", a);    // �ݺ��� ���� �� a�� ���

	return 0;
} */

// ��������(1) C��� p.178

/*#include<stdio.h>  //���� �ۼ��� ���α׷�

int main()
{
	int a, i;
	printf("���ڸ� �Է����ּ���.(���ڴ� ������ �߻��մϴ�.)\n");
	scanf_s("%d", &a);
	while (a < 0)
	{
		printf("�ظ��ϸ� ������ �Է����ּ���.\n");
		scanf_s("%d", &a);
	}
	for (i = 0; i < 5; i++)
	{
		printf("Be Happy\n");
	}

	return 0;
}*/


//�ؼ�

/* #include<stdio.h>

int main()
{
	int a, i;
	//do ~ while������ �ݺ��� ������ ������ �Ŀ� ���� �˻�. �Էµ� ���� ������ �ٽ� �Է��ϰ� 0�� �����Ͽ� ����� �ԷµǸ� �ݺ��� ����.
	do {
		scanf_s("%d", &a);
	} while (a < 0);
	
	for (i = 0; i < 5; i++)
	{
		printf("Be Happy\n");
	}

	return 0;
}*/

//��������(2)

/* #include<stdio.h>

int main()
{
	int i;
	
	for (i = 0; i < 10; i++)
	{
		printf("$");
	}
	return 0;
} */

//��������(3)

#include<stdio.h>

int main()
{
	int i;
	
	for (i = 1; i <= 15; i++)
	{
		printf("*");
		if (i % 5 == 0)
		{
			printf("\n");
		}
	}

	return 0;
}
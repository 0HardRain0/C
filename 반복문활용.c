//�ݺ��� Ȱ��(��ø �ݺ���)

//��ø �ݺ����� ����� �� ���

/* #include<stdio.h>

int main()
{
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}*/

// ��� : ���� 5�� ����� ���� 3�� �ݺ���.


// ������

/* #include<stdio.h>

int main()
{
	int i, j;

	for (i = 1; i <= 9; i++)
	{
		printf("%d��\n", i);
		for (j = 1; j <= 9; j++)
		{
			printf("%d * %d = %d\n", i, j, i * j);
		}
		printf("\n");
	}
	return 0;
} */

//��� : 1�� ~ 9��


//break���� ����� �ݺ� ����

/* #include<stdio.h>

int main()
{
	int i;                         // �ݺ��� ���� ���� ���� ����
	int sum = 0;                   // 1���� 10������ ���� ������ ����

	for (i = 0; i <= 10; i++)      // i�� 1���� 10���� �����ϸ鼭 10�� �ݺ�
	{
		sum += i;                  // i���� sum�� ����
		if (sum > 30) break;       // ������ ���� 30 ���� ũ�� �ݺ��� ����
	}
	printf("������ �� : %d\n", sum);
	printf("���������� ���� �� : %d\n", i);

	return 0;
} */

// ��� : ������ ��: 36, ���������� ���� �� : 8



// ���� �ݺ���

/* #include<stdio.h>

int main()
{
	int cnt = 0;

	while (1)
	{
		printf("Be Happy\n");
		cnt++;
		if (cnt == 5)break;
	}
	return 0;
} */

// ��� : ���� 5�� ��� 


// ��������(2) : ��ø �ݺ����� ����Ͽ� $�� 3�� 5���� ���·� ���

/* #include<stdio.h>

int main()
{
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("$");
		}
		printf("\n");
	}

	return 0;
} */



// ��������(3) 

/* #include<stdio.h>

int main()
{
	int i, j;

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("@");
			if (i == j) break;
		}
		printf("\n");
	}

	return 0;
} */

// ��������(3) [����]

/* #include<stdio.h>

int main()
{
	int i, j;

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < i + 1; j++)
		{
			printf("@");
		}
		printf("\n");
	}

	return 0;
} */

// ��������(4) : �ٽ� Ǯ���

/* #include<stdio.h>

int main()
{
	int i, j, num;

	for (i = 0; i < 5; i++)
	{
		// ù��° j-for���� ���ڸ� ����ϱ� ���� ��ĭ�� ���
		for (j = 0; j < 4 - i; j++) // i�� ������ ������ ��ĭ ��� Ƚ���� 4-i�� ���� �ϳ��� ����
		{
			printf(" ");
		}

		num = 1;
		// �� ��° j-for���� ���ڸ� �ϳ��� ������Ű�鼭 ���
		for (j = 0; j < (2 * i) + 1; j++) // i�� ������ ������ ��ȣ ��� Ƚ���� (2*i)+1�� ���� 2�� �����Ѵ�.
		{
			printf("%d", num);    //���� ���
			num++;                //���� 1����
		}
		printf("\n");             //�� ���� ��� �� ����
	}

	return 0;
} */

// ��������(5) : �ٽ� Ǯ��

/* #include<stdio.h>

int main()
{
	int i, j;                            // �ݺ� ���� ����

	for (i = 0; i < 5; i++)              // i�� 0���� 4���� 5�� �ݺ�, ���� ��
	{
		for (j = 0; j < 5; j++)          // j�� 0���� 4���� 5�� �ݺ�, ���� ��
		{
			if( (i == j) || (i + j == 4) ) // �밢���� ��ġ�� �Ǿ�����
				printf("*");               // �� ���
			else
				printf(" ");               //�׿��� ��ġ�� ��ĭ ���
		}
		printf("\n");                      //�� ���� ������ ����
	}

	return 0;
} */

// ��������(5) �ٽ� Ǯ���

#include<stdio.h>

int main()
{
	int i, j;

	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9; j++)
		{
			if ((i == j) || (i + j == 8))
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
	
	return 0;
}
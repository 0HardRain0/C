// ���۸� ����ϴ� �Է��Լ�

//���۸� ����ϴ� �����Է�

/* #include<stdio.h>

int main()
{
	char ch;
	int i;

	for (i = 0; i < 3; i++)
	{
		scanf_s("%c", &ch, 1);
		printf("%c", ch);
	}

	while (1)
	{
		scanf_s("%c", &ch, 1);           //���ۿ��� �� ���� �Է¹���
		if (ch == '\n') break;           //���๮���� ��� �ݺ�����
		printf("%c", ch);
	}
	return 0;
}*/



// �Է� ������ �ƽ�Ű �ڵ尪�� ����ϴ� ���α׷�


/* #include<stdio.h>

int main()
{
	int res;
	char ch;

	while (1)
	{
		res = scanf_s("%c", &ch, 1);
		if (res == -1)break;
		printf("%d", ch);
	}

	return 0;
}*/



//getchar �Լ��� ����� ���ڿ� �Է�

/* #include<stdio.h>

void my_gets(char *str, int size);

int main()
{
	char str[7];

	my_gets(str, sizeof(str));
	printf("�Է��� ���ڿ� : %s\n", str);

	return 0;
}

void my_gets(char *str, int size)
{
	char ch;
	int i = 0;

	ch = getchar();
	while ((ch != '\n') && (i < size - 1))            //�� ���ڸ� ���� ������ ������ϹǷ� �迭�� ũ��� size -1�� ���
	{
		str[i] = ch;
		i++;
		ch = getchar();
	}

	str[i] = '\0';
}*/



//fflush �Լ��� �ʿ��� ���


/* #include<stdio.h>

int main()
{
	int num, grade;

	printf("�й� �Է� :");
	scanf_s("%d%*c", &num);               //scanf_s �Լ����� ����� �� ���๮�� ����
	fflush(stdin);                        //C���� �����Ϸ��� �ٸ��� ������ ����� �� ���� fflush(stdin);�� ǥ���� �ƴ� ���� ����.
	//while (getchar() != '\n');          //���ۿ� �����ִ� ���๮�� ����
	printf("���� �Է� :");
	grade = getchar();
	printf("�й� : %d, ���� : %c", num, grade);

	return 0;

} */




//p.339 �������� 3��


/* #include<stdio.h>

int main()
{
	int ch;
	int cnt = 0;
	ch = getchar();
	while (ch != '\n')
	{
		if ((ch >= 'a') && (ch <= 'z')) cnt++;
		ch = getchar();
	}
	printf("�ҹ����� ���� : %d\n", cnt);

	return 0;
}
*/



// �������� 4��


/* #include<stdio.h>

int main()
{
	int num, alpha;

	printf("���� �����ϴ� ���ڴ�? ");
	scanf_s("%d", &num);
	while (getchar() != '\n');
	printf("���� �����ϴ� ���ĺ���? ");
	alpha = getchar();
	printf("%d %c", num, alpha);

	return 0;

}*/


// �������� 5��


#include<stdio.h>

int main()
{
	char ch;
	int cnt = 0;

	while (scanf_s("%c", &ch, 1) != -1)
	{
		if (ch == '\n') cnt++;
	}
	printf("���� Ű�� ���� Ƚ�� : %d\n", cnt);

	return 0;
}
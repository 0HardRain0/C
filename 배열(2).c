//���ڸ� �����ϴ� �迭

//���ڿ��� �����ϴ� char�� �迭

/* #include<stdio.h>

int main()
{
	char str[80] = "applejam";

	printf("���� ���ڿ� : %s\n", str);
	printf("���ڿ� �Է� :");
	scanf_s("%s", str, sizeof(str));
	printf("�Է� �� ���ڿ� : %s\n", str);

	return 0;
} */

// �ι��ڰ� ���� ���ڿ�

/* #include<stdio.h>

int main()
{
	char str[5];

	str[0] = 'O';
	str[1] = 'K';             //�� ���� ����� ����� ���� �ι��ڰ� �ƴϹǷ� ������ ���� ���
	printf("%s\n", str);

	return 0;
} */

// ���ڿ��� �����ϴ� strcpy�Լ�

/*
#include<stdio.h>
#include<string.h>

int main()
{
	char str1[80] = "cat";
	char str2[80];

	strcpy_s(str1, 80 ,"tiger");    //strcpy_s �Լ��� VS2017���� strcpy�Լ��� ������ �����ϱ� ���� �������. strcpy_s(����, ����ũ��, ����)�� �ۼ��Ǿ����
	strcpy_s(str2, 80 ,str1);
	printf("%s, %s\n", str1, str2);

	return 0;
} */


//��ĭ�� ������ ���ڿ� �Է� (gets, puts)

/* #include<stdio.h>

int main()
{
	char str[80];

	printf("���ڿ� �Է� : ");
	gets(str);
	puts("�Էµ� ���ڿ� : ");
	puts(str);

	return 0;
}*/ 


// ��������(5)

#define _CRT_SECURE_NO_WARNINGS      //strcpy �Լ��� �̿��ϱ� ���� �ۼ��ؾ���. 
#include<stdio.h>
#include<string.h>

int main()
{
	char str[80] = "bananajuice";

	strcpy(str, "apple");  //strcpy_s �Լ��� �ۼ��� apple- ���ķ� ������ ���� ��µǹǷ� ����.
	str[5] = '-';
	puts(str);

	return 0;
}

//��°�� : apple-juice
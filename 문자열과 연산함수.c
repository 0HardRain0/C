// ���ڿ��� ���� �Լ�

//strcpy �Լ��� ����
/*
#include<stdio.h>
#include<string.h>

int main()
{
	char str1[80] = "strawberry";
	char str2[80] = "apple";
	char *ps1 = "banana";
	char *ps2 = str2;

	printf("���� ���ڿ� : %s\n", str1);
	strcpy_s(str1,sizeof(str1), str2);             //strcpy_s �Լ� ���� strcpy_s(����, ������ ũ��, ����)�� �ۼ��ؾ���
	printf("�ٲ� ���ڿ� : %s\n", str1);

	strcpy_s(str1, sizeof(str1), ps1);
	printf("�ٲ� ���ڿ� : %s\n", str1);
	strcpy_s(str1, sizeof(str1), ps2);
	printf("�ٲ� ���ڿ� : %s\n", str1);

	strcpy_s(str1, sizeof(str1), "banana");
	printf("�ٲ� ���ڿ� : %s\n", str1);
	
	return 0;
}*/


//strcpy�� ����� ���� �Լ��� ����


/* #include<stdio.h>

char *my_strcpy(char *pd, char *ps);

int main()
{
	char str[80] = "strawberry";

	printf("�ٲٱ� �� ���ڿ� : %s\n", str);
	my_strcpy(str, "apple");
	printf("�ٲ� �� ���ڿ� : %s\n", str);
	printf("�ٸ� ���ڿ� ���� : %s\n", my_strcpy(str, "kiwi"));
	return 0;
}

char *my_strcpy(char *pd, char *ps)
{
	char *po = pd;

	while (*ps != '\0')
	{
		*pd = *ps;
		pd++;
		ps++;
	}
	*pd = '\0';

	return po;
}*/


//strncpy �Լ��� ����� ���ڿ� ����

/* #include<stdio.h>
#include<string.h>

int main()
{
	char str[20] = "mango tree";
	strncpy(str, "apple-tree", 5);         //strncpy �Լ��� �״�� ����ϴ°��� ����. (ǥ��)
	printf("%s\n", str);

	return 0;
}*/


//�� ���ڿ� �� ���̰� �� �ܾ� ���


/* #include<stdio.h>
#include<string.h>

int main()
{
	char str1[80], str2[80];
	char *resp;

	printf("2���� ���� �̸� �Է� : ");
	scanf_s("%s%s", str1, sizeof(str1), str2, sizeof(str2));
	if (strlen(str1) > strlen(str2))
	{
		resp = str1;
	}
	else
	{
		resp = str2;
	}
	printf("�̸��� �� ������ : %s\n", resp);

	return 0;
}*/


//strlen �Լ� [�̿�]


/* #include<stdio.h>
#include<string.h>

int my_strlen(char *ps);

int main()
{
	char str[80];
	
	printf("���� �̸� �Է� : ");
	scanf_s("%s", str, sizeof(str));
	my_strlen(str);
	printf("���� �̸� ���� ��: %d\n", str);

	return 0;
}

int my_strlen(char *ps)
{
	int cnt = 0;

	while (*ps != '\0')
	{
		cnt++;
		ps++;
	}

	return cnt;
}*/



// strcat, strncat �Լ��� ����� ���ڿ� ���̱�


/* #include<stdio.h>
#include<string.h>

int main()
{
	char str[80] = "straw";

	strcat(str, "berry");
	printf("%s\n", str);
	strncat(str, "piece", 3);
	printf("%s\n", str);

	return 0;
}*/


//strcmp, strncmp �Լ��� ����� ���ڿ� ��


/* #include<stdio.h>
#include<string.h>

int main()
{
	char str1[80] = "pear";
	char str2[80] = "peach";
	printf("������ ���߿� ������ ���� �̸� :");
	if (strcmp(str1, str2) > 0) printf("%s\n", str1);
	else printf("%s\n", str2);

	printf("�տ��� 3���� ���ڸ� ���ϸ� ");
	if (strncmp(str1, str2, 3) == 0) printf("����.\n");
	else printf("�ٸ���.\n");

	return 0;
}*/

//p.375 �������� 3��


/* #include<stdio.h>
#include<string.h>

int main()
{
	char str[80];
	strcpy_s(str, sizeof(str) ,"wine");
	strcat(str, "apple");
	strncpy(str, "pear", 1);
	printf("%s, %d\n", str, strlen(str));

	return 0;
}*/


//�������� 4��


/* #include<stdio.h>
#include<string.h>

int main()
{
	char str1[80];
	char str2[80];

	printf("�� �ܾ� �Է� :");
	scanf_s("%s%s", str1, sizeof(str1), str2, sizeof(str2));
	if (strlen(str1) > strlen(str2)) printf("���̰� �� �ܾ� : %s\n", str1);
	else printf("���̰� �� �ܾ� : %s\n", str2);

	if (strcmp(str1, str2) < 0) printf("������ ���� ������ �ܾ� : %s\n", str1);
	else printf("������ ���� ������ �ܾ� : %s\n", str2);

	return 0;

}*/


// �������� 4�� �ٸ�����[������ ���]

/*
#include<stdio.h>
#include<string.h>

int main()
{
	char str1[80];
	char str2[80];
	char *pa, *pb;

	printf("�� �ܾ� �Է� :");
	scanf_s("%s%s", str1, sizeof(str1), str2, sizeof(str2));

	if (strlen(str1) > strlen(str2)) pa = str1;
	else pa = str2;

	if (strcmp(str1, str2) < 0) pb = str1;
	else pb = str2;

	printf("���̰� �� �ܾ� : %s\n", pa);
	printf("������ ���� ������ �ܾ� : %s\n", pb);

	return 0;
}*/



// �������� 5��


#include<stdio.h>
#include<string.h>

int main()
{
	char str[80];
	char res_str[80];
	char *star = "**********";
	int len,i;

	for (i = 1; i < 6; i++)
	{
		printf("[��.��.��.�� %d]\n", i);
		printf("�ܾ� �Է� :");
		scanf_s("%s", str, sizeof(str));
		len = strlen(str);
		if (len <= 5)
		{
			strcpy(res_str, str);
		}
		else
		{
			strncpy(res_str, str, 5);
			res_str[5] = '\0';
			strncat(res_str, star, len - 5);
		}
		printf("�Է��� �ܾ� : %s, ������ �ܾ� : %s\n", str, res_str);
	}

	return 0;
}
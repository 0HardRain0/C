//���ڿ��� ������


//���ڿ� ����� �ּҶ� ����

/* #include<stdio.h>

int main()
{
	printf("�ּҰ� : %p\n", "mango");
	printf("ù ��° ���� : %c\n", *"mango");
	printf("�� ��° ���� : %c\n", *("mango" + 1));
	printf("�� ��° ���� : %c\n", *("mango" + 2));

	return 0;
}*/


//�����ͷ� ���ڿ��� ����ϴ� ���

/* #include<stdio.h>

int main()
{
	char *dessert = "apple";                             //�����Ϳ� ���ڿ� �ʱ�ȭ

	printf("���� �Ľ��� %s�Դϴ�.\n", dessert);
	dessert = "banana";                                  //���ο� ���ڿ� ����
	printf("���� �Ľ��� %s�Դϴ�.\n", dessert);

	return 0;
}

#include<stdio.h>

int main()
{
	char *pa = "apple";
	char *pb = "apple";
	printf("%p, %p", pa, pb);             //�����Ͱ� ���� ���� ����ϹǷ� ����ȭ �Ǿ�����.

	return 0;
}*/



//scanf�Լ��� ����� ���ڿ� �Է�


/* #include<stdio.h>

int main()
{
	char str[80];

	printf("���ڿ� �Է� :");
	scanf_s("%s", str, sizeof(str));
	printf("ù ��° �ܾ� : %s\n", str);
	scanf_s("%s", str, sizeof(str));
	printf("���ۿ� ���� �ִ� �� ��° �ܾ� : %s\n", str);

	return 0;
}*/




//get�Լ��� �� ���� ���ڿ� �Է�


/* #include<stdio.h>

int main()
{
	char str[80];

	printf("������ ���Ե� ���ڿ� �Է� :");
	gets(str);
	printf("�Է��� ���ڿ��� %s�Դϴ�.", str);

	return 0;
}*/


//get�Լ��� �Ȱ��� �۵��ϴ� �Լ�(�̿ϼ�)


/* #include<stdio.h>

void my_gets(char *ps);

int main()
{
	char str[80];
	my_gets(str);
	printf("�Է��� ���ڿ��� %s�Դϴ�.", str);

	return 0;
}

void my_gets(char *ps)            //gets�۵�����
{

	while((ps = getchar()) != '\n');
	{
		*ps = ps;
		ps++;
	}
	*ps = '\0';

}*/




//fgets�Լ��� ���ڿ� �Է� ���


/* #include<stdio.h>

int main()
{
	char str[80];

	printf("������ ���Ե� ���ڿ� �Է� :");
	fgets(str, sizeof(str), stdin);
	printf("�Էµ� ���ڿ��� %s�Դϴ�.\n", str);

	return 0;
}*/



//���� ���ڷ� ���� gets�Լ��� �Է��� ���ϴ� ���


/* #include<stdio.h>

int main()
{
	int age;
	char name[20];

	printf("���� �Է� :");
	scanf_s("%d", &age);
	printf("�̸� �Է� :");
	gets(name);
	printf("���� : %d, �̸� : %s\n", age, name);
	// getchar();  ���ۿ��� �ϳ��� ���ڸ� �о ��ȯ, ��ȯ���ڴ� ����
	// scanf_s("%*c");   ���ۿ��� �ϳ��� ���ڸ� �о ����, ������ �ʿ� ����
	// fgets(stdin);     ���ۿ��� �ϳ��� ���ڸ� �о ��ȯ, ��ȯ ���ڴ� ����
	return 0;
}*/



//���ڿ��� ����ϴ� puts�� fputs�Լ�

/* #include<stdio.h>

int main()
{
	char str[80] = "apple juice";
	char *ps = "banana";

	puts(str);
	fputs(ps, stdout);
	puts("milk");

	return 0;
}*/



// p.358 ��������[1��]


/* #include<stdio.h>

int main()
{
	char *ps = "applepie";

	ps += 5;
	printf("%s", ps);

	return 0;
}*/


// �������� 3��

/* #include<stdio.h>

int main()
{
	char *ps = "banana";

	while (*ps != '\0')
	{
		printf("%s\n", ps);
		ps++;
	}
	return 0;
} */



//�������� 4�� (�������� ã�� �ʿ��� ���� �߰�)


/* #include<stdio.h>

int main()
{
	char ani[20];
	char why[80];

	printf("�����ϴ� ���� :");
	scanf_s("%s%*c", ani, sizeof(ani));
	//������ fflush(stdin);�� ���Ǿ�� �ϳ� ���� �����Ϸ������� �۵��� �ȵ�.
	printf("�����ϴ� ���� :");
	fgets(why, sizeof(why), stdin);
	printf("%s is %s", ani, why);

	return 0;

}*/



//�������� 5��


#include<stdio.h>
#include<string.h>

int main()
{
	char name[20];
	char num[20];
	char add[40];

	printf("�̸� :");
	fgets(name, sizeof(name), stdin);
	name[strlen(name) - 1] = '\0';
	printf("��ȭ��ȣ :");
	fgets(num, sizeof(num), stdin);
	num[strlen(num) - 1] = '\0';
	printf("�ּ� :");
	fgets(add, sizeof(add), stdin);
	add[strlen(add) - 1] = '\0';
	printf("%s, %s, %s", name, num, add);

	return 0;
}
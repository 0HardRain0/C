// �ƽ�Ű �ڵ尪�� ���� ����� �Լ�



//����ó�� ���Ǵ� ����

/*#include<stdio.h>

int main()
{
	int ch;

	printf("���� a�� �ƽ�Ű �ڵ尪 : %d\n", 'a');
	printf("�ƽ�Ű �ڵ尪�� 97�� ���� : %c\n", 97);
	printf("���� ����� ũ�� : %d����Ʈ\n", sizeof('a'));
	
	ch = 'a';
	while (ch <= 'z')
	{
		printf("%c", ch);
		ch++;
	}
	

	return 0;
}*/



// �빮�ڸ� �ҹ��ڷ� ����


/* #include<stdio.h>

int main()
{
	char small, cap = 'G';

	if ((cap >= 'A') && (cap <= 'Z'))
	{
		small = cap + ('a' - 'A');
	}
	printf("�빮�� : %c %c", cap, '\n');
	printf("�ҹ��� : %c", small);

	return 0;
}*/



// �����̳� ���� ������ �Է�

/* #include<stdio.h>

int main()
{
	char ch1, ch2;

	scanf_s("%c%c", &ch1, 1, &ch2, 1);  //scanf_s���� %s�� %c�� �Է��� ��� �ڿ� ���� ���� �Է��ؾ���.
	printf("[%c%c]", ch1, ch2);

	return 0;
}*/



//getchar�� putchar �Լ� ���


/* #include<stdio.h>

int main()
{
	int ch;

	ch = getchar();
	printf("�Է��� ���� :");
	putchar(ch);
	putchar('\n');

	return 0;
}*/


//p.326 �������� 2��


/* #include<stdio.h>

int main()
{
	char ch;

	printf("���� �Է� :");
	scanf_s("%c", &ch, 2);
	printf("Q������ �ƽ�Ű �ڵ尪 : %d\n", ch);

	return 0;
} */



// �������� 3��


/* #include<stdio.h>

int main()
{
	int ch;
	scanf_s("%c", &ch, 1);
	printf("%c", ch);

	return 0;
} */



// �������� 4��


/* #include<stdio.h>

int main()
{
	int ch, num;

	printf("�ϳ��� ���� �Է�(0~9) :");
	ch = getchar();
	num = ch - '0';
	num++;
	printf("%c�� 1�� ���� ���� %d�Դϴ�.\n", ch, num);

	return 0;
} */



// ���� ���� 5��

#include<stdio.h>

int main()
{
	char space, tap, enter;

	scanf_s("%c%c%c", &space,1 , &tap,1, &enter,1);
	printf("�����̽� Ű�� �ƽ�Ű �ڵ尪 : %d\n", space);
	printf("�� Ű�� �ƽ�Ű �ڵ尪 : %d\n", tap);
	printf("���� Ű�� �ƽ�Ű �ڵ尪 : %d\n", enter);

	return 0;

}
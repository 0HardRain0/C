// p.342 ���� ���� ����


// ���̰� ���� �� �ܾ� ã�� [1��]


/*#include<stdio.h>

int main()
{
	char ch;
	int len, max = 0;

	while(1)
	{
		len = 0;

		ch = getchar();                          //�����Է�
		while ((ch != -1) && (ch != '\n'))       //ctrl + Z�� Enter�� ġ�� �ʴ� ����
		{
			len++;                               //������ ���� ����
			ch = getchar();
		}
		if (ch == -1)break;                      //ctrl + z�� �ݺ� ����
		if (len > max) max = len;                //�ܾ��� ���̺��� ��� �� ���� ���� �� ���̷� ����
	}
	printf("���� �� �ܾ��� ���� : %d\n", max);

	return 0;
}*/




// ��ҹ��� ��ȯ ���α׷� [2��]


/* #include<stdio.h>

int main()
{
	char ch;
	
	while ((ch = getchar()) != '\n') 
	{
		if ((ch >= 'A') && (ch <= 'Z'))
		{
			ch += ('a' - 'A');
		}
		else if ((ch >= 'a') && (ch <= 'z'))
		{
			ch -= ('a' - 'A');
		}
		putchar(ch);
	}

	return 0;
} */



// ���ڿ� ���� ��ȯ ���α׷� [3��]


#include<stdio.h>

int main()
{
	char ary[10];
	int ch;
	int weight = 1;
	int tot = 0;
	int i = 0;

	while ((ch = getchar()) != '\n')
	{
		ary[i++] = ch;
	}

	while (i > 0)
	{
		tot += ((ary[--i] - '0') * weight);
		weight *= 10;
	}

	printf("%d\n", tot + 10);

	return 0;

}
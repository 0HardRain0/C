//���� ���α׷��� Ű����κ��� �Է��� �� ���� ���ڿ��� ������ �� ������ ���ϴ� ���α׷��Դϴ�.

#include<stdio.h>

int main()
{
	char buf1[100], buf2[100];
	int strcomp(char buf1[], char buf2[]);

	printf("Please Enter a String:");
	scanf_s("%s", buf1, sizeof(buf1));
	printf("Please Enter a String:");
	scanf_s("%s", buf2, sizeof(buf2));

	if (strcomp(buf1, buf2))
	{
		printf("Equal!!\n");
	}
	else
	{
		printf("Different!!\n");
	}

	return 0;
}

int strcomp(char buf1[], char buf2[])
{
	int i = 0, flg = 0;

	while (buf1[i] == buf2[i])
	{
		if ((buf1[i] == '\0') && (buf2[i] == '\0'))
		{
			flg = 1;
			break;
		}
		i++;
	}

	return flg;
}
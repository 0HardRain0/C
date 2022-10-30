//다음 프로그램은 키보드로부터 입력한 두 개의 문자열이 같은지 안 같은지 비교하는 프로그램입니다.

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
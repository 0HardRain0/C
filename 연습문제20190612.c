//다음 프로그램은 키보드로부터 문자와 문자열을 하나씩 입력하여, 입력한 문자가 문자열안에 얼마나 들어가있는지 구하는 프로그램입니다.

#include<stdio.h>

void main()
{
	char buf[100], c;
	int numstr(char buf[], char c);

	printf("Please Enter a Character:");
	scanf_s("%c", &c, sizeof(c));
	printf("Please Enter a String:");
	scanf_s("%s", buf, sizeof(buf));
	printf("Character <%c> = %d 개\n", c, numstr(buf,c));

}

int numstr(char buf[], char c)
{
	int i, cnt = 0;

	for (i = 0; buf[i] != '\0'; i++)
	{
		if (buf[i] == c)
		{
			cnt++;
		}
	}
	return cnt;
}
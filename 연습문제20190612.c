//���� ���α׷��� Ű����κ��� ���ڿ� ���ڿ��� �ϳ��� �Է��Ͽ�, �Է��� ���ڰ� ���ڿ��ȿ� �󸶳� ���ִ��� ���ϴ� ���α׷��Դϴ�.

#include<stdio.h>

void main()
{
	char buf[100], c;
	int numstr(char buf[], char c);

	printf("Please Enter a Character:");
	scanf_s("%c", &c, sizeof(c));
	printf("Please Enter a String:");
	scanf_s("%s", buf, sizeof(buf));
	printf("Character <%c> = %d ��\n", c, numstr(buf,c));

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
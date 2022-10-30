// p.379 ���� ���� ���� [1��]

/* #define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[20], str2[20], str3[30];
	char temp[20];

	printf("�� ���� �ܾ� �Է� : ");
	scanf("%s%s%s", str1, str2, str3);

	if (strcmp(str1, str2) > 0)  // st1�� str2���� ������ �ڿ� ������ �� ���ڿ��� �ٲ۴�
	{
		strcpy(temp, str1);
		strcpy(str1, str2);
		strcpy(str2, temp);
	}

	if (strcmp(str1, str3) > 0)  // st1�� str3���� ������ �ڿ� ������ �� ���ڿ��� �ٲ۴�
	{
		strcpy(temp, str1);
		strcpy(str1, str3);
		strcpy(str3, temp);
	}

	if (strcmp(str2, str3) > 0)  // st2�� str3���� ������ �ڿ� ������ �� ���ڿ��� �ٲ۴�
	{
		strcpy(temp, str2);
		strcpy(str2, str3);
		strcpy(str3, temp);
	}

	printf("%s, %s, %s\n", str1, str2, str3);

	return 0;
} */


// ���� ���� ���� [2��]

/* #define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{
	char str[800] = {0};
	char temp[40];

	while (1)
	{
		printf("�ܾ� �Է� :");
		scanf("%s", temp);
		if (strcmp(temp, "end") == 0) break;
		
		strcat(str, temp);
		printf("��������� ���ڿ� : %s\n", str);
		strcat(str, " ");
				
	}
	
	return 0;
} */

// ���� ���� ����[3��] �ٽ� �ڵ��غ���

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[800];        // ������ �Է��� �迭
	char ss[80];          // �˻��� ���ڿ��� �Է��� �迭
	int cnt = 0, i;       // cnt ã�� ���ڿ��� ���� ������ ����, i�� �ݺ� �����
	int str_len, ss_len;  // ������ ���̿� ã�� ���ڿ��� ���̸� ������ ����

	printf("���� �Է� : ");
	fgets(str, sizeof(str), stdin);
	str[strlen(str) - 1] = '\0';                   // ���ٹ��� ����
	str_len = strlen(str);                         // �Էµ� ������ ���� ���

	while (1)
	{
		cnt = 0;                                   // ���� ���� �ʱ�ȭ

		printf("�˻��� ���ڿ� �Է� (����� end) : ");
		fgets(ss, sizeof(ss), stdin);
		ss[strlen(ss) - 1] = '\0';
		if (strcmp(ss, "end") == 0) break;          // ã�� ���ڿ��� end�̸� �ݺ� ����
		ss_len = strlen(ss);                       // ã�� ���ڿ��� ���� ���

		for (i = 0; i < str_len; i++)               // ù ���ں��� ��ġ�ϴ� ���ڿ� �˻�
		{
			if ((str_len - i) < ss_len) break;      // ���� ���̰� �˻��� ���ڿ����� ������ �˻� ����
			if (strncmp(ss, str + i, ss_len) == 0)  // ã�� ���ڿ��� ���� ��ŭ ��
			{
				cnt++;                             // ã�� ���ڿ� �� ����
				i += (ss_len - 1);                 // ã�� ���ڿ� ���ĺ��� �ٽ� �˻�
			}
		}

		printf("�˻� ��� : %d��\n", cnt);
	}

	return 0;
}

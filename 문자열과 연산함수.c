// 문자열과 연산 함수

//strcpy 함수의 사용법
/*
#include<stdio.h>
#include<string.h>

int main()
{
	char str1[80] = "strawberry";
	char str2[80] = "apple";
	char *ps1 = "banana";
	char *ps2 = str2;

	printf("최초 문자열 : %s\n", str1);
	strcpy_s(str1,sizeof(str1), str2);             //strcpy_s 함수 사용시 strcpy_s(변수, 변수의 크기, 변수)로 작성해야함
	printf("바뀐 문자열 : %s\n", str1);

	strcpy_s(str1, sizeof(str1), ps1);
	printf("바뀐 문자열 : %s\n", str1);
	strcpy_s(str1, sizeof(str1), ps2);
	printf("바뀐 문자열 : %s\n", str1);

	strcpy_s(str1, sizeof(str1), "banana");
	printf("바뀐 문자열 : %s\n", str1);
	
	return 0;
}*/


//strcpy와 기능이 같은 함수의 구현


/* #include<stdio.h>

char *my_strcpy(char *pd, char *ps);

int main()
{
	char str[80] = "strawberry";

	printf("바꾸기 전 문자열 : %s\n", str);
	my_strcpy(str, "apple");
	printf("바꾼 후 문자열 : %s\n", str);
	printf("다른 문자열 대입 : %s\n", my_strcpy(str, "kiwi"));
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


//strncpy 함수를 사용한 문자열 복사

/* #include<stdio.h>
#include<string.h>

int main()
{
	char str[20] = "mango tree";
	strncpy(str, "apple-tree", 5);         //strncpy 함수는 그대로 사용하는것이 좋음. (표준)
	printf("%s\n", str);

	return 0;
}*/


//두 문자열 중 길이가 긴 단어 출력


/* #include<stdio.h>
#include<string.h>

int main()
{
	char str1[80], str2[80];
	char *resp;

	printf("2개의 과일 이름 입력 : ");
	scanf_s("%s%s", str1, sizeof(str1), str2, sizeof(str2));
	if (strlen(str1) > strlen(str2))
	{
		resp = str1;
	}
	else
	{
		resp = str2;
	}
	printf("이름이 긴 과일은 : %s\n", resp);

	return 0;
}*/


//strlen 함수 [미완]


/* #include<stdio.h>
#include<string.h>

int my_strlen(char *ps);

int main()
{
	char str[80];
	
	printf("과일 이름 입력 : ");
	scanf_s("%s", str, sizeof(str));
	my_strlen(str);
	printf("과일 이름 글자 수: %d\n", str);

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



// strcat, strncat 함수를 사용한 문자열 붙이기


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


//strcmp, strncmp 함수를 사용한 문자열 비교


/* #include<stdio.h>
#include<string.h>

int main()
{
	char str1[80] = "pear";
	char str2[80] = "peach";
	printf("사전에 나중에 나오는 과일 이름 :");
	if (strcmp(str1, str2) > 0) printf("%s\n", str1);
	else printf("%s\n", str2);

	printf("앞에서 3개의 문자를 비교하면 ");
	if (strncmp(str1, str2, 3) == 0) printf("같다.\n");
	else printf("다르다.\n");

	return 0;
}*/

//p.375 연습문제 3번


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


//연습문제 4번


/* #include<stdio.h>
#include<string.h>

int main()
{
	char str1[80];
	char str2[80];

	printf("두 단어 입력 :");
	scanf_s("%s%s", str1, sizeof(str1), str2, sizeof(str2));
	if (strlen(str1) > strlen(str2)) printf("길이가 긴 단어 : %s\n", str1);
	else printf("길이가 긴 단어 : %s\n", str2);

	if (strcmp(str1, str2) < 0) printf("사전에 먼저 나오는 단어 : %s\n", str1);
	else printf("사전에 먼저 나오는 단어 : %s\n", str2);

	return 0;

}*/


// 연습문제 4번 다른예시[포인터 사용]

/*
#include<stdio.h>
#include<string.h>

int main()
{
	char str1[80];
	char str2[80];
	char *pa, *pb;

	printf("두 단어 입력 :");
	scanf_s("%s%s", str1, sizeof(str1), str2, sizeof(str2));

	if (strlen(str1) > strlen(str2)) pa = str1;
	else pa = str2;

	if (strcmp(str1, str2) < 0) pb = str1;
	else pb = str2;

	printf("길이가 긴 단어 : %s\n", pa);
	printf("사전에 먼저 나오는 단어 : %s\n", pb);

	return 0;
}*/



// 연습문제 5번


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
		printf("[실.행.결.과 %d]\n", i);
		printf("단어 입력 :");
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
		printf("입력한 단어 : %s, 생략한 단어 : %s\n", str, res_str);
	}

	return 0;
}
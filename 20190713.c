// p.379 도전 실전 예제 [1번]

/* #define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[20], str2[20], str3[30];
	char temp[20];

	printf("세 개의 단어 입력 : ");
	scanf("%s%s%s", str1, str2, str3);

	if (strcmp(str1, str2) > 0)  // st1이 str2보다 사전의 뒤에 나오면 두 문자열을 바꾼다
	{
		strcpy(temp, str1);
		strcpy(str1, str2);
		strcpy(str2, temp);
	}

	if (strcmp(str1, str3) > 0)  // st1이 str3보다 사전의 뒤에 나오면 두 문자열을 바꾼다
	{
		strcpy(temp, str1);
		strcpy(str1, str3);
		strcpy(str3, temp);
	}

	if (strcmp(str2, str3) > 0)  // st2이 str3보다 사전의 뒤에 나오면 두 문자열을 바꾼다
	{
		strcpy(temp, str2);
		strcpy(str2, str3);
		strcpy(str3, temp);
	}

	printf("%s, %s, %s\n", str1, str2, str3);

	return 0;
} */


// 도전 실전 예제 [2번]

/* #define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{
	char str[800] = {0};
	char temp[40];

	while (1)
	{
		printf("단어 입력 :");
		scanf("%s", temp);
		if (strcmp(temp, "end") == 0) break;
		
		strcat(str, temp);
		printf("현재까지의 문자열 : %s\n", str);
		strcat(str, " ");
				
	}
	
	return 0;
} */

// 도전 실전 예제[3번] 다시 코딩해보기

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[800];        // 문장을 입력할 배열
	char ss[80];          // 검색할 문자열을 입력할 배열
	int cnt = 0, i;       // cnt 찾은 문자열의 수를 누적할 변수, i는 반복 제어변수
	int str_len, ss_len;  // 문장의 길이와 찾을 문자열의 길이를 저장할 변수

	printf("문장 입력 : ");
	fgets(str, sizeof(str), stdin);
	str[strlen(str) - 1] = '\0';                   // 새줄문자 제거
	str_len = strlen(str);                         // 입력된 문장의 길이 계산

	while (1)
	{
		cnt = 0;                                   // 누적 변수 초기화

		printf("검색할 문자열 입력 (종료는 end) : ");
		fgets(ss, sizeof(ss), stdin);
		ss[strlen(ss) - 1] = '\0';
		if (strcmp(ss, "end") == 0) break;          // 찾을 문자열이 end이면 반복 종료
		ss_len = strlen(ss);                       // 찾을 문자열의 길이 계산

		for (i = 0; i < str_len; i++)               // 첫 문자부터 일치하는 문자열 검색
		{
			if ((str_len - i) < ss_len) break;      // 남은 길이가 검색할 문자열보다 작으면 검색 종료
			if (strncmp(ss, str + i, ss_len) == 0)  // 찾을 문자열의 길이 만큼 비교
			{
				cnt++;                             // 찾은 문자열 수 증가
				i += (ss_len - 1);                 // 찾은 문자열 이후부터 다시 검색
			}
		}

		printf("검색 결과 : %d개\n", cnt);
	}

	return 0;
}

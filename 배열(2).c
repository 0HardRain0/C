//문자를 저장하는 배열

//문자열을 저장하는 char형 배열

/* #include<stdio.h>

int main()
{
	char str[80] = "applejam";

	printf("최초 문자열 : %s\n", str);
	printf("문자열 입력 :");
	scanf_s("%s", str, sizeof(str));
	printf("입력 후 문자열 : %s\n", str);

	return 0;
} */

// 널문자가 없는 문자열

/* #include<stdio.h>

int main()
{
	char str[5];

	str[0] = 'O';
	str[1] = 'K';             //이 다음 저장된 요소의 값이 널문자가 아니므로 쓰레기 값이 출력
	printf("%s\n", str);

	return 0;
} */

// 문자열을 대입하는 strcpy함수

/*
#include<stdio.h>
#include<string.h>

int main()
{
	char str1[80] = "cat";
	char str2[80];

	strcpy_s(str1, 80 ,"tiger");    //strcpy_s 함수는 VS2017에서 strcpy함수의 단점을 보완하기 위해 만들어짐. strcpy_s(변수, 변수크기, 변수)로 작성되어야함
	strcpy_s(str2, 80 ,str1);
	printf("%s, %s\n", str1, str2);

	return 0;
} */


//빈칸을 포함한 문자열 입력 (gets, puts)

/* #include<stdio.h>

int main()
{
	char str[80];

	printf("문자열 입력 : ");
	gets(str);
	puts("입력된 문자열 : ");
	puts(str);

	return 0;
}*/ 


// 연습문제(5)

#define _CRT_SECURE_NO_WARNINGS      //strcpy 함수를 이용하기 위해 작성해야함. 
#include<stdio.h>
#include<string.h>

int main()
{
	char str[80] = "bananajuice";

	strcpy(str, "apple");  //strcpy_s 함수로 작성시 apple- 이후로 쓰레기 값이 출력되므로 주의.
	str[5] = '-';
	puts(str);

	return 0;
}

//출력결과 : apple-juice
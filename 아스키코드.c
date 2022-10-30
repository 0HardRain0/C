// 아스키 코드값과 문자 입출력 함수



//정수처럼 사용되는 문자

/*#include<stdio.h>

int main()
{
	int ch;

	printf("문자 a의 아스키 코드값 : %d\n", 'a');
	printf("아스키 코드값이 97인 문자 : %c\n", 97);
	printf("문자 상수의 크기 : %d바이트\n", sizeof('a'));
	
	ch = 'a';
	while (ch <= 'z')
	{
		printf("%c", ch);
		ch++;
	}
	

	return 0;
}*/



// 대문자를 소문자로 변경


/* #include<stdio.h>

int main()
{
	char small, cap = 'G';

	if ((cap >= 'A') && (cap <= 'Z'))
	{
		small = cap + ('a' - 'A');
	}
	printf("대문자 : %c %c", cap, '\n');
	printf("소문자 : %c", small);

	return 0;
}*/



// 공백이나 제어 문자의 입력

/* #include<stdio.h>

int main()
{
	char ch1, ch2;

	scanf_s("%c%c", &ch1, 1, &ch2, 1);  //scanf_s에서 %s나 %c를 입력할 경우 뒤에 문자 수를 입력해야함.
	printf("[%c%c]", ch1, ch2);

	return 0;
}*/



//getchar와 putchar 함수 사용


/* #include<stdio.h>

int main()
{
	int ch;

	ch = getchar();
	printf("입력한 문자 :");
	putchar(ch);
	putchar('\n');

	return 0;
}*/


//p.326 연습문제 2번


/* #include<stdio.h>

int main()
{
	char ch;

	printf("문자 입력 :");
	scanf_s("%c", &ch, 2);
	printf("Q문자의 아스키 코드값 : %d\n", ch);

	return 0;
} */



// 연습문제 3번


/* #include<stdio.h>

int main()
{
	int ch;
	scanf_s("%c", &ch, 1);
	printf("%c", ch);

	return 0;
} */



// 연습문제 4번


/* #include<stdio.h>

int main()
{
	int ch, num;

	printf("하나의 숫자 입력(0~9) :");
	ch = getchar();
	num = ch - '0';
	num++;
	printf("%c에 1을 더한 값은 %d입니다.\n", ch, num);

	return 0;
} */



// 연습 문제 5번

#include<stdio.h>

int main()
{
	char space, tap, enter;

	scanf_s("%c%c%c", &space,1 , &tap,1, &enter,1);
	printf("스페이스 키의 아스키 코드값 : %d\n", space);
	printf("탭 키의 아스키 코드값 : %d\n", tap);
	printf("엔터 키의 아스키 코드값 : %d\n", enter);

	return 0;

}
//while 문을 사용한 반복문

/* #include<stdio.h>

int main()
{
	int a = 1;

	while (a < 10) // a가 1보다 작으므로 조건식은 참
	{
		a = a * 2; // a에 2를 곱하여 a에 다시 저장
	}
	printf("a : %d\n", a);

	return 0;
} */

// 결과 a : 16

//for문을 사용한 반복문

/* #include<stdio.h>

int main()
{
	int a = 1;
	int i;                      //반복 횟수를 세기 위한 변수

	for (i = 0; i < 3; i++)     //i는 0으로 초기화된 후에 3보다 작은 동안 하나씩 증가하면서 실행문을 실행
	{     
		a = a * 2;
	}
	printf("a : %d\n", a);      //for문을 빠져나오면 a값 출력

	return 0;
} */

// 결과 a : 8


//for문을 while문으로 바꾸는 것도 가능

//while문
/* #include<stdio.h>

int main()
{
	int i = 0;

	while (i < 9)
	{
		printf("Be Happy\n");
		i++;
	}
	return 0;
} */

//for문
/* #include<stdio.h>

int main()
{
	int i;

	for (i = 0; i < 9; i++)
	{
		printf("Be Happy\n");
	}
	return 0;
} */



// do ~ while문을 사용한 반복문
// do ~ while문은 조건식과 관계없이 반복할 문장을 최소한 한 번은 실행함.

/* #include<stdio.h>

int main()
{
	int a = 1;

	do                        // 반복문 시작 위치
	{
		a = a * 2;            // a의 값을 2배로 늘린다.
	} while (a < 10);         // a가 10보다 작으면 9행을 반복
	printf("a : %d\n", a);    // 반복이 끝난 후 a값 출력

	return 0;
} */

// 연습문제(1) C언어 p.178

/*#include<stdio.h>  //내가 작성한 프로그램

int main()
{
	int a, i;
	printf("숫자를 입력해주세요.(문자는 오류가 발생합니다.)\n");
	scanf_s("%d", &a);
	while (a < 0)
	{
		printf("왠만하면 정수를 입력해주세요.\n");
		scanf_s("%d", &a);
	}
	for (i = 0; i < 5; i++)
	{
		printf("Be Happy\n");
	}

	return 0;
}*/


//해설

/* #include<stdio.h>

int main()
{
	int a, i;
	//do ~ while문으로 반복할 문장을 실행한 후에 조건 검사. 입력된 값이 음수면 다시 입력하고 0을 포함하여 양수가 입력되면 반복을 끝냄.
	do {
		scanf_s("%d", &a);
	} while (a < 0);
	
	for (i = 0; i < 5; i++)
	{
		printf("Be Happy\n");
	}

	return 0;
}*/

//연습문제(2)

/* #include<stdio.h>

int main()
{
	int i;
	
	for (i = 0; i < 10; i++)
	{
		printf("$");
	}
	return 0;
} */

//연습문제(3)

#include<stdio.h>

int main()
{
	int i;
	
	for (i = 1; i <= 15; i++)
	{
		printf("*");
		if (i % 5 == 0)
		{
			printf("\n");
		}
	}

	return 0;
}
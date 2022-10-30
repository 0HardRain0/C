//반복문 활용(중첩 반복문)

//중첩 반복문을 사용한 별 출력

/* #include<stdio.h>

int main()
{
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}*/

// 결과 : 별을 5번 출력한 것이 3번 반복됨.


// 구구단

/* #include<stdio.h>

int main()
{
	int i, j;

	for (i = 1; i <= 9; i++)
	{
		printf("%d단\n", i);
		for (j = 1; j <= 9; j++)
		{
			printf("%d * %d = %d\n", i, j, i * j);
		}
		printf("\n");
	}
	return 0;
} */

//결과 : 1단 ~ 9단


//break문을 사용한 반복 종료

/* #include<stdio.h>

int main()
{
	int i;                         // 반복을 세기 위한 제어 변수
	int sum = 0;                   // 1부터 10까지의 합을 누적할 변수

	for (i = 0; i <= 10; i++)      // i는 1부터 10까지 증가하면서 10번 반복
	{
		sum += i;                  // i값을 sum에 누적
		if (sum > 30) break;       // 누적한 값이 30 보다 크면 반복문 종료
	}
	printf("누적한 값 : %d\n", sum);
	printf("마지막으로 더한 값 : %d\n", i);

	return 0;
} */

// 결과 : 누적한 값: 36, 마지막으로 더한 값 : 8



// 무한 반복문

/* #include<stdio.h>

int main()
{
	int cnt = 0;

	while (1)
	{
		printf("Be Happy\n");
		cnt++;
		if (cnt == 5)break;
	}
	return 0;
} */

// 결과 : 값이 5번 출력 


// 연습문제(2) : 중첩 반복문을 사용하여 $를 3행 5열의 형태로 출력

/* #include<stdio.h>

int main()
{
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("$");
		}
		printf("\n");
	}

	return 0;
} */



// 연습문제(3) 

/* #include<stdio.h>

int main()
{
	int i, j;

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("@");
			if (i == j) break;
		}
		printf("\n");
	}

	return 0;
} */

// 연습문제(3) [심플]

/* #include<stdio.h>

int main()
{
	int i, j;

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < i + 1; j++)
		{
			printf("@");
		}
		printf("\n");
	}

	return 0;
} */

// 연습문제(4) : 다시 풀어보기

/* #include<stdio.h>

int main()
{
	int i, j, num;

	for (i = 0; i < 5; i++)
	{
		// 첫번째 j-for문은 숫자를 출력하기 전에 빈칸을 출력
		for (j = 0; j < 4 - i; j++) // i가 증가할 때마다 빈칸 출력 횟수는 4-i에 의해 하나씩 감소
		{
			printf(" ");
		}

		num = 1;
		// 두 번째 j-for문은 숫자를 하나씩 증가시키면서 출력
		for (j = 0; j < (2 * i) + 1; j++) // i가 증가할 때마다 번호 출력 횟수는 (2*i)+1에 의해 2씩 증가한다.
		{
			printf("%d", num);    //숫자 출력
			num++;                //숫자 1증가
		}
		printf("\n");             //한 줄을 출력 후 개행
	}

	return 0;
} */

// 연습문제(5) : 다시 풀기

/* #include<stdio.h>

int main()
{
	int i, j;                            // 반복 제어 변수

	for (i = 0; i < 5; i++)              // i는 0부터 4까지 5번 반복, 행의 수
	{
		for (j = 0; j < 5; j++)          // j는 0부터 4까지 5번 반복, 열의 수
		{
			if( (i == j) || (i + j == 4) ) // 대각선의 위치가 되었을때
				printf("*");               // 별 출력
			else
				printf(" ");               //그외의 위치는 빈칸 출력
		}
		printf("\n");                      //한 행이 끝나면 개행
	}

	return 0;
} */

// 연습문제(5) 다시 풀어보기

#include<stdio.h>

int main()
{
	int i, j;

	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9; j++)
		{
			if ((i == j) || (i + j == 8))
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
	
	return 0;
}
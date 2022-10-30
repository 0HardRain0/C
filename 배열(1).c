// 배열의 선언과 사용

// 다섯 명의 나이를 저장할 배열
/* #include<stdio.h>

int main()
{
	int ary[5];                  // int형 요소 5개의 배열 선언
	      
	ary[0] = 10;                 // 첫 번째 배열 요소에 10 대입
	ary[1] = 20;                 // 두 번째 배열 요소에 20 대입
	ary[2] = ary[0] + ary[1];    // 첫 번째와 두 번째 요소를 더해 세 번째 저장
	scanf_s("%d", &ary[3]);      // 키보드로 네 번째 요소에 입력

	printf("%d\n", ary[2]);      //세 번째 배열 요소 출력
	printf("%d\n", ary[3]);      
	printf("%d\n", ary[4]);      //마지막 배열 요소는 쓰레기값

	return 0;
} */

//배열의 초기화 방법

/* #include<stdio.h>

int main()
{
	int ary1[5] = { 1,2,3,4,5 };
	int ary2[5] = { 1,2,3 };
	int ary3[5] = { 1,2,3 };
	double ary4[5] = { 1.0, 2.1, 3.2, 4.3,5.4 };
	char ary5[5] = { 'a', 'p', 'p', 'l', 'e' };

	ary1[0] = 10;
	ary1[1] = 20;
	ary1[2] = 30;
	ary1[3] = 40;
	ary1[4] = 50;

	return 0;
} */

//배열과 반복문을 사용한 성적처리 프로그램

/* #include<stdio.h>

int main()
{
	int score[5];
	int i;
	int tot = 0;
	double avg;

	for (i = 0; i < 5; i++)
	{
		printf("과목의 점수를 적어주세요.\n");
		scanf_s("%d", &score[i]);
	}
	for (i = 0; i < 5; i++)
	{
		tot += score[i];
	}
	avg = tot / 5.0;

		for (i = 0; i < 5; i++)
		{
			printf("%5d", score[i]);
		}
	printf("\n");

	printf("평균 : %.1lf\n", avg);

	return 0;
} */



//sizeof연산자를 사용한 배열

#include<stdio.h>

main()
{

	int score[5];
	int i;
	int tot = 0;
	double avg;
	int cnt;

	cnt = sizeof(score) / sizeof(score[0]);

	for (i = 0; i < cnt; i++)
	{
		scanf_s("%d", &score[i]);
	}

	for (i = 0; i < cnt; i++)
	{
		tot += score[i];
	}
	avg = tot / (double)cnt;

	for (i = 0; i < cnt; i++)
	{
		printf("%5d", score[i]);
	}
	printf("\n");

	printf("평균 : %.1lf\n", avg);

	return 0;
}
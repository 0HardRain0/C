//배열명에 정수 연산을 수행하여 배열 요소 사용

/* #include<stdio.h>

int main()
{
	int ary[3];
	int i;

	*(ary + 0) = 10;
	*(ary + 1) = *(ary + 0) + 10;

	printf("세 번째 배열 요소에 키보드 입력:");
	scanf_s("%d", ary + 2);

	for (i = 0; i < 3; i++)
	{
		printf("%5d", *(ary + i));
	}
	return 0;
}*/



// 배열명처럼 사용되는 포인터

/*#include<stdio.h>

int main()
{
	int ary[3];
	int *pa = ary;
	int i;

	*pa = 10;
	*(pa + 1) = 20;
	pa[2] = pa[0] + pa[1];

	for (i = 0; i < 3; i++)
	{
		printf("%5d", pa[i]);
	}
	return 0;
} */


//포인터를 이용한 배열의 입출력

/* #include<stdio.h>

int main()
{
	int ary[3] = { 10,20,30 };
	int *pa = ary;
	int i;

	printf("배열의 값 :");
	for (i = 0; i < 3; i++)
	{
		printf("%d ", *pa);
		pa++;
	}

	return 0;
} */


// 포인터의 뺄셈과 관계 연산

/* #include<stdio.h>

int main()
{
	int ary[5] = { 10, 20, 30, 40, 50 };
	int *pa = ary;
	int *pb = pa + 3;

	printf("pa : %u\n", pa);
	printf("pb : %u\n", pb);
	pa++;
	printf("pb - pa : %u\n", pb - pa);

	printf("앞에 있는 배열 요소의 값 출력 :");
	if (pa < pb) printf("%d\n", *pa);
	else printf("%d\n", *pb);

	return 0;
}*/


// p.299 연습문제(4)

/*#include<stdio.h>

int main()
{
	double ary[5] = { 1.2,3.5,7.4,0.5,10.0 };
	double *pa = ary;
	double total = 0.0;
	double avg = 0.0;
	int i;

	printf("배열 요소의 값 :");

	for(i = 0; i < 5;i++)
	{
		printf(" %.1f", *pa);
		total += *pa;
		pa++;
	}
	
	avg = total / 5.0;     // 5.0 대신 i도 가능. for문 마지막 출력에서 i = 5이기 때문

	printf("\n평균 : %.2f\n", avg);

	return 0;
}*/


// p.299 연습문제(5)

#include<stdio.h>

int main()
{
	int ary[] = { 10,20,30,40,50 };
	int size = sizeof(ary) / sizeof(ary[0]);
	int *pa = ary;
	int *pb = ary + (size - 1);
	int temp, i;

	while (pa < pb)
	{
		temp = *pa;
		*pa = *pb;
		*pb = temp;
		pa++;
		pb--;
	}
	for (i = 0; i < size; i++)
	{
		printf("%d ", ary[i]);
	}

	return 0;
}
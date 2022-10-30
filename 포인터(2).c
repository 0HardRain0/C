// 주소와 포인터의 크기

/* #include<stdio.h>

int main()
{
	char ch;
	int in;
	double db;

	char *pc = &ch;
	int *pi = &in;
	double *pd = &db;

	printf("char형 변수의 주소 크기 : %d\n", sizeof(&ch));
	printf("int형 변수의 주소 크기 : %d\n", sizeof(&in));
	printf("double형 변수의 주소 크기 : %d\n", sizeof(&db));

	printf("char * 포인터의 크기 :%d\n", sizeof(pc));
	printf("int * 포인터의 크기 : %d\n", sizeof(pi));
	printf("double * 포인터의 크기 : %d\n", sizeof(pd));

	printf("char * 포인터가 가르키는 변수의 크기 : %d\n", sizeof(*pc));
	printf("int * 포인터가 가르키는 변수의 크기 : %d\n", sizeof(*pi));
	printf("double * 포인터가 가르키는 변수의 크기 :%d\n", sizeof(*pd));

	return 0;
}
 */


// 허용되지 않는 포인터의 대입

/* #include<stdio.h>

int main()
{
	int a = 10;
	int *p = &a;
	double *pd;

	pd = p;
	printf("%lf\n", *pd);

	return 0;

} */


// 포인터를 사용한 두 변수의 값 교환

/*#include<stdio.h>

void swap(int *pa, int *pb);

int main()
{
	int a = 10, b = 20;

	swap(&a, &b);
	printf("a:%d, b:%d\n", a, b);

	return 0;
}

void swap(int *pa, int *pb)
{
	int temp;

	temp = *pa;
	*pa = *pb;
	*pb = temp;
}*/


// 다른 함수의 변수를 이름으로 사용

/* #include<stdio.h>

void swap();

int main()
{
	int a = 10, b = 20;                 // 여기서 선언된 변수들은 main함수에서만 사용됨
	printf("a:%d, b:%d\n", a, b);

	return 0;

}

void swap()
{
	int temp;

	temp = a;
	a = b;
	b = temp;
}*/

// 결과 : 컴파일 과정에서 오류 발생
//심각도	코드	설명	프로젝트	파일	줄	비표시 오류(Suppression) 상태
//오류(활성)	E0020	식별자 "a"이(가) 정의되어 있지 않습니다.포인터(2)	C:\Users\백우열\Documents\GitHub\Practice - C - 1\Practice - C - 1\포인터(2)\포인터(2).c	95
//오류(활성)	E0020	식별자 "b"이(가) 정의되어 있지 않습니다.포인터(2)	C:\Users\백우열\Documents\GitHub\Practice - C - 1\Practice - C - 1\포인터(2)\포인터(2).c	96
//오류	C2065	'a': 선언되지 않은 식별자입니다.포인터(2)	c : \users\백우열\documents\github\practice - c - 1\practice - c - 1\포인터(2)\포인터(2).c	95
//오류	C2065	'a': 선언되지 않은 식별자입니다.포인터(2)	c : \users\백우열\documents\github\practice - c - 1\practice - c - 1\포인터(2)\포인터(2).c	96
//오류	C2065	'b': 선언되지 않은 식별자입니다.포인터(2)	c : \users\백우열\documents\github\practice - c - 1\practice - c - 1\포인터(2)\포인터(2).c	96



// 배열명에 정수 연산을 수행하여 배열 요소 사용

#include<stdio.h>

int main()
{
	int ary[3];
	int i;

	*(ary + 0) = 10;
	*(ary + 1) = *(ary + 0) + 10;

	printf("세 번째 배열 요소에 키보드 입력 :");

	scanf_s("%d", ary + 2);

	for (i = 0; i < 3; i++)
	{
		printf("%5d", *(ary + i));
	}

	return 0;
}
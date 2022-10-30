//변수의 메모리 주소 확인

/* #include<stdio.h>

int main()
{
	int a;
	double b;
	char c;

	printf("int형 변수의 주소 : %u\n", &a);     //주소 연산자로 주소 계산
	printf("double형 변수의 주소 : %u\n", &b);
	printf("char형 변수의 주소 : %u\n", &c);

	return 0;
}  */


// 포인터의 선언과 사용

/* #include<stdio.h>

int main()
{
	int a;
	int *pa;

	pa = &a;                                  //포인터에 a의 주소 대입
	*pa = 10;                                 //포인터로 변수 a에 10 대입

	printf("포인터로 a값 출력 : %d\n", *pa);
	printf("변수명으로 a값 출력 : %d\n", a);  //변수 a값 출력

	return 0;
} */


// 포인터를 사용한 두 정수의 합과 평균 계산

/* #include<stdio.h>

int main()
{
	int a = 10, b = 15, tot;
	double avg;
	int *pa, *pb;
	int *pt = &tot;
	double *pg = &avg;

	pa = &a;
	pb = &b;

	*pt = *pa + *pb;
	*pg = *pt / 2.0;

	printf("두 정수의 값 : %d, %d\n", *pa, *pb);
	printf("두 정수의 합 : %d\n", *pt);
	printf("주 정수의 평균 : %.1lf\n", *pg);

	return 0;
} */



//const를 사용한 포인터

#include<stdio.h>

int main()
{
	int a = 10, b = 20;
	const int *pa = &a;

	printf("변수 a값 : %d\n", *pa);
	pa = &b;
	printf("변수 b값 : %d\n", *pa);
	pa = &a;                              // 여기서 *pa = a(예: *pa = 20;)로 값을 바꾸려고 하면 오류 발생.[error C2166: l-value가 const 개체를 지정합니다.]
	a = 20;                               // a를 직접 참조하여 값을 바꿈.
	printf("변수 a값 : %d\n", *pa);

	return 0;
}
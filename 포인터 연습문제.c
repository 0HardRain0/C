// p.264 연습문제(2)

/* #include<stdio.h>

int main()
{
	int a = 10;
	int *p = &a;   //포인터p는 a 값을 출력(10)
	*p = 20;       //포인터p는 현재 10을 가지고 있으나 20으로 초기화
	printf("%d\n", a); // a는 *p에서 20으로 초기화되었으므로 값은 20으로 출력

	return 0;
} */



// 연습문제(5)

/* #include<stdio.h>

int main()
{
	int a = 10, b = 20, temp;
	int *pa = &a;
	int *pb = &b;
	
	temp = *pa;
	*pa = *pb;
	*pb = temp;
	printf("%d %d\n", *pa, *pb);

	return 0;
}*/

//도전 예제 1번

/* #include<stdio.h>

void func(int *mp, int *rp);

int main()
{
	int mod, rem;

	func(&mod, &rem);

	printf("몫 : %d, 나머지 : %d", mod, rem);

	return 0;
}

void func(int *mp, int *rp)
{
	int num;

	printf("양수 입력 (입력한 숫자에 4를 나눔) :");
	scanf_s("%d", &num);

	*mp = num / 4;
	*rp = num % 4;
} */


// 도전 예제 2번

/* #include<stdio.h>

void swap(double *pa, double *pb);
void line_up(double *maxp, double *midp, double *minp);

int main()
{
	double max, mid, min;
	
	printf("실수값 세개 입력 :");
	scanf_s("%lf%lf%lf", &max, &mid, &min);
	line_up(&max, &mid, &min);
	printf("정렬된 값 출력 : %.1lf, %.1lf, %.1lf\n", max, mid, min);

	return 0;
}

void swap(double *pa, double *pb)
{
	double temp;

	temp = *pa;
	*pa = *pb;
	*pb = temp;
}

void line_up(double *maxp, double *midp, double *minp)
{
	if (*maxp < *midp) swap(maxp, midp);
	if (*maxp < *minp) swap(maxp, minp);
	if (*midp < *minp) swap(midp, minp);
} */


// 도전예제 3번

/* #include<stdio.h>

void rotate(int *pa, int *pb, int *pc);

int main()
{

	int a = 1, b = 2, c = 3;
	char ch;
	
	printf("%d:%d:%d", a, b, c);
	while(1)
	{
		scanf_s("%c", &ch, sizeof(ch));
		if (ch != '\n')
		{
			break;
		}
		rotate(&a, &b, &c);
		printf("%d:%d:%d", a, b, c);
	}
	

	return 0;
}

void rotate(int *pa, int *pb, int *pc)
{
	int temp;

	temp = *pa;
	*pa = *pb;
	*pb = *pc;
	*pc = temp;
}*/

// 
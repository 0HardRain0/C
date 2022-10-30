// 함수의 데이터 공유 방법


//10을 더하기 위해 값을 인수로 주는 경우(값을 넘겨줌)

/* #include<stdio.h>

void add_ten(int a);


int main()
{
	int a = 10;

	add_ten(a);

	printf("a : %d\n", a);

	return 0;
}

void add_ten(int a)				// 7행의 a와 다른 독립적인 저장 공간 할당
{
	a = a + 10;					// 15행의 매개변수 a에 10을 더한다.
}*/




// 포인터를 써서 변수의 값에 10을 더하는 경우 (주소를 넘겨줌)


/* #include<stdio.h>

void add_ten(int *p);

int main()
{
	int a = 10;

	add_ten(&a);
	printf("a : %d\n", a);

	return 0;
}

void add_ten(int *p)
{
	*p = *p + 10;
}*/



//주소를 반환하여 두 정수의 합 계산(주소를 반환받음)


/* #include<stdio.h>

int *sum(int a, int b);							// int형 변수의 주소를 반환하는 함수 선언

int main()
{
	int *p;										// 반환값을 저장할 포인터

	p = sum(10, 20);							// 반환된 주소는 p에 저장
	printf("두 정수의 합 : %d\n", *p);			// p가 가르키는 변수값 출력

	return 0;
}

int *sum(int a, int b)							// int형 변수의 주소를 반환하는 함수
{
	static int res;								// 정적 지역 변수

	res = a + b;								// 두 정수의 합을 res에 저장

	return &res;								// 정적 지역 변수의 주소 반환
}*/



// 연습문제 4번


#include<stdio.h>

int quot(int a, int b, int *p);

int main()
{
	int a, b, res;

	printf("두 정수 입력:");
	scanf_s("%d%d", &a, &b);

	if (quot(a, b, &res) == -1)
	{
		printf("0으로 나눌 수 없습니다!");
	}
	else
	{
		printf("%d를 %d로 나눈 몫은 %d입니다.", a, b, res);
	}

	return 0;
}

int quot(int a, int b, int *p)
{
	if (b == 0)
	{
		return -1;
	}
	else
	{
		*p = a / b;
		return 0;
	}
}


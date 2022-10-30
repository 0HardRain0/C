// 변수 사용 영역


// 두 함수에서 같은 이름의 지역 변수를 사용한 경우

/* #include<stdio.h>

void assign();

int main()
{
	auto int a = 0;

	assign();
	printf("main 함수 a :%d\n", a);

	return 0;
}

void assign()
{
	auto int a;

	a = 10;
	printf("assign 함수 a : %d\n", a);
}*/


//블록 안에 지역 변수를 사용하여 두 변수를 교환하는 프로그램

/* #include<stdio.h>

int main()
{
	int a = 10, b = 20;

	printf("교환 전 a와 b의 값 : %d, %d\n", a, b);
	{                                                       //블록 시작
		int temp;											//temp 변수 선언

		temp = a;
		a = b;
		b = temp;
	}														//블록 끝
	printf("교환 후 a와 b의 값 : %d, %d\n", a, b);

	return 0;
}*/



//  전역 변수의 사용


/* #include<stdio.h>

void assign10();
void assign20();

int a;

int main()
{
	printf("함수 호출 전 a값 : %d\n", a);

	assign10();
	assign20();

	printf("함수 호출 후 a값 : %d\n", a);
	return 0;
}

void assign10()
{
	a = 10;
}

void assign20()
{
	int a;
	a = 20;
}*/



//auto 지역 변수와 static 지역 변수의 비교

/* #include<stdio.h>

void auto_func();
void static_func();

int main()
{
	int i;

	printf("auto 지역 변수를 사용한 함수...\n");
	for (i = 0; i < 3; i++)
	{
		auto_func();
	}

	printf("static 지역 변수를 사용한 함수...\n");
	for (i = 0; i < 3; i++)
	{
		static_func();
	}

	return 0;
}

void auto_func()
{
	auto int a = 0;

	a++;
	printf("%d\n", a);
}

void static_func()
{
	static int a;

	a++;
	printf("%d\n", a);
} */



// 레지스터 변수를 반복문에 사용한 예


/* #include<stdio.h>

int main()
{
	register int i;
	auto int sum = 0;

	for (i = 1; i <= 10000; i++)
	{
		sum += i;
	}

	printf("%d\n", sum);

	return 0;
}*/



// p.394 연습문제 2번

/* #include<stdio.h>

void func();
int a = 10;

int main()
{
	a = 20;
	func();
	printf("%d", a);	//결과 값이 30으로 출력

	return 0;
}

void func()
{
	a = 30;
}*/


// 연습문제 3번


/* #include<stdio.h>

int func();

int main()
{
	int i, sum = 0;

	for (i = 0; i < 10; i++)
	{
		sum += func();
	}
	printf("%d", sum);

	return 0;
}

int func()
{
	static int a = 0;
	a++;

	return a;
}*/


// 연습문제 4번


/* #include<stdio.h>

int a;

int main()
{
	int b = 10;
	{
		static int a = 20;
		b = a;
	}
	a += b;
	printf("%d", a);

	return 0;
}*/



// 연습문제 5번

#include<stdio.h>

double get_next();
double ary[] = { 0.1,0.3,0.5,0.7,0.9 };

int main()
{
	double res = 0;
	int i;

	for (i = 0; i < 5; i++)
	{
		res += get_next();
	}
	printf("%.1lf", res);

	return 0;
}

double get_next()
{
	
	static int index = 0;                //ary배열의 index로 사용한 변수, static 사용 필수
	double val;							 //ary배열 요소의 값을 잠시 보관하기 위한 변수

	val = ary[index];					 //index 위치의 배열 요소를 val에 저장
	index++;							 //get_next가 다음에 호출될 때 다음 배열 요소를 반환하기 위해 index 저장
	
	return val;							 //잠시 보관한 배열 요소의 값 반환
} 
// 함수



#include<stdio.h>

int add(int x, int y); //add 함수 선언

int main() //main 함수 시작
{
	int a = 10, b = 20;
	int res;

	res = add(a, b); //add함수 호출
	printf("result : %d\n", res);

	return 0;
} //main 함수 끝

int add(int x, int y) //add 함수 정의 시작
{
	int temp; //두 정수의 합을 잠시 저장
	temp = x + y; //x와 y의 합을 temp에 보관

	return temp; //temp의 값을 반환
}


//연습문제3(185cm를 미터단위로 환산하여 출력하는 프로그램 작성. 단,cm를 m로 환산하여 반환하는 함수를 만들고 함수 호출을 통해 구현. 함수명은 centi_to_meter)

/* #include<stdio.h>

double centi_to_meter(int cm); //함수 선언

int main()
{
	double res; //함수의 반환값을 저장할 변수

	res = centi_to_meter(185);  //함수 호출, 반환값을 res에 저장
	printf("result : %.2fm\n", res); //반환된 res 의 값을 출력

	return 0;
}

double centi_to_meter(int cm) //함수 정의 시작
{
	double meter; //필요한 변수 선언
	meter = cm / 100.0; //매개변수  cm의 값을 m단위로 환산

	return meter; //환산된 값을 반환
} */



//다시 적어보기(문제3)

/*#include<stdio.h>

double centi_to_meter(int cm);

int main()
{
	double res;
	res = centi_to_meter(186);
	printf("result : %.2fm\n", res);

	return 0;
}

double centi_to_meter(int cm)
{
	double meter;
	meter = cm / 100.0;

	return meter;
}*/

//연습문제4(밑수 2와 지수 10을 매개변수로 받아 2^10을 구하여 반환하는 함수를 만들고 main함수에서 호출하여 출력하는 프로그램작성. 함수명은 my_power)
/*
#include<stdio.h>

int my_power(int c);

int main()
{
	int res;
	res = my_power(2);
	printf("result : %d\n", res);

	return 0;
}

int my_power(int c)
{
	int s;
	s = c * c*c*c*c*c*c*c*c*c;

	return s;
} */ //틀림

//풀이

/* #include<stdio.h>

int my_power(int basem, int exp); // 함수 선언

int main()
{
	int res; // 반환값을 저장할 변수

	res = my_power(2, 10); // 밑수와 지수를 주고 함수 호출
	printf("result : %d\n", res); // 반환값을 출력

	return 0;
}

int my_power(int base, int exp) //밑수와 지수를 매개변수에 저장
{
	int res = 1; // 밑수를 곱하여 누적하기 위해 1로 초기화
	int i;

	for (i = 0; i < exp; i++) // 지수만큼 반복
	{
		res *= base; //밑수를res에 곱하여 누적한다.
	}
	return res; //누적된 결과값 반환
} */


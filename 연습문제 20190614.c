// 1부터 100까지의 합을 출력하는 프로그램

/* #include<stdio.h>

int main()
{
	int i, sum = 0; //sum은 1부터 100까지 값을 더할 변수, 반드시 0으로 초기화

	for (i = 1; i <= 100; i++) //i는 1부터 100까지 하나씩 증가하면서 100번 반복
	{
		sum += i;              //i의 값을 sum에 더한다, sum = sum + i와 같음
	}
	printf("%d", sum);         //반복문이 끝난 후 더한 값 출력

	return 0;
} */

//반복적으로 양수를 입력받아 총합을 구하는 프로그램. 0이나 음수를 입력하면 반복을 끝내고 그 전에 입력한 값의 합을 출력
//처음부터 0이나 음수가 입력되면 바로 반복을 끝내고 0 출력

#include<stdio.h>

int main()
{
	int a;
	int sum = 0;

	printf("양수 입력:");
	scanf_s("%d", &a);
	while(a > 0)
	{
		sum += a;
		printf("양수 입력:");
		scanf_s("%d", &a);
		
	}
		printf("누적된 값 : %d\n", sum);

		return 0;
}
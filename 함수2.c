//여러가지 함수의 유형

//매개변수가 없는 함수

#include<stdio.h>

int get_pos();

int main()
{
	int res;

	res = get_pos();
	printf("반환값 : %d\n", res);
	return 0;
}

int get_pos()
{
	int pos;

	printf("양수 입력 :");
	scanf_s("%d", &pos);

	return pos;
}
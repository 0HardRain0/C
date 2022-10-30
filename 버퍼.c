// 버퍼를 사용하는 입력함수

//버퍼를 사용하는 문자입력

/* #include<stdio.h>

int main()
{
	char ch;
	int i;

	for (i = 0; i < 3; i++)
	{
		scanf_s("%c", &ch, 1);
		printf("%c", ch);
	}

	while (1)
	{
		scanf_s("%c", &ch, 1);           //버퍼에서 한 문자 입력받음
		if (ch == '\n') break;           //개행문자인 경우 반복종료
		printf("%c", ch);
	}
	return 0;
}*/



// 입력 문자의 아스키 코드값을 출력하는 프로그램


/* #include<stdio.h>

int main()
{
	int res;
	char ch;

	while (1)
	{
		res = scanf_s("%c", &ch, 1);
		if (res == -1)break;
		printf("%d", ch);
	}

	return 0;
}*/



//getchar 함수를 사용한 문자열 입력

/* #include<stdio.h>

void my_gets(char *str, int size);

int main()
{
	char str[7];

	my_gets(str, sizeof(str));
	printf("입력한 문자열 : %s\n", str);

	return 0;
}

void my_gets(char *str, int size)
{
	char ch;
	int i = 0;

	ch = getchar();
	while ((ch != '\n') && (i < size - 1))            //널 문자를 붙일 공간은 비워야하므로 배열의 크기로 size -1을 사용
	{
		str[i] = ch;
		i++;
		ch = getchar();
	}

	str[i] = '\0';
}*/



//fflush 함수가 필요한 경우


/* #include<stdio.h>

int main()
{
	int num, grade;

	printf("학번 입력 :");
	scanf_s("%d%*c", &num);               //scanf_s 함수에서 사용할 때 개행문자 제거
	fflush(stdin);                        //C마다 컴파일러가 다르기 때문에 사용할 때 주의 fflush(stdin);가 표준이 아닐 수도 있음.
	//while (getchar() != '\n');          //버퍼에 남아있는 개행문자 제거
	printf("학점 입력 :");
	grade = getchar();
	printf("학번 : %d, 학점 : %c", num, grade);

	return 0;

} */




//p.339 연습문제 3번


/* #include<stdio.h>

int main()
{
	int ch;
	int cnt = 0;
	ch = getchar();
	while (ch != '\n')
	{
		if ((ch >= 'a') && (ch <= 'z')) cnt++;
		ch = getchar();
	}
	printf("소문자의 개수 : %d\n", cnt);

	return 0;
}
*/



// 연습문제 4번


/* #include<stdio.h>

int main()
{
	int num, alpha;

	printf("가장 좋아하는 숫자는? ");
	scanf_s("%d", &num);
	while (getchar() != '\n');
	printf("가장 좋아하는 알파벳은? ");
	alpha = getchar();
	printf("%d %c", num, alpha);

	return 0;

}*/


// 연습문제 5번


#include<stdio.h>

int main()
{
	char ch;
	int cnt = 0;

	while (scanf_s("%c", &ch, 1) != -1)
	{
		if (ch == '\n') cnt++;
	}
	printf("엔터 키를 누른 횟수 : %d\n", cnt);

	return 0;
}
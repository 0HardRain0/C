//문자열과 포인터


//문자열 상수가 주소란 증거

/* #include<stdio.h>

int main()
{
	printf("주소값 : %p\n", "mango");
	printf("첫 번째 문자 : %c\n", *"mango");
	printf("두 번째 문자 : %c\n", *("mango" + 1));
	printf("세 번째 문자 : %c\n", *("mango" + 2));

	return 0;
}*/


//포인터로 문자열을 사용하는 방법

/* #include<stdio.h>

int main()
{
	char *dessert = "apple";                             //포인터에 문자열 초기화

	printf("오늘 후식은 %s입니다.\n", dessert);
	dessert = "banana";                                  //새로운 문자열 대입
	printf("내일 후식은 %s입니다.\n", dessert);

	return 0;
}

#include<stdio.h>

int main()
{
	char *pa = "apple";
	char *pb = "apple";
	printf("%p, %p", pa, pb);             //포인터가 같은 값을 출력하므로 최적화 되어있음.

	return 0;
}*/



//scanf함수를 사용한 문자열 입력


/* #include<stdio.h>

int main()
{
	char str[80];

	printf("문자열 입력 :");
	scanf_s("%s", str, sizeof(str));
	printf("첫 번째 단어 : %s\n", str);
	scanf_s("%s", str, sizeof(str));
	printf("버퍼에 남아 있는 두 번째 단어 : %s\n", str);

	return 0;
}*/




//get함수로 한 줄의 문자열 입력


/* #include<stdio.h>

int main()
{
	char str[80];

	printf("공백이 포함된 문자열 입력 :");
	gets(str);
	printf("입력한 문자열은 %s입니다.", str);

	return 0;
}*/


//get함수와 똑같이 작동하는 함수(미완성)


/* #include<stdio.h>

void my_gets(char *ps);

int main()
{
	char str[80];
	my_gets(str);
	printf("입력한 문자열은 %s입니다.", str);

	return 0;
}

void my_gets(char *ps)            //gets작동원리
{

	while((ps = getchar()) != '\n');
	{
		*ps = ps;
		ps++;
	}
	*ps = '\0';

}*/




//fgets함수의 문자열 입력 방법


/* #include<stdio.h>

int main()
{
	char str[80];

	printf("공백이 포함된 문자열 입력 :");
	fgets(str, sizeof(str), stdin);
	printf("입력된 문자열은 %s입니다.\n", str);

	return 0;
}*/



//개행 문자로 인해 gets함수가 입력을 못하는 경우


/* #include<stdio.h>

int main()
{
	int age;
	char name[20];

	printf("나이 입력 :");
	scanf_s("%d", &age);
	printf("이름 입력 :");
	gets(name);
	printf("나이 : %d, 이름 : %s\n", age, name);
	// getchar();  버퍼에서 하나의 문자를 읽어서 반환, 반환문자는 버림
	// scanf_s("%*c");   버퍼에서 하나의 문자를 읽어서 버림, 변수는 필요 없음
	// fgets(stdin);     버퍼에서 하나의 문자를 읽어서 반환, 반환 문자는 버림
	return 0;
}*/



//문자열을 출력하는 puts와 fputs함수

/* #include<stdio.h>

int main()
{
	char str[80] = "apple juice";
	char *ps = "banana";

	puts(str);
	fputs(ps, stdout);
	puts("milk");

	return 0;
}*/



// p.358 연습문제[1번]


/* #include<stdio.h>

int main()
{
	char *ps = "applepie";

	ps += 5;
	printf("%s", ps);

	return 0;
}*/


// 연습문제 3번

/* #include<stdio.h>

int main()
{
	char *ps = "banana";

	while (*ps != '\0')
	{
		printf("%s\n", ps);
		ps++;
	}
	return 0;
} */



//연습문제 4번 (문제점을 찾고 필요한 문장 추가)


/* #include<stdio.h>

int main()
{
	char ani[20];
	char why[80];

	printf("좋아하는 동물 :");
	scanf_s("%s%*c", ani, sizeof(ani));
	//원래는 fflush(stdin);이 사용되어야 하나 현재 컴파일러에서는 작동이 안됨.
	printf("좋아하는 이유 :");
	fgets(why, sizeof(why), stdin);
	printf("%s is %s", ani, why);

	return 0;

}*/



//연습문제 5번


#include<stdio.h>
#include<string.h>

int main()
{
	char name[20];
	char num[20];
	char add[40];

	printf("이름 :");
	fgets(name, sizeof(name), stdin);
	name[strlen(name) - 1] = '\0';
	printf("전화번호 :");
	fgets(num, sizeof(num), stdin);
	num[strlen(num) - 1] = '\0';
	printf("주소 :");
	fgets(add, sizeof(add), stdin);
	add[strlen(add) - 1] = '\0';
	printf("%s, %s, %s", name, num, add);

	return 0;
}
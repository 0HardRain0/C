// p.342 도전 실전 예제


// 길이가 가장 긴 단어 찾기 [1번]


/*#include<stdio.h>

int main()
{
	char ch;
	int len, max = 0;

	while(1)
	{
		len = 0;

		ch = getchar();                          //문자입력
		while ((ch != -1) && (ch != '\n'))       //ctrl + Z나 Enter를 치지 않는 동안
		{
			len++;                               //문자의 수를 센다
			ch = getchar();
		}
		if (ch == -1)break;                      //ctrl + z면 반복 중지
		if (len > max) max = len;                //단어의 길이보다 길면 그 값을 가장 긴 길이로 설정
	}
	printf("가장 긴 단어의 길이 : %d\n", max);

	return 0;
}*/




// 대소문자 변환 프로그램 [2번]


/* #include<stdio.h>

int main()
{
	char ch;
	
	while ((ch = getchar()) != '\n') 
	{
		if ((ch >= 'A') && (ch <= 'Z'))
		{
			ch += ('a' - 'A');
		}
		else if ((ch >= 'a') && (ch <= 'z'))
		{
			ch -= ('a' - 'A');
		}
		putchar(ch);
	}

	return 0;
} */



// 문자열 숫자 변환 프로그램 [3번]


#include<stdio.h>

int main()
{
	char ary[10];
	int ch;
	int weight = 1;
	int tot = 0;
	int i = 0;

	while ((ch = getchar()) != '\n')
	{
		ary[i++] = ch;
	}

	while (i > 0)
	{
		tot += ((ary[--i] - '0') * weight);
		weight *= 10;
	}

	printf("%d\n", tot + 10);

	return 0;

}
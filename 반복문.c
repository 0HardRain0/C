//3.2 반복문

//list 3_6(for문)

/*
#include<stdio.h>

int main()
{
	int i, total = 0;

	for (i = 1; i <= 10; i++)
	{
		total += i;
	}

	printf("total = %d\n", total);

	return 0;
}
*/

//list 3_7(while문)
/* #include<stdio.h>

int main()
{
	int i, total = 0;

	i = 1;

	while (i <= 10)
	{
		total += i;
		i++;
	}
	printf("total = %d\n", total);

	return 0;
} */

//list 3_8(do-while문)

/* #include<stdio.h>

int main()
{
	int i, total = 0;

	i = 1;
	do
	{
		total += i;
		i++;
	} while (i <= 10);

	printf("total = %d\n", total);

	return 0;
} */

//list 3_9(break문)

/* #include<stdio.h>

int main()
{
	int i, a;

	printf("type number\n");

	scanf_s("%d", &a);

	for (i = 2; i < a; i++)
	{
		if ((a % i) == 0)
		{
			break;
		}
	}
	if (i == a)
	{
		printf("%d is prime\n", a);
	}
	else
	{
		printf("%d is not prime", a);
	}

	return 0;
} */

//list 3_10([문자의 판정]continue문)

 /* #include<stdio.h>

int main()
{
	int i, c;

	for (i = 1; ; i++)
	{
		scanf_s("%d", &c);

		if (c == (-1))
		{
			break;
		}
		else if (c <= 32 || 127 <= c)
		{
			continue;
		}
		else
		{
			printf("%d : %x = %c\n", i, c, c);
		}
	}
	return 0;
} */

//list 3_11(문자의 판정2)

/* #include<stdio.h>

int main()
{
	int i, c;
	i = 1;

	while (1)
	{
		scanf_s("%d", &c);

		if (c == (-1))
		{
			break;
		}
		else if(c <= 32 || 127 <= c)
		{
			continue;
		}
		else
		{
			printf("%d : %x = %c\n", i, c, c);
		}
		i++;
	}
	return 0;
}
*/

//test(평균값 잡기

#include<stdio.h>

void main()
{
	int i;
	double d, t = 0.0, h;

	printf("숫자를 10번 입력해주세요.\n");
	for (i = 1; i <= 10; i++)
	{
		scanf_s("%lf", &d);
		t += d;
	}

	h = t / 10;

	printf("평균은 %.2f입니다.\n", h);

	return 0;

}

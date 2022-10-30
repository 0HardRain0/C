/*#include<stdio.h>

int main()
{
	int i;
	char d[30];       //최대 30문자를 저장할 수 있는 저장 공간 준비. 마지막에 널문자가 옴을 고려해야함.
	scanf_s("%s", d, sizeof(d)); //그 공간에 키보드로 입력된 내용을 저장. 단, 공백이 있으면 거기까지만 입력됨.
	for (i = 0; d[i] != '\0'; i++) //저장된 내용을 하나하나씩 검사해서 널문자가 아닌 동안 아래 내용 실행
	{
		printf("\'%c\'\n", d[i]);
	}

}*/



/*#include <stdio.h>

int main()
{
	int i;
	char E[30];
	scanf_s("%s", E, sizeof(E));
	for (i = 0; E[i] != '\0'; i++)
	{
		printf("\'%c'\n", E[i]);
	}
	return 0;
}*/




//20190626 연습

#include<stdio.h>

int main()
{
	int i, cnt = 0;                    //변수 입력
	float input;
	float height[100];
	float total = 0.00;

	printf("신장을 입력해주세요.\n");
	scanf_s("%f", &input);

	for (i = 0; i < 99; i++)
	{
		if (input > 0)                //입력한 값이 0보다 크면 진행
		{
			height[i] = input;
			cnt++;
			printf("신장을 입력해주세요.\n");
			scanf_s("%f", &input);
			//printf("신장을 입력해주세요.%.2f\n", input);
		}
		else                         // 그렇지 않으면 입력 종료(break문을 입력하지 않으면 나머지 반복으로 printf이 출력됨.)
		{
			printf("입력이 완료되었습니다.\n");
			break;
		}
	}

	for (i = 0; i < cnt; i++)
	{
		printf("height[%d] = %.2f\n", i, height[i]);
		total += height[i];
	}

	//printf("총 합계는%.2f입니다.\n", total);

	float avg = total / cnt;

	printf("평균은 %.2f입니다.\n", avg);

	return 0;
}
#include<stdio.h>

int main()
{
	char str[5][100];
	int num[5][2], i, j, w;

	for (i = 0; i < 5; i++)
	{
		printf("Please Enter string[%d]:", i);
		scanf_s("%s", &str[i], sizeof(str[i])); //scanf를 사용할때에 15이상에서는 scanf_s("서식문자", 주소, 사이즈)순으로 문법에 맞게 작성해야함. 
	}                                           //예)  scanf_s("%d", a, sizeof(a));
	for (i = 0, j = 0; i < 5; i++, j = 0)
	{
		while (str[i][j] != '\0') // /0이 아닌 \0으로 작성해야함.
		{
			j++;
		}
		num[i][0] = j;
		num[i][1] = i;
	}

	for (i = 0; i < 4; i++)
	{
		for (j = i + 1; j < 5; j++)
		{
			if (num[i][0] < num[j][0])
			{
				w = num[i][0];
				num[i][0] = num[j][0];
				num[j][0] = w;
				w = num[i][1];
				num[i][1] = num[j][1];
				num[j][1] = w;
			}
		}
	}

	for (i = 0; i < 5; i++)
	{
		printf("%s\n", str[num[i][1]]);
	}

	return 0;
}

//오류로 인하여 수정해야함.

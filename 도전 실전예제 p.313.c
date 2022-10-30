// p.313 도전 실전 예제 1번

/* #include<stdio.h>

void print_graph(int *sp, int size);

int main()
{
	int score[5] = { 72,88,95,64,100 };

	print_graph(score, 5);
	
	return 0;

}

void print_graph(int *sp, int size)
{
	int i, j;
	int cnt;

	for (i = 0; i < size; i++)
	{
		cnt = sp[i] / 5;
		printf("( %3d)", sp[i]);

		for (j = 0; j < cnt; j++)
		{
			printf("*");
		}
		printf("\n");
		
	}
} */


//도전 실전예제 2번

/* #include<stdio.h>

int check_same(int *lotto_nums, int *my_nums);

int main()
{
	int lotto_nums[6] = { 4,10,25,30,41,45 };
	int my_nums[6] = { 1,4,7,22,41,43 };
	int res;

	res = check_same(lotto_nums, my_nums);
	printf("일치하는 번호의 개수 : %d\n", res);
	return 0;
}

int check_same(int *lotto_nums, int *my_nums)
{
	int i, j;
	int cnt = 0;

	for (i = 0; i < 6; i++)
	{
		for (j = 0; j < 6; j++)
		{
			if (my_nums[i] == lotto_nums[j]) cnt++;
		}
		
	}
	
	return cnt;
} */


//도전 실전예제 3번

#include<stdio.h>

void input_nums(int *lotto_nums);
void print_nums(int *lotto_nums);

int main()
{
	int lotto_nums[6];

	input_nums(lotto_nums);
	print_nums(lotto_nums);

	return 0;
}

void input_nums(int *lotto_nums)
{
	int i,j;
	int num;
	int dup;

	for (i = 0; i < 6; i++)
	{

		printf("번호 입력: ");
		scanf_s("%d", &num);
		dup = 0;
		for (j = 0; j < i; j++)
		{
			if (num == lotto_nums[j])
			{
				dup = 1;
				break;
			}
		}
		if (!dup)
		{
			lotto_nums[i] = num;
		}
		else
		{
			printf("같은 번호가 있습니다!\n");
			i--;
		}
	}
	
}

void print_nums(int *lotto_nums)
{
	int i;
	printf("로또 번호 :");
	for (i = 0; i < 6; i++)
	{
		printf("%d ", lotto_nums[i]);
	}
}

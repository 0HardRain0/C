// �迭�� ����� ���

// �ټ� ���� ���̸� ������ �迭
/* #include<stdio.h>

int main()
{
	int ary[5];                  // int�� ��� 5���� �迭 ����
	      
	ary[0] = 10;                 // ù ��° �迭 ��ҿ� 10 ����
	ary[1] = 20;                 // �� ��° �迭 ��ҿ� 20 ����
	ary[2] = ary[0] + ary[1];    // ù ��°�� �� ��° ��Ҹ� ���� �� ��° ����
	scanf_s("%d", &ary[3]);      // Ű����� �� ��° ��ҿ� �Է�

	printf("%d\n", ary[2]);      //�� ��° �迭 ��� ���
	printf("%d\n", ary[3]);      
	printf("%d\n", ary[4]);      //������ �迭 ��Ҵ� �����Ⱚ

	return 0;
} */

//�迭�� �ʱ�ȭ ���

/* #include<stdio.h>

int main()
{
	int ary1[5] = { 1,2,3,4,5 };
	int ary2[5] = { 1,2,3 };
	int ary3[5] = { 1,2,3 };
	double ary4[5] = { 1.0, 2.1, 3.2, 4.3,5.4 };
	char ary5[5] = { 'a', 'p', 'p', 'l', 'e' };

	ary1[0] = 10;
	ary1[1] = 20;
	ary1[2] = 30;
	ary1[3] = 40;
	ary1[4] = 50;

	return 0;
} */

//�迭�� �ݺ����� ����� ����ó�� ���α׷�

/* #include<stdio.h>

int main()
{
	int score[5];
	int i;
	int tot = 0;
	double avg;

	for (i = 0; i < 5; i++)
	{
		printf("������ ������ �����ּ���.\n");
		scanf_s("%d", &score[i]);
	}
	for (i = 0; i < 5; i++)
	{
		tot += score[i];
	}
	avg = tot / 5.0;

		for (i = 0; i < 5; i++)
		{
			printf("%5d", score[i]);
		}
	printf("\n");

	printf("��� : %.1lf\n", avg);

	return 0;
} */



//sizeof�����ڸ� ����� �迭

#include<stdio.h>

main()
{

	int score[5];
	int i;
	int tot = 0;
	double avg;
	int cnt;

	cnt = sizeof(score) / sizeof(score[0]);

	for (i = 0; i < cnt; i++)
	{
		scanf_s("%d", &score[i]);
	}

	for (i = 0; i < cnt; i++)
	{
		tot += score[i];
	}
	avg = tot / (double)cnt;

	for (i = 0; i < cnt; i++)
	{
		printf("%5d", score[i]);
	}
	printf("\n");

	printf("��� : %.1lf\n", avg);

	return 0;
}
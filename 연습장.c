/*#include<stdio.h>

int main()
{
	int i;
	char d[30];       //�ִ� 30���ڸ� ������ �� �ִ� ���� ���� �غ�. �������� �ι��ڰ� ���� ����ؾ���.
	scanf_s("%s", d, sizeof(d)); //�� ������ Ű����� �Էµ� ������ ����. ��, ������ ������ �ű������ �Էµ�.
	for (i = 0; d[i] != '\0'; i++) //����� ������ �ϳ��ϳ��� �˻��ؼ� �ι��ڰ� �ƴ� ���� �Ʒ� ���� ����
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




//20190626 ����

#include<stdio.h>

int main()
{
	int i, cnt = 0;                    //���� �Է�
	float input;
	float height[100];
	float total = 0.00;

	printf("������ �Է����ּ���.\n");
	scanf_s("%f", &input);

	for (i = 0; i < 99; i++)
	{
		if (input > 0)                //�Է��� ���� 0���� ũ�� ����
		{
			height[i] = input;
			cnt++;
			printf("������ �Է����ּ���.\n");
			scanf_s("%f", &input);
			//printf("������ �Է����ּ���.%.2f\n", input);
		}
		else                         // �׷��� ������ �Է� ����(break���� �Է����� ������ ������ �ݺ����� printf�� ��µ�.)
		{
			printf("�Է��� �Ϸ�Ǿ����ϴ�.\n");
			break;
		}
	}

	for (i = 0; i < cnt; i++)
	{
		printf("height[%d] = %.2f\n", i, height[i]);
		total += height[i];
	}

	//printf("�� �հ��%.2f�Դϴ�.\n", total);

	float avg = total / cnt;

	printf("����� %.2f�Դϴ�.\n", avg);

	return 0;
}
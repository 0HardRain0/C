// �Լ�



#include<stdio.h>

int add(int x, int y); //add �Լ� ����

int main() //main �Լ� ����
{
	int a = 10, b = 20;
	int res;

	res = add(a, b); //add�Լ� ȣ��
	printf("result : %d\n", res);

	return 0;
} //main �Լ� ��

int add(int x, int y) //add �Լ� ���� ����
{
	int temp; //�� ������ ���� ��� ����
	temp = x + y; //x�� y�� ���� temp�� ����

	return temp; //temp�� ���� ��ȯ
}


//��������3(185cm�� ���ʹ����� ȯ���Ͽ� ����ϴ� ���α׷� �ۼ�. ��,cm�� m�� ȯ���Ͽ� ��ȯ�ϴ� �Լ��� ����� �Լ� ȣ���� ���� ����. �Լ����� centi_to_meter)

/* #include<stdio.h>

double centi_to_meter(int cm); //�Լ� ����

int main()
{
	double res; //�Լ��� ��ȯ���� ������ ����

	res = centi_to_meter(185);  //�Լ� ȣ��, ��ȯ���� res�� ����
	printf("result : %.2fm\n", res); //��ȯ�� res �� ���� ���

	return 0;
}

double centi_to_meter(int cm) //�Լ� ���� ����
{
	double meter; //�ʿ��� ���� ����
	meter = cm / 100.0; //�Ű�����  cm�� ���� m������ ȯ��

	return meter; //ȯ��� ���� ��ȯ
} */



//�ٽ� �����(����3)

/*#include<stdio.h>

double centi_to_meter(int cm);

int main()
{
	double res;
	res = centi_to_meter(186);
	printf("result : %.2fm\n", res);

	return 0;
}

double centi_to_meter(int cm)
{
	double meter;
	meter = cm / 100.0;

	return meter;
}*/

//��������4(�ؼ� 2�� ���� 10�� �Ű������� �޾� 2^10�� ���Ͽ� ��ȯ�ϴ� �Լ��� ����� main�Լ����� ȣ���Ͽ� ����ϴ� ���α׷��ۼ�. �Լ����� my_power)
/*
#include<stdio.h>

int my_power(int c);

int main()
{
	int res;
	res = my_power(2);
	printf("result : %d\n", res);

	return 0;
}

int my_power(int c)
{
	int s;
	s = c * c*c*c*c*c*c*c*c*c;

	return s;
} */ //Ʋ��

//Ǯ��

/* #include<stdio.h>

int my_power(int basem, int exp); // �Լ� ����

int main()
{
	int res; // ��ȯ���� ������ ����

	res = my_power(2, 10); // �ؼ��� ������ �ְ� �Լ� ȣ��
	printf("result : %d\n", res); // ��ȯ���� ���

	return 0;
}

int my_power(int base, int exp) //�ؼ��� ������ �Ű������� ����
{
	int res = 1; // �ؼ��� ���Ͽ� �����ϱ� ���� 1�� �ʱ�ȭ
	int i;

	for (i = 0; i < exp; i++) // ������ŭ �ݺ�
	{
		res *= base; //�ؼ���res�� ���Ͽ� �����Ѵ�.
	}
	return res; //������ ����� ��ȯ
} */


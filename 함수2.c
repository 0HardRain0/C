//�������� �Լ��� ����

//�Ű������� ���� �Լ�

#include<stdio.h>

int get_pos();

int main()
{
	int res;

	res = get_pos();
	printf("��ȯ�� : %d\n", res);
	return 0;
}

int get_pos()
{
	int pos;

	printf("��� �Է� :");
	scanf_s("%d", &pos);

	return pos;
}
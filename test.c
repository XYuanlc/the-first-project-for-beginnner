#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void Menu()//��ʼ����
{
	printf("*******************************\n");
	printf("******  1.Add    2.Sub  *******\n");
	printf("******  3.Mul    4.Div  *******\n");
	printf("******      0.Exit      *******\n");
	printf("*******************************\n");
}

int Add(int x, int y)//�ӷ�
{
	return x + y;
}

int Sub(int x, int y)//����
{
	return x - y;
}

int Mul(int x, int y)//�˷�
{
	return x * y;
}

int Div(int x, int y)//����
{
	return x / y;
}

void Calc(int (*pf)(int, int))//���ղ��������ó����
{
	int x;//���������
	int y;
	int ret;//������

	printf("����������������:>");
	scanf("%d %d", &x, &y);//���ղ�����
	ret = pf(x, y);//�ó����
	printf("%d\n", ret);
}

int main()
{
	int input = 0;//��������ģʽ

	do
	{
		printf("��ѡ��:>");
		Menu();
		scanf("%d", &input);//��������ģʽ

		switch (input)
		{
		case 1:
			Calc(Add);
			break;
		case 2:
			Calc(Sub);
			break;
		case 3:
			Calc(Mul);
			break;
		case 4:
			Calc(Div);
			break;
		case 0:
			printf("�˳�������");
			break;
		default:
			printf("�������");
			break;
		}
	} while (input);//���ؿ�ʼ����
	
	return 0;

}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void Menu()//开始界面
{
	printf("*******************************\n");
	printf("******  1.Add    2.Sub  *******\n");
	printf("******  3.Mul    4.Div  *******\n");
	printf("******      0.Exit      *******\n");
	printf("*******************************\n");
}

int Add(int x, int y)//加法
{
	return x + y;
}

int Sub(int x, int y)//减法
{
	return x - y;
}

int Mul(int x, int y)//乘法
{
	return x * y;
}

int Div(int x, int y)//除法
{
	return x / y;
}

void Calc(int (*pf)(int, int))//接收操作数，得出结果
{
	int x;//储存操作数
	int y;
	int ret;//储存结果

	printf("请输入两个操作数:>");
	scanf("%d %d", &x, &y);//接收操作数
	ret = pf(x, y);//得出结果
	printf("%d\n", ret);
}

int main()
{
	int input = 0;//储存运算模式

	do
	{
		printf("请选择:>");
		Menu();
		scanf("%d", &input);//接收运算模式

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
			printf("退出计算器");
			break;
		default:
			printf("输入错误");
			break;
		}
	} while (input);//加载开始界面
	
	return 0;

}
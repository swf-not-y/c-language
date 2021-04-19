#define _CRT_SECURE_NO_WARNINGS1
#include <stdio.h>

void menu()
{
	printf("1.先来先服务算法\n");
	printf("2.短作业优先算法\n");
	printf("3.优先比算法\n");
	printf("4.退出程序\n");
}

void a(double x,double y)
{
		
}

void b()
{

}

void c()
{

}

int main()
{
	int input = 0;
	double t1 = 0;
	double t2 = 0;
	double t3 = 0;
	double t4 = 0;
	double t5 = 0;
	double t6 = 0;
	double t7 = 0;
	double t8 = 0;
	printf("请输入第一组数据：");
	scanf_s("%lf %lf\n", &t1, &t2);
	printf("请输入第二组数据：");
	scanf_s("%lf %lf\n", &t3, &t4);
	printf("请输入第三组数据：");
	scanf_s("%lf %lf\n", &t5, &t6);
	printf("请输入第四组数据：");
	scanf_s("%lf %lf\n", &t7, &t8);
	do
	{
		menu();
		printf("请选择算法>:\n");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			a(t1,t2);
			break;
		case 2:
			b();
			break;
		case 3:
			c();
			break;
		case 4:
			printf("退出程序\n");
			break;
		}
	} while (input);
	return 0;
}
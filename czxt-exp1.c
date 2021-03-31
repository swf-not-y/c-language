#include <stdio.h>

void menu()
{
	printf("1.先来先服务算法\n");
	printf("2.短作业优先算法\n");
	printf("3.优先比算法\n");
	printf("4.退出程序\n");
}

void a()
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
	do
	{
		int t1 = 0;
		int t2 = 0;
		int t3 = 0;
		int t4 = 0;
		int t5 = 0;
		int t6 = 0;
		int t7 = 0;
		int t8 = 0;
		printf("请输入第一组数据：");
		scanf("%lf %lf\n", &t1, &t2);
		printf("请输入第二组数据：");
		scanf("%lf %lf\n", &t3, &t4);
		printf("请输入第三组数据：");
		scanf("%lf %lf\n", &t5, &t6);
		printf("请输入第四组数据：");
		scanf("%lf %lf\n", &t7, &t8);
		menu();
		printf("请选择算法>:\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			a();
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
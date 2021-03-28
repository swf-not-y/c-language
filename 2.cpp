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
	float t1 =0;
	float t2 =0;
	printf("请输入第一组数据:\n");
	scanf("% %d",&t1,&t2);
	printf("%d %d",t1,t2);

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
		menu();
		printf("请选择算法>:\n");
		scanf("%d",&input);
		switch(input)
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
	}while(input);
	return 0;
}
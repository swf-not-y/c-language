#include <stdio.h>

void menu()
{
	printf("1.�����ȷ����㷨\n");
	printf("2.����ҵ�����㷨\n");
	printf("3.���ȱ��㷨\n");
	printf("4.�˳�����\n");
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
		printf("�������һ�����ݣ�");
		scanf("%lf %lf\n", &t1, &t2);
		printf("������ڶ������ݣ�");
		scanf("%lf %lf\n", &t3, &t4);
		printf("��������������ݣ�");
		scanf("%lf %lf\n", &t5, &t6);
		printf("��������������ݣ�");
		scanf("%lf %lf\n", &t7, &t8);
		menu();
		printf("��ѡ���㷨>:\n");
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
			printf("�˳�����\n");
			break;
		}
	} while (input);
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS1
#include <stdio.h>

void menu()
{
	printf("1.�����ȷ����㷨\n");
	printf("2.����ҵ�����㷨\n");
	printf("3.���ȱ��㷨\n");
	printf("4.�˳�����\n");
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
	printf("�������һ�����ݣ�");
	scanf_s("%lf %lf\n", &t1, &t2);
	printf("������ڶ������ݣ�");
	scanf_s("%lf %lf\n", &t3, &t4);
	printf("��������������ݣ�");
	scanf_s("%lf %lf\n", &t5, &t6);
	printf("��������������ݣ�");
	scanf_s("%lf %lf\n", &t7, &t8);
	do
	{
		menu();
		printf("��ѡ���㷨>:\n");
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
			printf("�˳�����\n");
			break;
		}
	} while (input);
	return 0;
}
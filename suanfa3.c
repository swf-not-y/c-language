#define _CRT_SECURE_NO_WARNINGS
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
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int main()
{
	int x = 0;
	int y = 0;
	int z = 0;
	printf("请输入三个数字：\n");
	scanf("%d%d%d",&x,&y,&z);
	if (x < y)
	{
		int tem = x;
		x = y;
		y = tem;
	}
	if (x < z)
	{
		int tem = x;
		x = z;
		z = tem;

	}
	if (y < z)
	{
		int tem = y;
		y = z;
		z = tem;
	}
	printf("%d %d %d\n", x, y, z);
	return 0;
}
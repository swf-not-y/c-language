#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
	char arr1[] = "�������ǵ���";
	char arr2[] = "      ";
	int left = 0;
	int mid = 0;
	int right = strlen(arr1) - 1;
	mid = (left + right) / 2;
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000);
		system("cls");
		left++;
		right--;

	}
	printf("%s\n", arr2);
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

void print(int *p, int sz)
{
	int i = 0;
	for (i = 0; i<sz; i++)
	{
		printf("%d ", *(p + i));
	}
	printf("\n");
}

int main1()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int *p = arr;
	int sz = sizeof(arr) / sizeof(arr[0]);
	print(p, sz);
	system("pause");
	return 0;
}
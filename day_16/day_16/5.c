//5.理解回调函数的使用
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

//qosrt函数的使用者得实现一个比较函数
int int_cmp(const void * p1, const void * p2)
{
	return (*(int *)p1 > *(int *)p2);
}

int main5()
{
	int arr[] = { 1, 3,8,9,4,58,1,2,0,9, 2, 4, 6, 8, 0 };
	int i = 0;
	qsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(int), int_cmp);
	for (i = 0; i< sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}
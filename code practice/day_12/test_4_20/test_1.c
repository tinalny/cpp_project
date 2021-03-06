//1.编写函数：unsigned int reverse_bit(unsigned int value);这个函数的返回值value的二进制位模式从左到右翻转后的值。
//如：在32位机器上25这个值包含下列各位：
//00000000000000000000000000011001        翻转后：（2550136832）10011000000000000000000000000000
//程序结果返回：2550136832

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

unsigned int reverse_bit(unsigned int value)
{
	int i,tmp;
	int sum = 0;
	for (i = 0; i < 32; i++,value /= 2)
	{
		tmp = value % 2;
		sum = sum * 2 + tmp;
	}
	return sum;
}

int main()
{
	printf("%u",reverse_bit(25));
	printf("\n");
	system("pause");
	return 0;
}
//2. �ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4��
//���ɷ���һ��������Ϊ4�����ɷ��Ĺ��ʡ�
//A˵�������ҡ�
//B˵����C��
//C˵����D��
//D˵��C�ں�˵
//��֪3����˵���滰��1����˵���Ǽٻ���
//�����������Щ��Ϣ��дһ��������ȷ������˭�����֡�

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main2()
{
	int killer = 0;
	int a = 0, b = 0, c = 0, d = 0;
		
	for (killer = 'a'; killer <= 'd'; killer ++)
		{
			if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
			{
				printf("�����ǣ�%c\n",killer);
			}
		}

	system("pause");
	return 0;
}
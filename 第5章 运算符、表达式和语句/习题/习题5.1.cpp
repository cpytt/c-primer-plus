/*
name:Strcpy
date:2014/10/20
function:��3.7 ���÷��ӱ�ʾ��ʱ��ת������Сʱ�ͷ��ӱ�ʾ��ʱ��
*/

#define SIXTY 60                                         //����һ������60�ķ��ű���

#include<stdio.h>
int main(void)
{
	printf("��Ҫ��ֹ�ó���������һ��С�ڵ������ʱ�䡣\n");
	printf("������ʱ�䣨�Է��ӱ�ʾ����");

	int time, hour, minute;                              //timeΪ��ʱ��;hourΪת�����Сʱ;minuteΪת����ķ���

	scanf_s("%d", &time);
	while (time > 0)
	{
		hour = time/SIXTY;
		minute = time - hour*SIXTY;                      /*ת����ķ��ӱ�ʾ��Ҫ�Ż���������*/

		printf("ת�����ʱ��Ϊ��%d��%d\n", hour, minute);
		printf("������ʱ�䣨�Է��ӱ�ʾ����");

		scanf_s("%d", &time);
	}

	return 0;
}
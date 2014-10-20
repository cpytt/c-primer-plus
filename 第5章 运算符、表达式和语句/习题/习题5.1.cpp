/*
name:Strcpy
date:2014/10/20
function:例3.7 将用分钟表示的时间转换成以小时和分钟表示的时间
*/

#define SIXTY 60                                         //创建一个代表60的符号变量

#include<stdio.h>
int main(void)
{
	printf("若要终止该程序，请输入一个小于等于零的时间。\n");
	printf("请输入时间（以分钟表示）：");

	int time, hour, minute;                              //time为总时间;hour为转换后的小时;minute为转换后的分钟

	scanf_s("%d", &time);
	while (time > 0)
	{
		hour = time/SIXTY;
		minute = time - hour*SIXTY;                      /*转换后的分钟表示需要优化！！！！*/

		printf("转换后的时间为：%d：%d\n", hour, minute);
		printf("请输入时间（以分钟表示）：");

		scanf_s("%d", &time);
	}

	return 0;
}
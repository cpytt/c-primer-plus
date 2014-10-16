/*
name:Strcpy
date:2014/10/16
function:第一个c程序，简单的小介绍 
*/

#include<stdio.h>      
/*
该行告诉编译器包含文件stdio.h中的全部信息.
文件stdio.h是所有C语言编译包的一个标准部分.
这个文件对关键字输入和显示输出提供支持.
*/

int main(void)
/*
void表示main函数不接受任何参数.
int表示main函数返回一个整数（返回到OS中）.
*/

{
	int num;
	num = 1;

	printf("I am a simple ");
	printf(" computer.\n");
	printf("My favorite number is %d because it is first.", &num);

	return 0;
}

 

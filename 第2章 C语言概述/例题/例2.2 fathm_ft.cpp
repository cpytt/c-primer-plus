/*
name:Strcpy
date:2014/10/16
function:将两个fathoms换算成英尺
*/

#include<stdio.h>
int main(void)
{
	int feet, fathoms;
	//声明变量用逗号隔开~

	fathoms = 2;
	feet = 6 * fathoms;
	
	printf("There are %d feet in %d fathoms!\n", feet, fathoms);
	printf("Yes,I said %d feet!\n", 6 * fathoms);

	return 0;
}
/*
name:Strcpy
date:2014/10/16
function:测试数据类型的所占用空间的大小 64位win7
*/

#include<stdio.h>
int main(void)
{
	printf("int:%d\n", sizeof(int));                             //int
	printf("short int:%d\n", sizeof(short int));                 //short int
	printf("long int:%d\n", sizeof(long int));                   //long int
	printf("long long int:%d\n", sizeof(long long int));         //long long int
	printf("unsigned int:%d\n", sizeof(unsigned int));           //unsigned int
	printf("unsigned long int:%d\n", sizeof(unsigned long int)); //unsigned long int 
	printf("float:%d\n", sizeof(float));                         //float
	printf("double:%d\n", sizeof(double));                       //double
	printf("long double:%d\n", sizeof(long double));             //long double

	return 0;
}


/*
name:Strcpy
date:2014/10/16
function:������fathoms�����Ӣ��
*/

#include<stdio.h>
int main(void)
{
	int feet, fathoms;
	//���������ö��Ÿ���~

	fathoms = 2;
	feet = 6 * fathoms;
	
	printf("There are %d feet in %d fathoms!\n", feet, fathoms);
	printf("Yes,I said %d feet!\n", 6 * fathoms);

	return 0;
}
/*
name:Strcpy
date:2014/10/16
function:��һ���ļ���ʹ����������
*/

#include<stdio.h>

void butler(); //����������֪ͨ������Ҫ�õ��ĺ���.

int main(void)
{
	printf("I will summon the butler"); // words��  summon(vt. ����)  butler(n. �йܼң�
	butler();
	printf("Yes,Bring me some tea and writeable CD-ROMS.\n");

	return 0;
}

void butler()
{
	printf("You rang,sir?\n");
}
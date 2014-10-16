/*
name:Strcpy
date:2014/10/16
function:在一个文件中使用两个函数
*/

#include<stdio.h>

void butler(); //声明函数，通知编译器要用到的函数.

int main(void)
{
	printf("I will summon the butler"); // words：  summon(vt. 传唤)  butler(n. 男管家）
	butler();
	printf("Yes,Bring me some tea and writeable CD-ROMS.\n");

	return 0;
}

void butler()
{
	printf("You rang,sir?\n");
}
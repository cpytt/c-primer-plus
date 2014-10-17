/*
name:Strcpy
date:2014/10/17
function:不正确的参数个数
*/

#include<stdio.h>
int main(void)
{
	int f = 4;
	int g = 5;
	float h = 5.0f;          /**声明float变量时，为了和float匹配，所以给数字后面加上f（整数默认为int型，浮点数默认为double型）**/

	printf("%d\n", f, g);     //参数太多
	printf("%d %d\n", g);     //参数太少
	printf("%d %f\n", h, g);  //值的类型不正确

	/*
	win7 64位输出结果：
	4
	5 0
	0 0.000000
	*/
	return 0;
}
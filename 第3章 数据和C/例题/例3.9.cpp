/*
name:Strcpy
date:2014/10/17
function:����ȷ�Ĳ�������
*/

#include<stdio.h>
int main(void)
{
	int f = 4;
	int g = 5;
	float h = 5.0f;          /**����float����ʱ��Ϊ�˺�floatƥ�䣬���Ը����ֺ������f������Ĭ��Ϊint�ͣ�������Ĭ��Ϊdouble�ͣ�**/

	printf("%d\n", f, g);     //����̫��
	printf("%d %d\n", g);     //����̫��
	printf("%d %f\n", h, g);  //ֵ�����Ͳ���ȷ

	/*
	win7 64λ��������
	4
	5 0
	0 0.000000
	*/
	return 0;
}
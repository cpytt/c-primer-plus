#include<stdio.h>
int main(void)
{
	int age,seconds;

	printf("Please key in your age and press ENTER\n");

	scanf("%d",&age);

	seconds=age*3.156e+7;

	printf("%ds\n",seconds);

	return 0;
}
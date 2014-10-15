#include<stdio.h>
int main(void)
{
	float quart,num;

	printf("Please key in the quart of water.\n");

	scanf("%f",&quart);

	num=quart*950/3E-23;

	printf("There is about %e H20\n",num);

	return 0;
}

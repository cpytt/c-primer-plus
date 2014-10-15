#include<stdio.h>
int main(void)
{
	float height;

	printf("Please key in your height in cm\n");

	scanf("%f",&height);

	height/=2.54;

	printf("Your height is %f in inch\n",height);

	return 0;
}
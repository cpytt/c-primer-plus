#include<stdio.h>
int main(void)
{
	float inch,centimeter;
	printf("Please input numerical value\n");
	scanf("%f",&inch);
	centimeter=2.54*inch;
	printf("%4fin=%4fcm\n",inch,centimeter);
	return 0;
}

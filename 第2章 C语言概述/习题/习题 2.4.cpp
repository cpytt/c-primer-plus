#include<stdio.h>
int main(void)
{
	void sentence_1(void);
	void sentence_2(void);
	sentence_1();
	sentence_1();
	sentence_1();
	sentence_2();
	return 0;
}
void sentence_1(void)
{
	printf("For he's a jolly good fellow!\n");
}
void sentence_2(void)
{
	printf("Which nobody can deny!\n");
}

#include <stdio.h>
int main()
{
	int a,b,c,vy,zh;
	printf("zadej cislo:\n");
	scanf("%i",&zh);
	a=zh/10000%10;
	b=zh/100%10;
	c=zh%10;
	vy=a+b+c;
	printf("vysledek je: %i",vy);
	
}

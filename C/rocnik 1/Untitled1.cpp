#include <stdio.h>
int main()
{
	int a,b,c,vy,zh;
	printf("zadej cislo:\n");
	scanf("zadej cislo: %i",&zh);
	a=zh/100000;
	b=zh/1000%10;
	c=zh/10%10;
	vy=a+b+c;
	printf("vysledek je: %i",vy);
	
}

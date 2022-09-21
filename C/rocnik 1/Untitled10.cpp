#include <stdio.h>

int main ()
{
	int a,b,c,d,max;
	printf("zadej 4 hodnoty");
	scanf("%i%i%i%i",a,b,c,d);
	max = a;
	if (b > max) max = b;
	if (c > max) max = c;
	if (d > max) max = d;
	printf("max hodnota je: %i",max);
	
}

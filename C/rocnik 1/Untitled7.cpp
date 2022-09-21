#include <stdio.h>

int main()
{
	int a, b, c;
	printf("zadej 3 cisla\n");
	scanf("%i",&a);
	scanf("%i",&b);
	scanf("%i",&c);
	
	if (a > b) b = 0;
	if (a > c) c = 0;
	if (b > a) a = 0;
	if (b > c) c = 0;
	if (c > a) a = 0;
	if (c > b) b = 0;
	
	if (a != 0) printf("nejvetsi je: %i",a);
	if (b != 0) printf("nejvetsi je: %i",b);
	if (c != 0) printf("nejvetsi je: %i",c);
	
}

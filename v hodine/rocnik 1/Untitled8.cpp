#include <stdio.h>

int main()
{
	int a, b, c, max;
	// definuju a b c max
	printf("zadej 3 cisla\n");
	// napíšu nìco
	scanf("%i",&a);
	// vložím do a zadanou hodnotu
	scanf("%i",&b);
	// vložím do b zadanou hodnotu
	scanf("%i",&c);
	// vložím do c zadanou hodnotu
	max = a;
	// vložím do max A
	if (b>max) max = b;
	if (c>max) max = c;
	printf("nejvetsi je: %i",max);
}

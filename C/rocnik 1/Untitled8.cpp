#include <stdio.h>

int main()
{
	int a, b, c, max;
	// definuju a b c max
	printf("zadej 3 cisla\n");
	// nap�u n�co
	scanf("%i",&a);
	// vlo��m do a zadanou hodnotu
	scanf("%i",&b);
	// vlo��m do b zadanou hodnotu
	scanf("%i",&c);
	// vlo��m do c zadanou hodnotu
	max = a;
	// vlo��m do max A
	if (b>max) max = b;
	if (c>max) max = c;
	printf("nejvetsi je: %i",max);
}

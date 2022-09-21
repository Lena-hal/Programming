#include <stdio.h>

int main()
{
	int a, b, c, d, min1, min2;
	printf("zadej 4 cisla\n");
	scanf("%i",&a);
	scanf("%i",&b);
	scanf("%i",&c);
	scanf("%i",&d);
	if (a>b) min1 = b;
	else min1 = a;
	if (c>d) min2 = d;
	else min2 = c;
	if (min1>min2) min1 = min2;
	else min2 = min1;
	printf("nejmensi je: %i\n\n",min1);
	main();
}

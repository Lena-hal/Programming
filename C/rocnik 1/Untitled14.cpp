#include <stdio.h>
#include <stdlib.h>

int main()
{
	float a,b,c,d;
	int e;
	e = a+b+c+d;
	printf("zadej 4 cisla:\n ");
	scanf("%f%f%f%f",&a,&b,&c,&d);
	
	printf("soucet je: %g\n",a+b+c+d);
	printf("prumer je: %g\n",(a+b+c+d)/4);
	if (e%2==0) printf("soucet je sudy\n");
	else printf("soucet je lichy\n");
	if (a+b+c+d == 0);
	else if (a+b+c+d > -10 && a+b+c+d < 10) printf("soucet je jednociferny\n");
	else if (a+b+c+d > -99 && a+b+c+d < -9 || a+b+c+d > 9 && a+b+c+d < 99) printf("soucet je dvojciferny\n");
	else printf("soucet je viceciferny\n");
	printf("soucin %g\n",a*b*c*d);
	
	
	main();
}

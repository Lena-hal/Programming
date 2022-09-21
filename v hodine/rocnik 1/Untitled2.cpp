#include <stdio.h>

int main()
{
	int a,b,c,d,f,cena;
	// a = 20, b=10, c=5, d=2, f=1
	printf("zadej cenu\n");
	scanf("%i",&cena);
	a = cena/20;
	b = cena%20/10;
	c = cena%10/5;
	d = cena%5/2;
	f = cena-(a*20+b*10+c*5+d*2);
	printf("dostanes:\n %i 20kc,\n %i 10kc,\n %i 5kc,\n %i 2kc,\n %i 1kc",a,b,c,d,f);
	
	while (cena<0):
		{
			if (cena>20):
				{
					cena-20
					a++
				}
			if (cena>10):
				{
					cena-20
					a++
				}
			if (cena>5):
				{
					cena-20
					a++
				}
			if (cena>2):
				{
					cena-20
					a++
				}
			if (cena>1):
				{
					cena-20
					a++
				}
		}
}

#include <stdio.h>
int main()
{
	int a;
	printf("zadej cislo\n");
	scanf("%i",&a);
	if (a > 0)
		{
			printf("kladna\n");
		}
	else if (a < 0)
		{
			printf("zaporna\n");
		}
	else if (a == 0)
		{
			printf("nula\n");
		}
	if (a%2==0)
		{
			printf("sude\n");
		}
	else
		{
			printf("liche\n");
		}
}

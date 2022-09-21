#include <stdio.h>
int main()
{
	int a;
	printf("zadej hodnotu\n");
	scanf("%i",&a);
	if (a!=0) 
		{
			if (a%15 == 0) printf("Je delitelne 5 i 3\n");
			else printf("neni delitelne 5 i 3\n");
		}
	else printf("neni delitelne 5 i 3\n");
	main();
}

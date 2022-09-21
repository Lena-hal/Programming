#include <stdio.h>

int main()
{
	int a;
	printf("zadej den v tydnu v cislech\n");
	scanf("%i",&a);
	if (a==1) printf("pondeli\n\n");
	else if (a==2) printf("utery\n\n");
	else if (a==3) printf("streda\n\n");
	else if (a==4) printf("ctvrtek\n\n");
	else if (a==5) printf("patek\n\n");
	else if (a==6) printf("sobota\n\n");
	else if (a==7) printf("nedele\n\n");
	else printf("Error\n\n");
	main();
	
}

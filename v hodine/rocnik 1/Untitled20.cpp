#include <stdio.h>
#include <stdlib.h>
int main()
{
	system("mode 15,1");
	int i;
	do 
	{ 
	printf("ZH\n");
	scanf("%i",&i);
	if (i<1||i>5) printf("chyba\n");
	}
	while(i<1||i>5);
	printf("znamka je: %i",i);
}


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int a,b,c;
	printf("ZN\n");
	scanf("%i",&a);
	if (a>-1&&a<256) {
		b=a/16;
	c=a%16;
	switch(b)
	{
		case 10: printf("A"); break;
		case 11: printf("B"); break;
		case 12: printf("C"); break;
		case 13: printf("D"); break;
		case 14: printf("E"); break;
		case 15: printf("F"); break;
		default: printf("%i",b);
	}
	switch(c)
	{
		case 10: printf("A"); break;
		case 11: printf("B"); break;
		case 12: printf("C"); break;
		case 13: printf("D"); break;
		case 14: printf("E"); break;
		case 15: printf("F"); break;
		default: printf("%i",c);

	}
	
	}
	else printf("chyba zadani");
	
	
	
}

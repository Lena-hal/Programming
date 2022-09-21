#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	char a;
	printf("ZN\n");
	scanf(" %c",&a);
	switch (a)
	{
	
	case 'a' ... 'z': printf("maly znak"); break;
	case 'A' ... 'Z': printf("VELKY ZNAK"); break;
	case '0' ... '9': printf("CISLO"); break;
	case '+':
	case '-':
	case '*':
	case '/': printf("operator"); break;
	default: printf("specialni znak");
}
}

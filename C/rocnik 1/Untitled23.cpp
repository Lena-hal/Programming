#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	char a;
	do {
		printf("ahoj\n");
		printf("chces pokracovat?\n [Y/N]");
		scanf(" %c",a);
	}
	while(a != 'Y' || a != 'y' || a != 'a' || a != 'A');
}

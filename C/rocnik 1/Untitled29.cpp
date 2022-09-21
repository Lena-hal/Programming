#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>

int main() {
	int min,max,prum,pocet,zh=0;
	do{
		printf("zh");
		scanf("%i",&zh);
		if (zh != 0) {
		if (min>zh) min =zh;
		if (max<zh) max =zh;
		pocet++;
		prum = prum+zh;
		}
	} while(zh != 0);
	printf(" max: %i\n min: %i\n prum: %.2f\n",max,min,prum/(float)pocet);
}
	
	
	


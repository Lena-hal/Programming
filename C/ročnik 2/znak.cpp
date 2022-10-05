#include <stdio.h>
#include <stdlib.h>

int main(){
	char opak = 'N';
	do{
	
	printf("zadej znak: ");
	char znak = getchar();
	printf("zadal jsi tento znak: \"");
	putchar(znak);
	printf("\" jeho kod v ASCII je %d",znak);
	
	printf("\nchces opakovat? Y/N\n");
	scanf("%d",&opak);
	getchar();getchar();
}
	while(opak=='N');
	
	
}

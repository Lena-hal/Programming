/*
nabidnìte uživateli zadej znak.
1)vypiš zadal jsi tento znak, jeho kod v ASCII je...

2)nabidni uživateli daní ascii codu a vypište jeho kód
*/



#include <stdio.h>
#include <stdlib.h>

int main(){
	char opak = 'N';
	do{
	
	printf("zadej znak: ");
	int znak;
	scanf("%i",&znak);
	printf("zadal jsi tento znak: \"");
	putchar(znak);
	printf("\" jeho kod v ASCII je %d",znak);
	
	printf("\nchces opakovat? Y/N\n");
	scanf("%d",&opak);
	getchar();getchar();
}
	while(opak=='Y');
	
}

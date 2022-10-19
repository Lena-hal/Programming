#include <stdio.h>
#include <stdlib.h>
#include <iostream>

int main(){
	int vstup, zh;
	printf("zadejte velikost pole: ");
	scanf("%i",&vstup);
	int pole[vstup];
	for (int i=0; i<vstup; i++){
		printf("zadej %i cislo:",i+1);
		scanf("%i",&zh);
		pole[i] = zh;

}
for (int i=0; i<vstup; i=i+2){
	printf("%i |",pole[i]);
}
}

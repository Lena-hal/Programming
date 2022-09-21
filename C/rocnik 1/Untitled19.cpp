#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int guess,random,vyhra=0,pokus=0;
	srand(time(0));
	random = rand()%10+1;
	printf("zadej cislo od 1-10\n");
	scanf(" %i",&guess);
	
	
	if (vyhra == 0){
	if (guess == random) {
	printf ("vyhra");
	vyhra=1;
	}
	else {	
	printf("chyba");
	printf("zadej cislo od 1-10\n");
	pokus++;
	scanf(" %i",&guess);
		}
	}
	
		if (vyhra == 0){
	if (guess == random) {
	printf ("vyhra");
	vyhra=1;
	}
	else {	
	printf("chyba");
	printf("zadej cislo od 1-10\n");
	pokus++;
	scanf(" %i",&guess);
		}
	}
		if (vyhra == 0){
	if (guess == random) {
	printf ("vyhra");
	vyhra=1;
	}
	else {	
	printf("chyba");
	printf("zadej cislo od 1-10\n");
	pokus++;
	scanf(" %i",&guess);
		}
	}
		if (vyhra == 0){
	if (guess == random) {
	printf ("vyhra");
	vyhra=1;
	}
	else {	
	printf("chyba");
	printf("zadej cislo od 1-10\n");
	pokus++;
	scanf(" %i",&guess);
		}
	}
		if (vyhra == 0){
	if (guess == random) {
	printf ("vyhra");
	vyhra=1;
	}
	else {	
	printf("chyba");
	printf("zadej cislo od 1-10\n");
	pokus++;
	scanf(" %i",&guess);
		}
	}
		if (vyhra == 0){
	if (guess == random) {
	printf ("vyhra");
	vyhra=1;
	}
	else {	
	printf("chyba");
	printf("zadej cislo od 1-10\n");
	pokus++;
	scanf(" %i",&guess);
		}
	}
		if (vyhra == 0){
	if (guess == random) {
	printf ("vyhra");
	vyhra=1;
	}
	else {	
	printf("chyba");
	printf("zadej cislo od 1-10\n");
	pokus++;
	scanf(" %i",&guess);
		}
	}
		if (vyhra == 0){
	if (guess == random) {
	printf ("vyhra");
	vyhra=1;
	}
	else {	
	printf("chyba");
	printf("zadej cislo od 1-10\n");
	pokus++;
	scanf(" %i",&guess);
		}
	}
		if (vyhra == 0){
	if (guess == random) {
	printf ("vyhra");
	vyhra=1;
	}
	else {	
	printf("chyba");
	printf("zadej cislo od 1-10\n");
	pokus++;
	scanf(" %i",&guess);
		}
	}
	
	if (vyhra == 1) {
		switch(pokus)
		case 0: printf("potreboal jsi 0 pokusu"); break;
		case 0: printf("potreboal jsi 0 pokusu"); break;
		case 0: printf("potreboal jsi 0 pokusu"); break;
		case 0: printf("potreboal jsi 0 pokusu"); break;
		case 0: printf("potreboal jsi 0 pokusu"); break;
		case 0: printf("potreboal jsi 0 pokusu"); break;
		case 0: printf("potreboal jsi 0 pokusu"); break;
		case 0: printf("potreboal jsi 0 pokusu"); break;
		case 0: printf("potreboal jsi 0 pokusu"); break;
		case 0: printf("potreboal jsi 0 pokusu"); break;
	}
}


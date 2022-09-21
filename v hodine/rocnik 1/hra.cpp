#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int random=0,difficulty=0,tryesleft=0,guess=0;
	srand(time(0));
	printf("zadej obtiznost\n 1) jednoducha\n 2) stredni\n 3) tezka\n");
	scanf("%i",&difficulty);
	if (difficulty <4 && difficulty > 0) {
		if (difficulty == 1) {
		random = rand()%10+1;
		tryesleft = 5;
		}
	
	
	
		else if (difficulty == 2) {	
		random = rand()%50+1;
		tryesleft = 7;
		}
	
	
	
		else if (difficulty == 3) {
		random = rand()%100+1;
		tryesleft = 10;
		}
	}
	else {
	printf("chyba\n");
	main();	
	
	}
	
	system("cls");
	
	if (tryesleft > 0&& guess != random)
	{
	printf("zaddej cislo, zbyva %i pokusu\n",tryesleft);
	scanf("%i",&guess);
	if (guess == random) {
		printf("vyhra!\n");
	}
	else if (guess > random) printf("skus mensi\n");
	else printf("skus vetsi\n");
	tryesleft--;
}
	
	if (tryesleft > 0&& guess != random)
	{
	printf("zaddej cislo, zbyva %i pokusu\n",tryesleft);
	scanf("%i",&guess);
	if (guess == random) {
		printf("vyhra!\n");
	}
	else if (guess > random) printf("skus mensi\n");
	else printf("skus vetsi\n");
	tryesleft--;
}
	
	if (tryesleft > 0&& guess != random)
	{
	printf("zaddej cislo, zbyva %i pokusu\n",tryesleft);
	scanf("%i",&guess);
	if (guess == random) {
		printf("vyhra!\n");
	}
	else if (guess > random) printf("skus mensi\n");
	else printf("skus vetsi\n");
	tryesleft--;
}
	
	if (tryesleft > 0&& guess != random)
	{
	printf("zaddej cislo, zbyva %i pokusu\n",tryesleft);
	scanf("%i",&guess);
	if (guess == random) {
		printf("vyhra!\n");
	}
	else if (guess > random) printf("skus mensi\n");
	else printf("skus vetsi\n");
	tryesleft--;
}
	
	if (tryesleft > 0&& guess != random)
	{
	printf("zaddej cislo, zbyva %i pokusu\n",tryesleft);
	scanf("%i",&guess);
	if (guess == random) {
		printf("vyhra!\n");
	}
	else if (guess > random) printf("skus mensi\n");
	else printf("skus vetsi\n");
	tryesleft--;
}
	
	if (tryesleft > 0&& guess != random)
	{
	printf("zaddej cislo, zbyva %i pokusu\n",tryesleft);
	scanf("%i",&guess);
	if (guess == random) {
		printf("vyhra!\n");
	}
	else if (guess > random) printf("skus mensi\n");
	else printf("skus vetsi\n");
	tryesleft--;
}
	
	if (tryesleft > 0&& guess != random)
	{
	printf("zaddej cislo, zbyva %i pokusu\n",tryesleft);
	scanf("%i",&guess);
	if (guess == random) {
		printf("vyhra!\n");
	}
	else if (guess > random) printf("skus mensi\n");
	else printf("skus vetsi\n");
	tryesleft--;
}
	
	if (tryesleft > 0&& guess != random)
	{
	printf("zaddej cislo, zbyva %i pokusu\n",tryesleft);
	scanf("%i",&guess);
	if (guess == random) {
		printf("vyhra!\n");
	}
	else if (guess > random) printf("skus mensi\n");
	else printf("skus vetsi\n");
	tryesleft--;
}
	
	if (tryesleft > 0&& guess != random)
	{
	printf("zaddej cislo, zbyva %i pokusu\n",tryesleft);
	scanf("%i",&guess);
	if (guess == random) {
		printf("vyhra!\n");
	}
	else if (guess > random) printf("skus mensi\n");
	else printf("skus vetsi\n");
	tryesleft--;
}
	
	if (tryesleft > 0&& guess != random)
	{
	printf("zaddej cislo, zbyva %i pokusu\n",tryesleft);
	scanf("%i",&guess);
	if (guess == random) {
		printf("vyhra!\n");
	}
	else if (guess > random) printf("skus mensi\n");
	else printf("skus vetsi\n");
	tryesleft--;
	
}
if (tryesleft == 0&& guess != random) {
system("cls");
printf("PROHRAL JSI!\n");
printf("cislo bylo: %i\n",random);
}
}
		
	
		


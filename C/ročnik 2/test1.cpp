/*
[done] uzivatel zada 20 cisel
[done] vypiše se jestli je kladná nebo neni (navic kladna, zaporna, nula)

pro kladne hodnoty
[done] pomoci ternarniho operatoru zda hodnota je licha nebo suda
[done] vypocitat prumer vsech kladnych cisel

pro zaporne hodnoty
[done] zobrazte absolutni hodnotu

[done] nabydneme opakovani programu

[done] upravit program pro neznamy pocet cisel - uzivatel ukonci zadanim cisla 15
*/


//------------------------------------
//
//	    !!! TEZSI VARIACE !!!
//
//------------------------------------

#include <stdio.h>
#include <stdlib.h>

/*
int main(){
	char opak='N';
	
	do{
	int zh=0, pocet_cisel=0;
	float soucet=0;
	
	do{
	printf("zadej cislo: ");
	scanf("%i",&zh);
	printf("\n");
	
	if (zh==-15) break;
	
	if (zh>0) {
		printf("cislo je kladne\n");
		zh%2?printf("cislo je liche\n\n"):printf("cislo je sude\n\n");
		
		soucet = soucet + zh;
		pocet_cisel++;
		
	}
	else if (zh==0){
		printf("cislo je nulove\n\n");
	}
	
	else {
		printf("cislo je zaporne\n");
		printf("absolutni hodnota cisla je: %i\n\n",zh*-1);
	}
	
	
	
	
}while(zh!=-15);
	
	if (pocet_cisel >0) printf("prumer kladnych cisel je: %.2f\n",soucet/pocet_cisel);
	else printf("prumer kladnych cisel je: [ERROR - zadne kladne cisla nebyli zadany]\n");
	
	printf("chces opakovat??? [Y/N]\n");
	scanf(" %c",&opak);
}while(opak!='N');
}
*/




//------------------------------------
//
//	    !!! LEHCI VARIACE !!!
//
//------------------------------------

int main(){
	char opak='N';
	
	do{
	int zh=0, pocet_cisel=0;
	float soucet=0;
	
	for(int i=0;i<20;i++){
	
	printf("zadej cislo: ");
	scanf("%i",&zh);
	printf("\n");
	
	if (zh>0) {
		printf("cislo je kladne\n");
		zh%2?printf("cislo je liche\n\n"):printf("cislo je sude\n\n");
		
		soucet = soucet + zh;
		pocet_cisel++;	
	}
	else if (zh==0){
		printf("cislo je nulove\n\n");
	}
	
	else {
		printf("cislo je zaporne\n");
		printf("absolutni hodnota cisla je: %i\n\n",zh*-1);
	}	
}
	
	if (pocet_cisel >0) printf("prumer kladnych cisel je: %.2f\n",soucet/pocet_cisel);
	else printf("prumer kladnych cisel je: [ERROR - zadne kladne cisla nebyli zadany]\n");
	
	printf("chces opakovat??? [Y/N]\n");
	scanf(" %c",&opak);
	
}while(opak!='N');
}


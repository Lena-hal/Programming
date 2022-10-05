#include <stdio.h>
#include <stdlib.h>

/*
a) obvod a obsah ctverce
b) overeni vstupu
c) upraveni programu pro 5 ctvercu kazdy ma stranu delsi o 3 nez predtim
d) zeptejte se na jednotku a prevedte cm. nabydka: km, m, dm, cm, mm (nezapomenout na obsah v cm2)
e) moznost opakovat program
*/

int obvod_ctverce(int strana){
	int vysledek;
	vysledek = (strana)*4;
	return(vysledek);
}

int obsah_ctverce(int strana){
	int vysledek;
	vysledek = (strana)*(strana);
	return(vysledek);
}

int main(){
	int strana, nasobitel;
	char konec='N';
	do {
	
	do{	
	printf("zadej delku strany ctverce: ");
	scanf("%i",&strana);
	if (strana <=0) {
	printf("cislo musi byt vetsi jak 0"); 
	getchar();getchar();
	}
}while (strana<=0);

	printf("jaka jednotka je?\n1) km\n2) m\n3) dm\n4) cm\n");
	
	scanf("%i",&nasobitel);
	
	switch(nasobitel){
		case 1: nasobitel=100000; break;
		case 2: nasobitel=100; break;
		case 3: nasobitel=10; break;
		case 4: nasobitel=1; break;
	}
	
	for(int i=0; i<5; i++){	
	printf("obsah %i. ctverce je: %i cm^2\n",i+1,obsah_ctverce(strana+i*3)*nasobitel);
	printf("obvod %i. ctverce je: %i cm\n",i+1,obvod_ctverce(strana+i*3)*nasobitel);
}
printf("chcete opakovat? [Y/N]\n");
getchar();
scanf("%c",&konec);
} while(konec=='Y');
	
}

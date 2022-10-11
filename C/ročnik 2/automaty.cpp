#include <stdio.h>
#include <stdlib.h>


void render(int vklad, int cena) {
	system("cls");
	printf("[1] kofola - 15kc\n[2] pepsi - 50 kc\n[3] voda - 3kc\n");
	printf("-----------------");
	printf("\nvlozenych korun: %i", vklad);
	printf("\nzbyva vlozit: %i\n\n", cena-vklad);
	
}

int main() {
	int vklad=0, vyber=0, cena=0, mince=0;
	
	render(vklad, cena);
	while(vyber<=0||vyber>3){
		printf("vyber si nakup: ");
		scanf("%i",&vyber);
	}
	switch(vyber){
		case 1: cena=15; break;
		case 2: cena=50; break;
		case 3: cena=3; break;
	}
	render(vklad, cena);
	
	while(vklad<cena){
		printf("vloz minci: ");
		scanf("%i",&mince);
		if (mince==1||mince==2||mince==5||mince==10||mince==20||mince==50){
			vklad += mince;
		render(vklad, cena);
		
	}
	}
	
}

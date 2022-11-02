#include <stdio.h>
//uzivatel zada hodnotu v cm, vypocitejte obsah  ctvercu kdy prvni ma delku zadane hodnoty a kazdy daldsi ma stranu o 6 cm delsi, overte vstupni data
int main(){
	const int zvetseni=6; 
	float vstup=-1;
	
	do{ 
	
	printf("zadej delku ctverce:"); 
	scanf("%f",&vstup); 
	
	} while(vstup<0);
	
	for (int i=0; i<5; i++) {
	printf("%i. ctverec ma obsah: %.2f cm2\n", i+1, (vstup+(i*zvetseni))*(vstup+(i*zvetseni)));
	}
}


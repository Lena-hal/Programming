#include <stdio.h>

int main()
{
	int cislo, JeNasobilka = 1, vysledek;
	printf("zadej cislo:");
	scanf("%i",&cislo);
	if (cislo<1) 		JeNasobilka = 0;
	if (cislo>10) JeNasobilka = 0;
	if (JeNasobilka == 0 ) printf("chyba");
	if (JeNasobilka == 1)
	{
		printf("nasobilka je:\n");
		vysledek = cislo*0;
		printf("%i*0 = %i\n",cislo,vysledek);
		vysledek = cislo*1;
			printf("%i*1 = %i\n",cislo,vysledek);
		vysledek = cislo*2;
			printf("%i*2 = %i\n",cislo,vysledek);
		vysledek = cislo*3;
			printf("%i*3 = %i\n",cislo,vysledek);
		vysledek = cislo*4;
			printf("%i*4 = %i\n",cislo,vysledek);
		vysledek = cislo*5;
			printf("%i*5 = %i\n",cislo,vysledek);
		vysledek = cislo*6;
			printf("%i*6 = %i\n",cislo,vysledek);
		vysledek = cislo*7;
			printf("%i*7 = %i\n",cislo,vysledek);
		vysledek = cislo*8;
			printf("%i*8 = %i\n",cislo,vysledek);
		vysledek = cislo*9;
			printf("%i*9 = %i\n",cislo,vysledek);
		vysledek = cislo*10;
			printf("%i*10 = %i\n",cislo,vysledek);
	}
}

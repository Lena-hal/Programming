
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int napoveda = 1; // tahle deklarace je mimo hlavni loop protože se používá main(); a data v tehle proměnné potřebuju zachovat

int main()
{
	int random = -5, lives = 0, custom_int = 0, range = 0, guess = 0;
	char menu = '0';
	srand(time(0));


	while (menu < '1' || menu>'6') { // while loop na to aby někdo hloupej nemohl zadat špatnou hodnotu
		menu = '0';
		printf("[1]lehka (1-10, 4 pokusy)\n[2]stredni (1-30, 7 pokusu)\n[3]tezka (1-100, 9 pokusu)\n[4]Vlastni obtiznost\n[5]Nastaveni\n[6]Konec\n");
		scanf("%c", &menu);
		getchar();
		system("cls");
	}
	switch (menu) {
	case('1'): random = rand() % 10 + 1; lives = 4; range = 10; break; // case 1-3 jsou normální obtížnosti přesně podel zadani
	case('2'): random = rand() % 30 + 1; lives = 7; range = 30; break;
	case('3'): random = rand() % 10 + 1; lives = 9; range = 100; break;
	case('4'): { // case 4 je "custom" obtižnost s nastavitelnými životy a roszmezí nahodne hodnoty
		while (custom_int < 2) {
			printf("Jake ma byt rozmezi hadane hodnoty?\n");
			scanf("%i", &custom_int);
		}
		range = custom_int;
		random = rand() % custom_int + 1;
		system("cls");

		while (lives < 1) {
			printf("Kolik zivotu?\n");
			scanf("%i", &lives);
		}
		break;
	}
	case('5'): { // case 5 je na otevírání nastavení v kterem jde nastavit "blind" mode (přestanou se zobrazovat všechny napovědy stylu "čislo je větši")
		menu = '0';
		while (menu != '2') {
			menu = '0';
			while (menu < '1' || menu>'2') {
				printf("[1]napoveda (napoveda je spustena: %i)\n[2]spet do menu\n", napoveda);
				scanf("%c", &menu);
				getchar();
			}
			switch (menu) {
			case('1'): { // položka 1 v menu nastaveni (zapinani a vypinani napověd)
				if (napoveda == 0) napoveda = 1;
				else napoveda = 0;
				system("cls");
				break;
			}
			case('2'): system("cls"); main(); break; // položka 2 v menu nastaveni (vraceni se naspatek do main menu)

			}
		}
		break;
	}
	case('6'): break; // vypnuti hry
	}
	if (menu != '6') { // tady začina hlavni kod hry s hadanim
		while (lives >= 0 && range !=0) {
			if (guess != random) {
				printf("zadej cislo v rozmezi 0-%i, zbyva %i pokusu\n", range, lives);
				scanf("%i", &guess);

				if (guess > 0 && guess < range + 1) {
					lives--;
					if (guess > random) {
						if (napoveda == 1) { // napověda vypnutelna v nastaveni
							printf("pocitac si mysli mensi hodnotu\n");
						}
					}
					else if (guess < random) {
						if (napoveda == 1) { // napověda vypnutelna v nastaveni
							printf("pocitac si mysli vetsi hodnotu\n");
						}
					}
					else if (guess == random) {
						if (lives > -1) {
							system("cls"); // oznámení o výhře
							printf("Vyhral jsi!! zbyvalo ti %i pokusu, cislo bylo: %i\n", lives, random);
							continue;
						}

					}

				}
				else { // oznámení o zadání chybné hodnoty
					printf("tato hodnota neni v urcenem rozmezi...\n");
				}



			}
			else break;
		}
		if (lives == -1) {
			system("cls"); // oznámení o prohře
			printf("prohral jsi :(\n cislo bylo %i",random);
		}
	}

}
// konec programu



	





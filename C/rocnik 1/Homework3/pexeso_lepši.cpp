#include <iostream>
#include <stdlib.h>
#define hrana "### ### ### ###"
char pexeso[9] = {' ', '!','?', '-', '+', '!', '-', '?', '+'}; //1+5, 2+7, 3+6, 4+8
int pary = 4, karta1=0, karta2=0;

int main() {
	while (pary != 0) {
		std::cout << hrana << "\n";
		for (int i = 1; i < 5; i++) {
			if (pexeso[i] != ' ') { std::cout << "#" << i << "# "; }
			else std::cout << "# # ";
		}

		std::cout << "\n" << hrana << "\n\n" << hrana << "\n";

		for (int i = 5; i < 9; i++) {
			if (pexeso[i] != ' ') { std::cout << "#" << i << "# "; }
			else std::cout << "# # ";
		}

		std::cout << "\n" << hrana << "\n\n" << "zadej 1. kartu:\n";
		std::cin >> karta1;
		std::cout << pexeso[karta1] << "\n\nzadej 2. kartu:\n";
		std::cin >> karta2;
		std::cout << pexeso[karta2] << "\n";
		if (pexeso[karta1] == pexeso[karta2] && pexeso[karta1] != ' '&& karta1 != karta2) {
			pary--;
			pexeso[karta1] = ' ';
			pexeso[karta2] = ' ';
		}
		getchar(); getchar();
		system("cls");
	}
	std::cout << "VYHRAL JSI!";
	getchar(); getchar();
}

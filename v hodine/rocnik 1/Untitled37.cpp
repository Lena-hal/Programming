#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

void center_lines(){
	for (int i=0; i<9; i++){
		std::cout << "\n";
	}
}

void center_space(int word_lenght){
	for (int i=0; i<(40/2)-(word_lenght/2); i++){
		std::cout << " ";
	}
}

void menu(){
	system("cls");
	center_lines();
	center_space(8);
	std::cout << "[1] game\n";
	center_space(8);
	std::cout << "[2] credits\n";
	/*
	center_space(14);
	std::cout << "[3] impossible\n";
	center_space(1);
	*/
	
}


void win(int pcGuess, int playerGuess){
	
	center_space(23);
	switch(pcGuess){
		case 1: std::cout << "Pocitac vybral: |KAMEN|\n"; break;
		case 2: std::cout << "Pocitac vybral: |PAPIR|\n"; break;
		case 3: std::cout << "Pocitac vybral: |NUZKY|\n"; break;
		
		
	}
	
	if (pcGuess==playerGuess){
				std::cout << "\n";
				center_space(8);
				std::cout << "|REMIZA|\n";

			}
			
	else if(playerGuess==1){ //KAMEN LOGIKA	
		if(pcGuess==2){
					center_space(8);
				std::cout << "|PROHRA|\n";
				}
		else if(pcGuess=3){
					center_space(7);
				std::cout << "|VYHRA|\n";
				}
			}
			
	else if(playerGuess==2){// PAPIR LOGIKA
		if(pcGuess==1){
					center_space(7);
				std::cout << "|VYHRA|\n";
				}
		else if(pcGuess=3){
					center_space(8);
				std::cout << "|PROHRA|\n";
				}
			}
			
	else if(playerGuess==3){// NUŽKY LOGIKA
		if(pcGuess==1){
					center_space(8);
				std::cout << "|PROHRA|\n";
				}
		else if(pcGuess=2){
					center_space(7);
				std::cout << "|VYHRA|\n";
				}
			}
}


void game(int difficulty){
	system("cls");
	int hracGuess, pcGuess;
	
	switch(difficulty){
		case 1: {
			center_space(6);
			std::cout << "[GAME]\n\n\n";
			pcGuess = rand()%3+1;
			center_space(9);
			std::cout << "[1] KAMEN\n";
			center_space(9);
			std::cout << "[2] PAPIR\n";
			center_space(9);
			std::cout << "[3] NUZKY\n";
			center_space(16);
			std::cout << "vyber moznost:";
			std::cin >> hracGuess;
		
			win(pcGuess,hracGuess);
			
				
			break;
		} 
		case 2:
			for(int i=0; i<20; i++){
				system("cls");
				for (int j=20; j>i; j--){
					std::cout << "\n";
				}
				if(i<16){
				center_space(9);
				std::cout << "Vytvoril:\n";
				}
				if(i<17){
				center_space(16);
				std::cout << "Oldrich Halabala\n";
				}
				
				if(i<18){
				center_space(8);
				std::cout << "Ve tride:\n";
				}
				if(i<19){
				center_space(5);
				std::cout << "IT-1B\n";
				}
				Sleep(250);
			}getchar();getchar();
	
	
	
}
}
int main(){
	srand(time(0));
	system("mode 40,20");
	int difficulty=-2;
	do{
	menu();
	std::cin >> difficulty;
} while(difficulty<1||difficulty>2);

	game(difficulty);
	char an;
	center_space(26);
	std::cout << "chces hrat znova? [Y/N]: ";
	std::cin >> an;
	if (an == 'Y'){
		main();
	}
	
	
	
	
}


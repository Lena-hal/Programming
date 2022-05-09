#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>

int main(){
	system("mode 40,20");
	int a=0,b,c;
	do{
			for (int j=0;  j<9; j++){
		printf("\n");
		}
		for (int i=0;  i<15; i++){
		printf(" ");
		}
		printf("zh: ");
		scanf("%i",&a);
		system("cls");
		
	} while(a<=0);
	
	while  (a!=0){
			for (int j=0;  j<9; j++){
		printf("\n");
		}
		for (int i=0;  i<18; i++){
		printf(" ");
		}
		printf("%i",a);
		Sleep(1000);
		system("cls");
		a--;
		
	}
		for (int j=0;  j<9; j++){
		printf("\n");
		}
		for (int i=0;  i<15; i++){
		printf(" ");
		}
	printf("BEEP!");
	//ExitWindows(0,1);
	
	Beep(1000,10000);
	getchar();getchar();
	
}
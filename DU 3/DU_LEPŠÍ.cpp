#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>


void indent(int znak){
	for (int j=0;  j<9; j++){
		printf("\n");
		}
	for (int i=0;  i<19-znak; i++){
	printf(" ");
	}
}

int main(){
	system("mode 40,20");
	int a=0,b,c;
	do{
		indent(5);
		printf("zh: ");
		scanf("%i",&a);
		system("cls");
		
	} while(a<=0);
	
	while  (a!=0){
		indent(1);
		printf("%i",a);
		Sleep(1000);
		system("cls");
		a--;
		
	}
	indent(5);
	printf("BEEP!");
	Beep(523,100);
	Beep(391,100);
	Beep(329,100);
	Beep(261,200);
	getchar();getchar();
	
}
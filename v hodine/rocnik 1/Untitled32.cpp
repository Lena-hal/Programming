#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

void indent(int size) {
	for (int i=0; i<10;i++){
		printf("\n");
	}
	for (int j=0; j<20-size;j++){
			printf(" ");
		}
}


int main () {
	system("mode 40,20");
	int a=0, b ,c;
	do {
		indent(4);
		printf("zh: ");
		scanf("%i",&a);
		system("cls");
	}
	while(a<=0||a>=60);
	
	while (a>=0) {
		system("cls");
		indent(2);
		if (a>9){
			printf("%i",a);
		}
		else {
			printf("0%i",a);
		}
		a--;
		Sleep(1000);
		
		
	}
	getchar();getchar();
	
	
	
}

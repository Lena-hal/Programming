#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	system("mode 80,30");
	
	char y = '*'; // znak kter�m se m� �tverec nakreslit
	int x;
	
	while (x<1||x>20){ // o�et�en� vstupu
	
	printf("zadej delku strany\n");
	scanf("%i",&x);
	system("cls");
	}
	
	
	for (int i=x;i!=0;i--) { // kreslen� �tverce
		
		for (int k=x;k!=0;k=k-i) { //kreslen� znaku
		printf(" ");
		}
		for (int j=0;j!=x;j=j++) { //kreslen� znaku
		printf("%c",y);
		j++;
		}
		
	printf("\n"); //od��dkov�n� na dal�� ��dek �tverce
	}
	getchar();getchar();
}


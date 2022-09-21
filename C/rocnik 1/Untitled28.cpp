#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	system("mode 80,30");
	
	char y = '*'; // znak kterým se má ètverec nakreslit
	int x;
	
	while (x<1||x>20){ // ošetøení vstupu
	
	printf("zadej delku strany\n");
	scanf("%i",&x);
	system("cls");
	}
	
	
	for (int i=x;i!=0;i--) { // kreslení ètverce
		
		for (int k=x;k!=0;k=k-i) { //kreslení znaku
		printf(" ");
		}
		for (int j=0;j!=x;j=j++) { //kreslení znaku
		printf("%c",y);
		j++;
		}
		
	printf("\n"); //odøádkování na další øádek ètverce
	}
	getchar();getchar();
}


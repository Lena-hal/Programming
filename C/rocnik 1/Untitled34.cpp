#include <stdio.h>
#include <Windows.h>
#include <stdio.h>
#include <time.h>

int main()
{
	system("mode 80,40");
	int pokusy=3;
	char a, b, c, d, e, f, g, h;
	for (int i; i<20;i++){
		printf("\n");	
	}
	for (int j; j<32;j++){
		printf(" ");
	}
	printf("Zadej Heslo: ");
	scanf("%c%c%c%c",&a, &b, &c, &d);
	while (pokusy !=0){
	getchar(); getchar();
	system("cls");
	for (int i=0; i<20;i++){
		printf("\n");	
	}
	for (int j=0; j<32;j++){
		printf(" ");
	}
	printf("Zadej overeni hesla: ");
	scanf("%c%c%c%c", &e, &f, &g, &h);
	if (a == e && b == f && c == g && d == h) {
		for (int i; i<20;i++){
		printf("\n");	
	}
	for (int j=0; j<7;j++){
		printf(" ");
	}
		printf("\nPRISTUP POVOLEN !");
		break;
	}
	else{
	
	printf("\n");
	for (int j=0; j<32;j++){
		printf(" ");
	}
		printf("pristup zamitnut");
		pokusy--;
	}
}
}

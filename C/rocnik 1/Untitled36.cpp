#include <stdio.h>
#include <stdlib.h>


int main(){
	float a, b, c ,d ,e, f;
	char g, h;
	for (int i=0; i<30;i++){
	printf("%c",219);
}
printf("\n%c                            %c",219,219);
printf("\n%c    7        8      9    /  %c",219,219);
printf("\n%c                            %c",219,219);
printf("\n%c    4        5      6    *  %c",219,219);
printf("\n%c                            %c",219,219);
printf("\n%c    1        2      3    -  %c",219,219);
printf("\n%c                            %c",219,219);
printf("\n%c    0        ,      =    +  %c",219,219);
printf("\n%c                            %c\n",219,219);
printf("%c    ",219);
for (int i=0; i<20;i++){
	printf("%c",219);
}
printf("    %c",219);

printf("\n%c    %c                  %c    %c",219,219,219,219);
printf("\n%c    %c                  %c    %c",219,219,219,219);

printf("\n       Zadej cislo: ");
scanf(" %f",&a);
while(true){

printf("       Zadej operator: ");
scanf(" %c",&g);
if (g=='=') break;
printf("       Zadej cislo:");
scanf(" %f",&b);
switch(g){
	case '/': a = a/b; break;
	case '*': a = a*b; break;
	case '-': a = a-b; break;
	case '+': a = a+b; break;
}
}
system("cls");
	for (int i=0; i<30;i++){
	printf("%c",219);
}
printf("\n%c                            %c",219,219);
printf("\n%c    7        8      9    /  %c",219,219);
printf("\n%c                            %c",219,219);
printf("\n%c    4        5      6    *  %c",219,219);
printf("\n%c                            %c",219,219);
printf("\n%c    1        2      3    -  %c",219,219);
printf("\n%c                            %c",219,219);
printf("\n%c    0        ,      =    +  %c",219,219);
printf("\n%c                            %c\n",219,219);
printf("%.2f\n",a);
for (int i=0; i<30;i++){
	printf("%c",219);
}
}


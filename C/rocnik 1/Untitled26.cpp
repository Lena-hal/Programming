#include <stdio.h>

int main() {

int a,b,c,p;

printf("zadej 3 hodnoty\n");
scanf("%i%i%i",&a,&b,&c);
if (a>b){
	p=a;
	a=b;
	b=p;
}
if (a>c){
	p=a;
	a=c;
	c=p;
}
if (b>c){
	p=b;
	b=c;
	c=p;
	
}
}

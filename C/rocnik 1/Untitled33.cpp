#include <stdio.h>
int main(){
	int a=-1, b=-1, c=-1, d=-1, e=-1;
	char z = 219;
	
	
	while (a<0||a>20){
		printf("po: ");
		scanf("%i",&a);
	}
	
	
	while (b<0||b>20) {
		printf("\nut: ");
		scanf("%i",&b);
	}
	
	
	while (c<0||c>20) {
		printf("\nst: ");
		scanf("%i",&c);
	}
	
	while (d<0||d>20) {
		printf("\nct: ");
		scanf("%i",&d);
	}
	
	
	while (e<0||e>20) {
		printf("\npa: ");
		scanf("%i",&e);
	}
	
	printf("\n--------------------------------\n");
	printf("po: ");
	int i=0;
	for (i=0; i<a; i++) {
		printf("%c",z);	
	}
	while(i<25){
		printf(" ");
		i++;
	}
	printf("%i\n\n",a);
	
	printf("ut: ");
	for (i=0; i<b; i++) {
		printf("%c",z);	
	}
	while(i<25){
		printf(" ");
		i++;
	}
	printf("%i\n\n",b);
	
	printf("st: ");
	for (i=0; i<c; i++) {
		printf("%c",z);	
	}
	while(i<25){
		printf(" ");
		i++;
	}
	printf("%i\n\n",c);
	
	printf("ct: ");
	for (i=0; i<d; i++) {
		printf("%c",z);	
	}
	while(i<25){
		printf(" ");
		i++;
	}
	printf("%i\n\n",d);
	
	printf("pa: ");
	for (i=0; i<e; i++) {
		printf("%c",z);	
	}
	while(i<25){
		printf(" ");
		i++;
	}
	printf("%i\n",e);
	printf("--------------------------------\n");
	getchar();getchar();
}

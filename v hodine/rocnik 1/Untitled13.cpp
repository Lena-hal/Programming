#include <stdlib.h>
#include <stdio.h>
int main()
{
	float a, c;
	char b, d;
	printf("zadej hodnotu 1: ");
	scanf("%f",&a);
	printf("zadej operator: ");
	getchar();
	scanf("%c",&b);
	printf("zadej hodnotu 2: ");
	scanf("%f",&c);
	if(b=='+') {
		printf("%.2f + %.2f = %.2f",a,c,a+c);
	}
	else if(b=='-') {
		printf("%.2f - %.2f = %.2f",a,c,a-c);
	}
	else if(b=='*') {
		printf("%.2f * %.2f = %.2f",a,c,a*c);
	}
	else if(b=='/') {
		if (c==0)
			{
				printf("nejde delit 0");
			}
		else
			{
		printf("%.2f / %.2f = %.2f",a,c,a/c);	
			}
	}
	printf("\n chcete pokracovat? [Y/N]\n");
	scanf(" %c",&d);
	if (d =='Y' or d == 'y') {
	system("cls");
	main();	
	} 

}

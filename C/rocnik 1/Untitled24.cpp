#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main ()
{
	srand(time(0));
	int r1 = rand()%3;
	int r2 = rand()%3;
	int r3 = rand()%3;
	int r4 = rand()%3;
	int sum=0,m=1,vysledek=0;
	
	if (r1==1||r1==0) {sum = sum + r1*m; m=m*10;}
	if (r2==1||r2==0) {sum = sum + r2*m; m=m*10; }
	if (r3==1||r3==0) {sum = sum + r3*m; m=m*10; }
	if (r4==1||r4==0) {sum = sum + r4*m; }
	if (sum/1000==1) vysledek+=8 ;
	if (sum%1000/100==1) vysledek+=4;
	if (sum%100/10==1) vysledek+=2;
	if (sum%10==1) vysledek+=1;
	printf("%i%i%i%i = %i\n",r1,r2,r3,r4,vysledek);
}


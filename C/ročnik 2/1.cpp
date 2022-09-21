#include <stdio.h>
#include <stdlib.h>

// uživatel zadá 3 hodnoty a musime vypsat min, max a mid a mìlo by to funogvat i když èisla jsou stejny
int main() {
	int a, b ,c, min, max, mid;
	bool midHelp = false;
	printf("zh 3 hodnoty\n");
	scanf("%i",&a);
	
	min = a;
	max = a;
	
	scanf("%i",&b);
	
	if (b<min) min=b;
	if (b>max) max=b;
	
	scanf("%i",&c);
	
	if (c<min) min=c;
	if (c>max) max=c;
	
	if (a!=min&&a!=max) {mid = a; midHelp = true;}
	if (b!=min&&b!=max) {mid = b; midHelp = true;}
	if (c!=min&&c!=max) {mid = c; midHelp = true;}
	
	printf("MIN: %i,\nMID: %i\nMAX: %i.", min,mid,max);
	
}

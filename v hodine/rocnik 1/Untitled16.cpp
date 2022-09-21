#include <stdio.h>
int main()
{
	int a,b,c,d,max1,max2;
	printf("zh4\n");
	scanf("%i%i%i%i",&a,&b,&c,&d);
	max1 = (a>b?a:b);
	max2 = (c>d?c:d);
	a = (max1>max2?printf("%i\n",max1):printf("%i\n",max2));
	printf("%i\n",max1>max2?max1:max2);
	main();
}

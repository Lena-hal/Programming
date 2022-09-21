#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	srand(time(0));
	int a=0,b=0,c=0,d=0;
	do{
		a=rand()%9+1;
		printf("%i\n",a);
		if(a>0&&a<6)
		{
			b=b+a;
			c++;
		}
		d++;
	}
	while(d!=5);
	if (c==0)
	{
		printf("nebyla zadana zadna hodnota");
	}
	else {
	printf("%.2f\n",(float)b/c);
	main();
}
}




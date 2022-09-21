#include <stdio.h>
int main()
{
	int a, b;
	// vytvoøím promìnné A a B
	printf("zadej cislo\n");
	// vypíšu "zadej èíslo"
	scanf("%i",&a);
	//naskenuju A
	scanf("%i",&b);
	//naskenuju B
	if (a % b != 0)
	//pokud a%b nerovná se 0 napíš:
	{
		//vypíše má zbytek
		printf("ma zbytek");
	}
	else
	//pokud ale rovná se 0 tak:
	{
		printf("nema zbytek");
		//má zbytek
	}
		
}

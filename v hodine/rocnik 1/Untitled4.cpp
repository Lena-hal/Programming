#include <stdio.h>
int main()
{
	int a, b;
	// vytvo��m prom�nn� A a B
	printf("zadej cislo\n");
	// vyp�u "zadej ��slo"
	scanf("%i",&a);
	//naskenuju A
	scanf("%i",&b);
	//naskenuju B
	if (a % b != 0)
	//pokud a%b nerovn� se 0 nap�:
	{
		//vyp�e m� zbytek
		printf("ma zbytek");
	}
	else
	//pokud ale rovn� se 0 tak:
	{
		printf("nema zbytek");
		//m� zbytek
	}
		
}

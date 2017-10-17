#include <stdio.h>

int main()
{
	int i;
	float wynik;
	float a,b;
	do
	{
		printf("Co chcesz zrobic?\n1.Dodawanie\n2.Odejmowanie\n3.Mnozenie\n4.Dzielenie\n0.Wyjdz\n");
		scanf("%d",&i);
		switch(i)
		{
			case 1:
				{
					printf("Dodawanie:\n");
					printf("podaj 1. liczbe.\n");
					scanf("%f",&a);
					printf("podaj 2. liczbe.\n");
					scanf("%f",&b);
					wynik=a+b;
					break;
				}
			case 2:
				{
					printf("Odejmowanie:\n");
					printf("podaj 1. liczbe.\n");
					scanf("%f",&a);
					printf("podaj 2. liczbe.\n");
					scanf("%f",&b);
					wynik=a-b;
					break;
				}
			case 3:
				{
					printf("Mnozenie:\n");
					printf("podaj 1. liczbe.\n");
					scanf("%f",&a);
					printf("podaj 2. liczbe.\n");
					scanf("%f",&b);
					wynik=a*b;
					break;
				}
			case 4:
				{
					printf("Dzielenie:\n");
					printf("podaj 1. liczbe.\n");
					scanf("%f",&a);
					printf("podaj 2. liczbe.\n");
					scanf("%f",&b);
					wynik=a/b;
					break;
				}
			case 0:
				{
					printf("Dowidzenia\n");
					break;
				}
			default:
				{
					printf("Niezrozumiala wartosc, prosze wybrac jeszcze raz.\n");
					break;
				}
		}
		if(i!=0)
		{
			printf("Wynik=%.2f\n\n",wynik);
		}
	}while(i!=0);
return 0;
}
